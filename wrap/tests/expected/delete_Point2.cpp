// automatically generated by wrap
#include <wrap/matlab.h>
#include <Point2.h>
void mexFunction(int nargout, mxArray *out[], int nargin, const mxArray *in[])
{
  checkArguments("delete_Point2",nargout,nargin,1);
  delete_shared_ptr< Point2 >(in[0],"Point2");
}
