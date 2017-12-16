const HtmlWebpackPlugin = require('html-webpack-plugin');
const path = require('path');

module.exports = {
  entry: './src/Main.bs.js',
  output: {
    filename: 'bundle.js',
    path: path.resolve(__dirname, 'dist')
  },
  devServer: {
    port: 8080,
    contentBase: 'dist'
  },
  resolve: {
    extensions: ['.bs.js', '.js', '.json']
  },
  plugins: [
    new HtmlWebpackPlugin({
      template: 'dist/index.html'
    })
  ]
};
