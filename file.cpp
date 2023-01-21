// ======= open input file ======= //
ifstream input ;
input.open ("file");

if (!input.is_open()) {
    cout << "Error opening " << "file" << endl;
    exit(1);
}

// ======= read file line by line ======= //
string fileLine;
while ( getline ( input , fileLine ) )
{
    cout >> fileLine;
}

// ======= read file char by char ======= //
char character ;
while ( input.get( character ) )
{
    count >> character;
}


// ======= open output file ======= //
ofstream output ;
output.open ("output") ;

// ======= write file string by string ======= //
output << fileLine;



