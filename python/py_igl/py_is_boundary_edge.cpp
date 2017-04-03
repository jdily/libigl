m.def("is_boundary_edge", []
(
    const Eigen::MatrixXi &F,
    const Eigen::MatrixXi &E,
    Eigen::VectorXi &B
)
{
    return igl::is_boundary_edge(F,E,B);
}, __doc_igl_is_boundary_edge,
py::arg("F"), py::arg("E"), py::arg("B"));