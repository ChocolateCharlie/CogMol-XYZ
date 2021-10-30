# XYZ file format
_Since several variations exist, this document describes the format that CogMol-XYZ will support._

**This document is a draft**

File has a .xyz extension
Fist line: number of atoms
Second line: name of the molecule
Next lines: atomic cartesian coordinates (angströms) following this format:
  <element> <X> <Y> <Z>
with element being the atomic symbol (right-aligned with the third character)
and <X> <Y> and <Z> being printed with five decimal places ("10.5")

Multiple molecules / frames can be contained within one file

