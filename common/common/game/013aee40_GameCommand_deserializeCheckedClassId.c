// addr: 0x013aee40
// name: GameCommand_deserializeCheckedClassId
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GameCommand_deserializeCheckedClassId(void * this, int classId_, void *
   payloadOut) */

uint __thiscall GameCommand_deserializeCheckedClassId(void *this,int classId_,void *payloadOut)

{
  int this_00;
  int iVar1;
  bool bVar2;
  uint3 extraout_var;
  int iVar3;
  uint3 extraout_var_00;
  uint3 uVar4;
  undefined3 extraout_var_01;
  
                    /* Deserializes and validates a command class id before reading the payload
                       field, logging if the incoming id does not match either accepted id. */
  this_00 = classId_;
  FUN_013c2250(1);
  bVar2 = Deserializer_readInteger((void *)this_00,&classId_);
  iVar1 = classId_;
  uVar4 = extraout_var;
  if (!bVar2) {
LAB_013aee98:
    return (uint)uVar4 << 8;
  }
  iVar3 = (**(code **)(*(int *)this + 0x18))();
  if (iVar1 != iVar3) {
    iVar3 = (**(code **)(*(int *)this + 0x1c))();
    if (iVar1 != iVar3) {
      (**(code **)(*(int *)this + 0x18))();
      WAErrorLog_write("Wanted classID %d, but got %d");
      uVar4 = extraout_var_00;
      goto LAB_013aee98;
    }
  }
  bVar2 = Deserializer_readInteger((void *)this_00,payloadOut);
  return CONCAT31(extraout_var_01,bVar2);
}

