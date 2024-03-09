pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    // Compile the .cpp file using a shell script
                    sh 'g++ -o output main.cpp'
                }
            }
        }
        stage('Test') {
            steps {
                script {
                    // Print output of the compiled .cpp file using a shell script
                    sh './output'
                }
            }
        }
        stage('Deploy') {
            steps {
                // Add deployment steps here
                echo 'deploy'
            }
        }
    }
    
    post {
        failure {
            // Display 'pipeline failed' in case of any errors within the pipeline
            error 'Pipeline failed'
        }
    }
}
