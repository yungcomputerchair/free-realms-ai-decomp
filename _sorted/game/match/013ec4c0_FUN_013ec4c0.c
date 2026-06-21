// addr: 0x013ec4c0
// name: FUN_013ec4c0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void initializeVectorWithZeroOne(int vector_) */

void initializeVectorWithZeroOne(int vector_)

{
  undefined4 local_4;
  
                    /* Initializes a vector-like container with two 4-byte values, 0 and 1, by
                       pushing each value through helper 013ec0e0. Exact owning class is not
                       evident. */
  local_4 = 0;
  FUN_013ec0e0(&local_4);
  vector_ = 1;
  FUN_013ec0e0(&vector_);
  return;
}

