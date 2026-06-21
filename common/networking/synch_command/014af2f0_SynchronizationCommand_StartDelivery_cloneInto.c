// addr: 0x014af2f0
// name: SynchronizationCommand_StartDelivery_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandStartDelivery.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_StartDelivery_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_StartDelivery_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies StartDelivery scalar, string, boolean, and vector members into a
                       RTTI-checked destination command. RTTI names
                       SynchronizationCommand_StartDelivery and the dump sibling confirms fields
                       such as delivery ID, transaction source, collection mod ID, and silent. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_StartDelivery::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandStartDelivery.cpp",
                 0x95);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar1 + 0x10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x10),0,0xffffffff);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)((int)this + 0x34);
  *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)((int)this + 0x38);
  CollectionElementVector_copyAssign((int)this + 0x3c);
  CollectionElementVector_copyAssign((int)this + 0x4c);
  return;
}

