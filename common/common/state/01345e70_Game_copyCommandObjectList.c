// addr: 0x01345e70
// name: Game_copyCommandObjectList
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_copyCommandObjectList(void * this, void * outList) */

void * __thiscall Game_copyCommandObjectList(void *this,void *outList)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies or appends the collection at this+0x34 into the output object using a
                       container helper, then returns the output. Callers include
                       MultiActionState_getCommandObjectList and action/state handlers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ce39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_getPlayerDisplayName(outList,*(undefined4 *)((int)this + 0x34));
  ExceptionList = local_c;
  return outList;
}

