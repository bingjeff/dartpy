#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math14Intersection_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::math::Intersection_t>("Intersection_t")
.value("INTERSECTING", dart::math::Intersection_t::INTERSECTING)
.value("PARALLEL", dart::math::Intersection_t::PARALLEL)
.value("BEYOND_ENDPOINTS", dart::math::Intersection_t::BEYOND_ENDPOINTS)
;
}

/* footer */