pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                script {
                    // Compile the .cpp file using a shell script
                   
                    sh 'g++ -o output hello.cpp'
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
