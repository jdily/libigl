m.def("vertex_triangle_adjacency", []
(
  const Eigen::MatrixXd& V,
  const Eigen::MatrixXi& F,
//   Eigen::MatrixXi &VF, 
//   Eigen::MatrixXi &VI
  std::vector< std::vector<int> >  &VF,
  std::vector< std::vector<int> > &VI
)
{
    // std::vector<std::vector<int>> vVF,
    // std::vector<std::vector<int>> vVI,
    igl::vertex_triangle_adjacency(V, F, vVF, vVI);

}, __doc_igl_vertex_triangle_adjacency,
py::arg("V"), py::arg("F"), py::arg("VF"), py::arg("VI"));


m.def("vertex_triangle_adjacency", []
(
  const Eigen::MatrixXd& V,
  const Eigen::MatrixXi& F,
  Eigen::MatrixXi &VF, 
  Eigen::MatrixXi &VI
)
{
    std::vector<std::vector<int>> vVF,
    std::vector<std::vector<int>> vVI,
    igl::vertex_triangle_adjacency(V, F, vVF, vVI);
    // int vrows = (int)vVF.size();
    // int 
}, __doc_igl_vertex_triangle_adjacency,
py::arg("V"), py::arg("F"), py::arg("VF"), py::arg("VI"));
