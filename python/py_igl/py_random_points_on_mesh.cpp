m.def("random_points_on_mesh", []
(
    const int n,
    const Eigen::MatrixXd& V,
    const Eigen::MatrixXi& F,
    Eigen::MatrixXd& B,
    Eigen::MatrixXi& FI
)
{
    return igl::random_points_on_mesh(n,V,F,B,FI);
}, __doc_igl_random_points_on_mesh,
py::arg("n"), py::arg("V"), py::arg("F"), py::arg("B"), py::arg("FI"));

m.def("random_points_on_mesh", []
(
    const int n,
    const Eigen::MatrixXd& V,
    const Eigen::MatrixXi& F,
    Eigen::SparseMatrix<double>& B,
    Eigen::MatrixXi& FI
)
{
    return igl::random_points_on_mesh(n,V,F,B,FI);
}, __doc_igl_random_points_on_mesh,
py::arg("n"), py::arg("V"), py::arg("F"), py::arg("B"), py::arg("FI"));
