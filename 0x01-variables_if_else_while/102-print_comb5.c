#include <stdio.h>


int main(void)
{
	    int n;
	        int b;
		    int p;
		        int a;

			    for (n=48; n<58; n++)
				        {
						       for (p=48; p<57; p++)
							              {
									                  for (b = 48; b < 58; b++)
												              {
														                      for (a = 49; a < 58; a++)
																	                      {
																				                          putchar(n);
																							                      putchar(p);
																									                          putchar(' ');
																												                      putchar(b);
																														                          putchar(a);
																																	                      if (n==57 && p==56 &&b == 57 && a == 57)
																																				                          {
																																								                          break;
																																											                      }
																																			                          else
																																							                      {
																																										                              putchar(',');
																																													                              putchar(' ');
																																																                          }
																																						                  }
																                  }
											         }
						           }
			        putchar('\n');
				    return (0);
}

