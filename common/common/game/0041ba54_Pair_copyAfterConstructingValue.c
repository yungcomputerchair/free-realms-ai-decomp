// addr: 0x0041ba54
// name: Pair_copyAfterConstructingValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Pair_copyAfterConstructingValue(void * thisPair, void * outPair, void *
   value) */

void __thiscall Pair_copyAfterConstructingValue(void *this,void *thisPair,void *outPair,void *value)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Copies two words from an existing pair-like object to an output pair after
                       invoking a constructor/helper on the value argument. This is generic
                       container support, not game-specific logic. */
  uVar1 = *(undefined4 *)this;
  uVar2 = *(undefined4 *)((int)this + 4);
  FUN_0040b615(outPair);
  *(undefined4 *)thisPair = uVar1;
  *(undefined4 *)((int)thisPair + 4) = uVar2;
  return;
}

