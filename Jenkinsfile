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
    }
}
