// 01 - The Markup Used by React
'JSX'

// 02 - Coding JSX
class RobotBox extends React.Component {
  render() {
    return (
      <div>
        <h3>McCircuit is my name</h3>
        <p className='message'>I am here to help</p>
      </div>
    );
  }
}

// 03 - JSX and Plain JavaScript
class RobotTime extends React.Component {
  render() {
  	const pi = Math.PI;
    return (
      <div className='is-tasty-pie'  >
        The value of PI is approximately { pi }
      </div>
    );
  }
}
 
// 04 -  JSX and Collections
class RobotItems extends React.Component {
  render() {
    const topics = ["React", "JSX", "JavaScript", "Programming"];
    return (
      <div>
        <h3>Topics I am interested in</h3>
        <ul>
          {topics.map(topic => <li>{topic}</li>)}
        </ul>
      </div>
    );
  }
}
