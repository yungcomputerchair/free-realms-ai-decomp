// addr: 0x01439fc0
// name: ECommCommand_RedeemItemGrant_cloneInto
// subsystem: common/networking/ecomm_command
// source (binary assert): common/networking/ecomm_command/ECommCommandRedeemItemGrant.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_cloneInto(void * this, void * target) */

void __thiscall ECommCommand_RedeemItemGrant_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an ECommCommand_RedeemItemGrant into an RTTI-checked target, first
                       copying the ECommCommand base and then the grant-specific scalar fields and
                       associated collection/string member. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ECommCommand_RedeemItemGrant::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\ecomm_command\\ECommCommandRedeemItemGrant.cpp",
                 0x8a);
  }
  ECommCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)((int)target_00 + 0x14) = *(undefined1 *)((int)this + 0x14);
  *(undefined4 *)((int)target_00 + 0x18) = *(undefined4 *)((int)this + 0x18);
  PropertySet_copyPropertiesFrom(*(int *)((int)this + 0x10));
  *(undefined1 *)((int)target_00 + 0x1c) = *(undefined1 *)((int)this + 0x1c);
  *(undefined4 *)((int)target_00 + 0x20) = *(undefined4 *)((int)this + 0x20);
  return;
}

