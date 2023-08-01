
//Striver Pattern Series
//Pattern-1: Rectangular Star Pattern
void printSquare(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

//Pattern-2: Right-Angled Triangle Pattern
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

//Pattern – 3: Right-Angled Number Pyramid
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            int k=1;
            for(int j=0;j<=i;j++){
                cout<<k++<<" ";
            }
            cout<<endl;
        }
    }

//Pattern – 4: Right-Angled Number Pyramid – II
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }

//Pattern-5: Inverted Right Pyramid
void printTriangle(int n) {
	   for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
	}

//Pattern – 6: Inverted Numbered Right Pyramid
void printTriangle(int n) {
	    for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
	}

//Pattern – 7: Star Pyramid
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            
            //printing space before stars
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            
            //printing stars
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            
            //printing space after stars
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }

//Pattern – 8: Inverted Star Pyramid
void printTriangle(int n) {
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        for(int j=0;j<2*n-2*i-1;j++){
	            cout<<"*";
	        }
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        cout<<endl;
	   
	    }
	    
	}

//Pattern – 11: Binary Number Triangle Pattern
void printTriangle(int n) {
        
        for(int i=0;i<n;i++){
            int no=(i%2)?0:1;
            for(int j=0;j<=i;j++){
                if(no==1){
                    cout<<no<<" ";
                    no=0;
                }
                else{
                    cout<<no<<" ";
                    no=1;
                }
            }
            cout<<endl;
        }

//Pattern – 12: Number Crown Pattern
void printTriangle(int N) {
         int spaces = 2*(N-1);
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          // for printing spaces in each row
          for(int j = 1;j<=(2*N)-(2*i);j++){
              cout<<" ";
          }
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
      }
    }

//Pattern – 13: Increasing Number Triangle Pattern
void printTriangle(int n) {
        
        int k=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<k++<<" ";
            }
            cout<<endl;
        }
    }

//Pattern-14: Increasing Letter Triangle Pattern
void printTriangle(int n) {
        
        
        for(int i=0;i<n;i++){
            char ch='A';
            for(int j=0;j<=i;j++){
                cout<<ch++;
            }
            cout<<endl;
        }
    }

//Pattern-15: Reverse Letter Triangle Pattern
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            char ch='A';
            for(int j=0;j<n-i;j++){
                cout<<ch++;
            }
            cout<<endl;
            ch='A';
        }
    }


//Pattern – 16: Alpha-Ramp Pattern
void printTriangle(int n) {
        
        char ch='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<ch;
            }
            ch=ch+1;
            cout<<endl;
        }
    }

//Pattern – 17: Alpha-Hill Pattern
void printTriangle(int n) {
        for(int i=0;i<n;i++){
          
          // for printing the spaces.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          cout<<endl;
    }


//Pattern-18: Alpha-Triangle Pattern
void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(char ch =('A'+n-1);ch>=('A'+n-1)-i;ch--){
              cout<<ch<<" ";
          }
            cout<<endl;
        }
    }

//Pattern-19: Symmetric-Void Pattern
//Pattern – 20: Symmetric-Butterfly Pattern

//Pattern – 21: Hollow Rectangle Pattern
void printSquare(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }

//Pattern – 22: The Number Pattern

