#ifndef RAYH
#define RAYH
#include <vec3.h>

//The one thing that all ray tracers have is a ray class,
// and a computation of what color is seen along a ray.
// Let’s think of a ray as a function p(t)=A+t∗B.
// Here p is a 3D position along a line in 3D. 
// A is the ray origin and B is the ray direction. 
// The ray parameter t is a real number (float in the code).
// Plug in a different t and p(t) moves the point along the ray.
// Add in negative t and you can go anywhere on the 3D line. 
// For positive t, you get only the parts in front of A,
// and this is what is often called a half-line or ray.

class ray
{
    public:
        ray() {}
        ray(const vec3& a, const vec3& b) { A = a; B = b; }
        vec3 origin() const       { return A; }
        vec3 direction() const    { return B; }
        vec3 point_at_parameter(float t) const { return A + t*B; }

        vec3 A;
        vec3 B;
};

#endif