#include <torch_delaunay/torch_delaunay.h>

#include <pybind11/pybind11.h>


namespace torch_delaunay {


PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) { m.def("shull2d", &shull2d); };


} // namespace torch_delaunay
