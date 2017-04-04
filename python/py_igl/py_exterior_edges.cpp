m.def("exterior_edges", []
(
    const Eigen::MatrixXi &F,
    Eigen::MatrixXi &E
)
{
    return igl::exterior_edges(F,E);
}, __doc_igl_exterior_edges,
py::arg("F"), py::arg("E"));