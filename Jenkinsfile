pipeline {
    agent {
        label 'hemtt'
    }

    stages {
        stage('Build') {
            steps {
                bat 'hemtt build --release'
            }
        }

        stage('Archive Build') {
            steps {
                archiveArtifacts artifacts: 'releases/1.0.0/**/*'
            }
        }

        stage('Publish to Steam Workshop') {
            when {
                branch 'master'
            }

            steps {
                publishSteamWorkshop '1882881196', 'releases/1.0.0/@anrop_difficulty_settings', "https://github.com/Anrop/Anrop-Difficulty-Settings/commit/${env.GIT_COMMIT}"
            }
        }
    }
}

void publishSteamWorkshop(String id, String mod, String changeNote) {
    bat "\"C:\\Program Files (x86)\\Steam\\SteamApps\\common\\Arma 3 Tools\\Publisher\\PublisherCmd.exe\" update /changeNote:$changeNote /id:$id /path:$mod"
}
