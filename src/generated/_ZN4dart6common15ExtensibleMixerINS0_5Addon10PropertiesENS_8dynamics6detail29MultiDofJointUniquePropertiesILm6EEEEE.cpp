#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm6EEEEE_docstring[] = R"CHIMERA_STRING( The ExtensibleMixer class is used to easily create an Extensible (such as
 Node::State) which simply takes an existing class (Mixin) and creates an
 Extensible that wraps it. This creates all the appropriate copy, move, and
 clone members, allowing you to follow the Rule Of Zero. You can also
 construct an instance in the exact same way that you would construct a Mixin
 instance.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm6EEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> >, ::boost::python::bases<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> > >("_ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm6EEEEE", _ZN4dart6common15ExtensibleMixerINS0_5Addon10PropertiesENS_8dynamics6detail29MultiDofJointUniquePropertiesILm6EEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> > * { return new dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> >(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::MultiDofJointUniqueProperties<6> & mixin) -> dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> > * { return new dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> >(mixin); }, ::boost::python::default_call_policies(), (::boost::python::arg("mixin"))))
.def("clone", [](const dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> > *self) -> std::unique_ptr<dart::common::Addon::Properties> { return self->clone(); })
.def("copy", [](dart::common::ExtensibleMixer<dart::common::Addon::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<6> > *self, const dart::common::Addon::Properties & other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
;
}

/* footer */