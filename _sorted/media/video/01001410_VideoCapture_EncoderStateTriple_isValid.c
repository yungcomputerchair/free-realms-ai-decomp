// addr: 0x01001410
// name: VideoCapture_EncoderStateTriple_isValid
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool VideoCapture_EncoderStateTriple_isValid(int * stateTriple) */

bool __fastcall VideoCapture_EncoderStateTriple_isValid(int *stateTriple)

{
                    /* Validates a three-integer state/result tuple: first two fields must be
                       non-negative, second under 101, and third non-negative. Evidence: called from
                       encoder-thread state handling paths that consume status tuples. */
  if (((-1 < *stateTriple) && (-1 < stateTriple[1])) && (stateTriple[1] < 0x65)) {
    return -1 < stateTriple[2];
  }
  return false;
}

