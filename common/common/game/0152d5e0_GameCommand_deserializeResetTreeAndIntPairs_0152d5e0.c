// addr: 0x0152d5e0
// name: GameCommand_deserializeResetTreeAndIntPairs_0152d5e0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializeResetTreeAndIntPairs_0152d5e0(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeResetTreeAndIntPairs_0152d5e0(void *this,void *deserializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  void *local_4;
  
                    /* Deserializes a command, resets/clears an embedded tree at this+0xc, then
                       reads an int-pair vector before finalizing. Evidence: common command read,
                       tree header reset, and Game_deserializeIntPairVector call. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(deserializer,&local_4);
  if (cVar1 != '\0') {
    bVar2 = StreamAdapter_readThenCommit(this,deserializer);
    if (bVar2) {
      local_4 = deserializer;
      FUN_004ef7fa(*(undefined4 *)(*(int *)((int)this + 0xc) + 4));
      *(int *)(*(int *)((int)this + 0xc) + 4) = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0xc);
      *(int *)(*(int *)((int)this + 0xc) + 8) = *(int *)((int)this + 0xc);
      uVar4 = Game_deserializeIntPairVector_0135d6e0(&local_4,(void *)((int)this + 8));
      if ((char)uVar4 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

