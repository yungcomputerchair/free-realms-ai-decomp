// addr: 0x014ebed0
// name: AccountCommand_ModifyRestrictions_deserialize
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandModifyRestrictions.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AccountCommand_ModifyRestrictions_deserialize(void * this, void * stream)
    */

int __thiscall AccountCommand_ModifyRestrictions_deserialize(void *this,void *stream)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *outBuffer;
  int iVar3;
  void *unaff_EBX;
  void **unaff_ESI;
  void *size;
  void *apvStack_30 [2];
  undefined1 auStack_28 [4];
  undefined1 local_24 [16];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes ModifyRestrictions after the AccountCommand base read, reading
                       several fields and an allocated compressed block, checking the zlib result
                       with assert zres == 0, then handing the inflated data to a helper. The source
                       file identifies the class. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016b11c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  size = stream;
  (**(code **)(*(int *)this + 0x10))(stream,local_24,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  uVar2 = FUN_01407cf0(stream);
  if ((char)uVar2 != '\0') {
    bVar1 = Deserializer_readInteger(stream,(int *)((int)this + 8));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      bVar1 = Deserializer_readInteger(stream,(int *)&pvStack_4);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1) {
        bVar1 = Deserializer_readInteger(stream,(int *)&stack0xffffffc8);
        uVar2 = CONCAT31(extraout_var_01,bVar1);
        if (bVar1) {
          uVar2 = ReadBuffer_claimBytes(stream,&stack0xffffffcc,unaff_ESI,(int)size);
          if ((char)uVar2 != '\0') {
            outBuffer = Mem_Alloc((uint)pvStack_4);
            apvStack_30[0] = pvStack_4;
            iVar3 = Zlib_inflateBuffer(outBuffer,(uint *)apvStack_30,unaff_EBX,(int)unaff_ESI);
            if (iVar3 != 0) {
              FUN_012f5a60("zres == 0",
                           "..\\common\\networking\\account_command\\AccountCommandModifyRestrictions.cpp"
                           ,0x6e);
            }
            PacketBuffer_init(auStack_28);
            local_c = (void *)0x0;
            RawBuffer_assign(auStack_28,outBuffer,pvStack_4,(uint)size);
                    /* WARNING: Subroutine does not return */
            _free(outBuffer);
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return uVar2 & 0xffffff00;
}

