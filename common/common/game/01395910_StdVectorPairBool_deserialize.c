// addr: 0x01395910
// name: StdVectorPairBool_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StdVectorPairBool_deserialize(void * packet, void * vector) */

bool __fastcall StdVectorPairBool_deserialize(void *packet,void *vector)

{
  undefined1 uVar1;
  char extraout_AL;
  int iVar2;
  void *unaff_EDI;
  void *in_stack_00000004;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* Deserializes a packed count followed by that many two-field boolean pairs
                       into a vector, reserving capacity before pushing each pair. */
  FUN_013c2690(&local_1c);
  FUN_01393110(local_1c);
  iVar2 = 0;
  if (local_1c < 1) {
    uVar1 = FUN_013c26d0();
    return (bool)uVar1;
  }
  do {
    local_18 = 0;
    local_14 = 0;
    sub_013ffdb0(*(void **)packet,(int)&local_18);
    if (extraout_AL == '\0') {
      return false;
    }
    local_10 = local_18;
    local_c = local_14;
    StdRbTree_insertValueMaybeRebalance(in_stack_00000004,&local_10,unaff_EDI);
    iVar2 = iVar2 + 1;
  } while (iVar2 < local_1c);
  uVar1 = FUN_013c26d0();
  return (bool)uVar1;
}

