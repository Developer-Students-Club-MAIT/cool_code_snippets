# Count amount of characters in a given string, output to .txt file.

## Please note, as this is typescript, this would require @types/node included.

```typescript
import { writeFileSync } from 'fs'

const countCharactersAndOutputToTxt = (
  str: string,
  ignoreCase?: boolean,
  omitWhitespace?: boolean
) => {
  //Ignore case.
  if (ignoreCase) {
    str = str.toLowerCase()
  }

  //Ignore whitespace
  if (omitWhitespace) {
    str = str.replace(/ /g, '')
  }

  const chars = {}

  //Iterate, increment char on occurance if existing, else assign 1.
  for (const char of str) {
    chars[char] ? chars[char]++ : (chars[char] = 1)
  }

  //Create an acceptable string output.
  let payload = ''
  for (const char in chars) {
    if (chars.hasOwnProperty(char)) {
      payload += `The character ${char} occured ${chars[char]} ${
        chars[char] === 1 ? 'time.' : 'times.'
      } \n`
    }
  }

  //Write payload to text.
  writeFileSync('chars.txt', payload, 'UTF8')
}

const loremStr =
  'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis metus nibh, congue nec sagittis vel, blandit lobortis mi. Sed ac congue lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum scelerisque dolor sed enim porttitor venenatis bibendum ut sem. Praesent pharetra augue urna, ut posuere tellus mattis in. Integer posuere suscipit massa, a gravida ligula tincidunt id. Duis placerat rutrum est et sodales. Vestibulum dolor lacus, auctor id purus ac, tristique facilisis mauris. Curabitur sed diam mollis, feugiat justo nec, posuere nulla. Etiam ut velit lacus. Nam vitae feugiat elit. Proin vitae nisi semper, vehicula risus et, finibus odio. Donec sit amet sodales eros.'

countCharactersAndOutputToTxt(loremStr, true, true)
```

## Output

```
The character l occured 32 times.
The character o occured 29 times.
The character r occured 35 times.
The character e occured 72 times.
The character m occured 24 times.
The character i occured 62 times.
The character p occured 15 times.
The character s occured 60 times.
The character u occured 50 times.
The character d occured 21 times.
The character t occured 58 times.
The character a occured 47 times.
The character , occured 11 times.
The character c occured 22 times.
The character n occured 28 times.
The character g occured 11 times.
The character . occured 14 times.
The character b occured 11 times.
The character h occured 4 times.
The character v occured 9 times.
The character q occured 4 times.
The character f occured 5 times.
The character j occured 1 time.
```

## Contributed by Kahvidev.
