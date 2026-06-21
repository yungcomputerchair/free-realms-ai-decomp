// addr: 0x013d53d0
// name: SynchronizationCommand_deserializeInstanceIDList
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SynchronizationCommand_deserializeInstanceIDList(void * streamOrCommand)
    */

bool __fastcall SynchronizationCommand_deserializeInstanceIDList(void *streamOrCommand)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  void *other;
  int iVar4;
  int local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Deserializes a count, then repeatedly deserializes InstanceID values from the
                       virtual serializable stream and appends/copies them into a 16-byte collection
                       before finalizing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b7e8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  FUN_013c2690(&local_40);
  FUN_013d4cd0(local_40);
  iVar4 = 0;
  if (0 < local_40) {
    do {
      InstanceID_ctor(uVar2);
      local_4 = 0;
      InstanceID_ctor();
      local_4._0_1_ = 1;
      iVar3 = VirtualSerializable_callDeserialize(*(void **)streamOrCommand,local_2c);
      if ((char)iVar3 == '\0') {
        local_4 = (uint)local_4._1_3_ << 8;
        InstanceID_dtor(local_3c);
        local_4 = 0xffffffff;
        InstanceID_dtor(local_2c);
        ExceptionList = local_c;
        return false;
      }
      other = (void *)InstanceID_copy_ctor(local_2c);
      local_4._0_1_ = 2;
      InstanceID_assignFrom(local_3c,other);
      local_4._0_1_ = 1;
      InstanceID_dtor(local_1c);
      FUN_012c3e50(local_3c);
      local_4 = (uint)local_4._1_3_ << 8;
      InstanceID_dtor(local_3c);
      local_4 = 0xffffffff;
      InstanceID_dtor(local_2c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_40);
  }
  uVar1 = FUN_013c26d0();
  ExceptionList = local_c;
  return (bool)uVar1;
}

