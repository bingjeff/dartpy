#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math14randomVectorXdEmdd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("randomVectorXd", [](std::size_t size, double min, double max) -> Eigen::VectorXd { return dart::math::randomVectorXd(size, min, max); }, (::boost::python::arg("size"), ::boost::python::arg("min"), ::boost::python::arg("max")));

}

/* footer */