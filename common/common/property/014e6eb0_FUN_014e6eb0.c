// addr: 0x014e6eb0
// name: FUN_014e6eb0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeFromString(void * this, char * text) */

bool __thiscall CommandObject_deserializeFromString(void *this,char *text)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  undefined4 *local_28;
  char acStack_24 [4];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  char *pcStack_4;
  
                    /* Serializes/parses a command object through a string buffer and deserializes
                       integer/object fields from it. */
  pcStack_4 = (char *)0xffffffff;
  puStack_8 = &LAB_016b0198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = (**(code **)(*(int *)this + 0x10))(text,&local_28,DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  if ((cVar2 == '\0') || (cVar2 = Deserializer_readIntegerField(text), cVar2 == '\0')) {
    ExceptionList = pvStack_14;
    return false;
  }
  FUN_012aa320();
  if (unaff_EBP < 2) {
    puStack_20 = (undefined4 *)0x0;
    puStack_1c = (undefined4 *)0x0;
    uStack_18 = 0;
    local_c = (void *)0x0;
    cVar2 = FUN_014e6a40(acStack_24);
    if (cVar2 == '\0') {
      local_c = (void *)0xffffffff;
      FUN_012591e0();
      ExceptionList = pvStack_14;
      return false;
    }
    FUN_01258f80(&stack0xffffffd4);
    puVar5 = local_28;
    while( true ) {
      puVar1 = puStack_1c;
      if (puStack_1c < puStack_20) {
        FUN_00d83c2d();
      }
      if ((text == (char *)0x0) || (text != acStack_24)) {
        FUN_00d83c2d();
      }
      if (puVar5 == puVar1) break;
      if (text == (char *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(text + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      CommandObject_serializeToString(this,(void *)*puVar5);
      if (*(undefined4 **)(text + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    local_c = (void *)0xffffffff;
    if (puStack_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_20);
    }
    puStack_20 = (undefined4 *)0x0;
    puStack_1c = (undefined4 *)0x0;
    uStack_18 = 0;
    text = pcStack_4;
  }
  else {
    pcStack_4 = text;
    bVar3 = Deserializer_readStringVector(&pcStack_4,(void *)((int)this + 8));
    if (!bVar3) {
      ExceptionList = pvStack_14;
      return false;
    }
  }
  uVar4 = (**(code **)(*(int *)this + 0x14))(text);
  ExceptionList = pvStack_14;
  return (bool)uVar4;
}

