m.def("edges", []
(
    const Eigen::MatrixXi &F,
    Eigen::MatrixXi &E
)
{
    return igl::edges(F, E);
},
__doc_igl_edges,
py::arg("F"), py::arg("E"));