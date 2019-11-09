[@react.component]
let make = (~sizeInPx: int) => {
  <svg
    xmlns="http://www.w3.org/2000/svg"
    viewBox="0 0 135 135"
    width={sizeInPx->string_of_int}
    height={sizeInPx->string_of_int}>
    <linearGradient
      id="a"
      x1="-9.88"
      x2="159.605"
      y1="8.66"
      y2="136.929"
      gradientTransform="translate(.491 1.399)"
      gradientUnits="userSpaceOnUse">
      <stop offset="0" stopColor="#36c2d8" />
      <stop offset="1" stopColor="#514b9d" />
    </linearGradient>
    <path fill="url(#a)" d="M8.091 8.059h125.28v125.28H8.091z" />
    <path
      fill="none"
      stroke="#514b9d"
      strokeMiterlimit="10"
      d="M3.271 3.669h125.48v125.48H3.271z"
    />
    <path
      fill="#fff"
      d="M89.867 95.565l-8.224 5.066-44.506-72.24 8.225-5.067zM103.511 126.919l.22-15.82-14.62 9z"
    />
    <path
      fill="#fff"
      d="M104.099 85.714l-8.225 5.067-23.52-38.177 8.225-5.066z"
      className="st1"
    />
    <path
      fill="#fff"
      d="M96.138 14.474l8.189 5.125-23.787 38.01-8.189-5.124z"
      className="st1"
    />
  </svg>;
};
