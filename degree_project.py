import os
import click

@click.command()
@click.option ("-o", prompt="Rename your file         --> ", type=click.Path(exists=True), help="Enter old file's name")
@click.option ("-n", prompt="The new name of file is  --< ", type=click.Path(file_okay=True), help="Enter new file's name")
def renamer(o, n):
   
   click.secho("NB! don't forget specify the file extension!", fg='yellow')
   click.echo(f"{o} -rename-> {n}")
   click.secho("Your file name has been changed SUCCESSFULLY!",fg="blue", blink=True)
   os.rename(o, n)
  
if __name__ == '__main__':
 import os
 renamer()