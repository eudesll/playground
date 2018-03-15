// 01 - Breaking Down Problems 
'Components'

// 02 - Identifying Components
// Just select the form

// 03 - The Rendering Process
'Virtual'

// 04 - Creating a Component
class RobotBox extends React.Component  {
  render() {
    return <div>Hello From React</div>
  }
}

// 05 - Rendering a Component
class RobotBox extends React.Component {
  render() {
    return <div>Hello From React</div>;
  }
}

let target = document.getElementById('robot-app');

ReactDOM.render( <RobotBox />, target );

