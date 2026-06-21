// addr: 0x00a2ccf0
// name: AbilityPacketSetDefinition_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AbilityPacketSetDefinition_ctor(void * this) */

void * __fastcall AbilityPacketSetDefinition_ctor(void *this)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AbilityPacketSetDefinition with BaseAbilityPacket subop 5,
                       installs vtable, clears a field, and allocates an 8-byte helper. Vtable
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b11a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAbilityPacket_ctor_subop(this,5);
  local_4 = 0;
  *(undefined ***)this = AbilityPacketSetDefinition::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  pvVar1 = Mem_Alloc(8);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01045f60(8);
  }
  *(undefined4 *)((int)this + 0x10) = uVar2;
  ExceptionList = local_c;
  return this;
}

