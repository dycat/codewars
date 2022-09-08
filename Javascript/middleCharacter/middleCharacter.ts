export function getMiddle(s: string) {
  const string_length = s.length;
  if (string_length % 2 !== 0) {
    return s.charAt(string_length / 2);
  }
  if (string_length % 2 === 0) {
    return s.charAt(string_length / 2 - 1) + s.charAt(string_length / 2);
  }
}
