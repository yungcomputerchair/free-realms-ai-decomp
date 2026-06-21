// addr: 0x00f4eab0
// name: num_to_piece
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* private: char __thiscall Chess::num_to_piece(int) */

char __thiscall Chess::num_to_piece(Chess *this,int param_1)

{
                    /* Preserves the existing identified symbol num_to_piece; code initializes or
                       operates on that class and is queued for sidecar write-back. */
  if (param_1 == 6) {
    return 'K';
  }
  if (param_1 == 5) {
    return 'Q';
  }
  if (param_1 == 4) {
    return 'B';
  }
  if (param_1 == 3) {
    return 'N';
  }
  if (param_1 == 2) {
    return 'R';
  }
  if (param_1 == 1) {
    return 'P';
  }
  FID_conflict__wprintf("chess error: %s","Weird piece moving around here!");
  return -1;
}

