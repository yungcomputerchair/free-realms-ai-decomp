// addr: 0x0139b090
// name: Card_deserializeArchetypeEntries
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_deserializeArchetypeEntries(void * this) */

bool __fastcall Card_deserializeArchetypeEntries(void *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int local_58;
  undefined4 *local_54;
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a sequence of card/archetype-related entries: reads a count,
                       reads each id, constructs temporary records, inserts them into a container,
                       and finalizes the read. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684e68;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  local_54 = this;
  FUN_013c2690(&local_58);
  iVar5 = 0;
  if (0 < local_58) {
    do {
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_4 = 1;
      cVar2 = FUN_014019a0(*(undefined4 *)this,&local_34,uVar4);
      uVar1 = local_34;
      if (cVar2 == '\0') {
        local_4 = 0xffffffff;
        StdStringBuffer_release(&local_34);
        ExceptionList = local_c;
        return false;
      }
      FUN_005f15f0(local_30);
      local_4._0_1_ = 2;
      local_20[0] = uVar1;
      FUN_005f15f0(local_44);
      local_4._0_1_ = 4;
      FUN_0139ac10(local_50,local_20);
      local_4._0_1_ = 2;
      FUN_0138ecc0();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      local_40 = (void *)0x0;
      local_3c = 0;
      local_38 = 0;
      local_4 = 0xffffffff;
      StdStringBuffer_release(&local_34);
      iVar5 = iVar5 + 1;
      this = local_54;
    } while (iVar5 < local_58);
  }
  uVar3 = FUN_013c26d0();
  ExceptionList = local_c;
  return (bool)uVar3;
}

