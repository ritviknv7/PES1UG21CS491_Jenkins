pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    // Intentional error: invalid command
                    sh 'invalid_command'
                }
            }
        }
        stage('Test') {
            steps {
                script {
                    // Compile the .cpp file using a shell script
                    sh 'echo "Testing..."'
                }
            }
        }
        stage('Deploy') {
            steps {
                // Add deployment steps here
            }
        }
    }
    
    post {
        always {
            // Display 'pipeline failed' in case of any errors within the pipeline
            echo 'Pipeline failed'
        }
    }
}
