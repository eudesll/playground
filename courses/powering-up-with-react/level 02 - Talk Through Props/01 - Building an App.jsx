// 01 - Identifying the Comment Component
// Just select the correct components

// 02 - Declaring New Components I
'class' + 'react.compenent'

// 03 - Declaring New Components II
'render' + 'jsx'

// 04 - Converting HTML Mockups to Components
class Comment extends React.Component {
  render() {
    return (
      <div className="comment">
        <p className="comment-header">Anne Droid</p>
        <p className="comment-body">
          I wanna know what love is...
        </p>
        <div className="comment-actions">
          <a href="#">Delete comment</a>
        </div>
      </div>
    )
  }
}

// 05 - Reading Props
class Comment extends React.Component {
  render() {
    return(
      <div className="comment">
        <p className="comment-header">
          { this.props.author }
        </p>
        <p className="comment-body">
          { this.props.body }
        </p>
        <div className="comment-actions">
          <a href="#">Delete comment</a>
        </div>
      </div>
    );
  }
}

// 06 - Using the Comment Component
class CommentBox extends React.Component {
  render() {
    return(
      <div className="comment-box">
        <h3>Comments</h3>
        <h4 className="comment-count">2 comments</h4>
        <div className="comment-list">
          <Comment author='Anne Droid' body='I want to know what love is...' />
        </div>
      </div>
    );
  }
}

class Comment extends React.Component {
  render() {
    return(
      <div className="comment">
        <p className="comment-header">
          {this.props.author}
        </p>
        <p className="comment-body">
          {this.props.body}
        </p>
        <div className="comment-actions">
          <a href="#">Delete comment</a>
        </div>
      </div>
    );
  }
}
