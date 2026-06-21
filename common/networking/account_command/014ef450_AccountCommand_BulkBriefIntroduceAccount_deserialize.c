// addr: 0x014ef450
// name: AccountCommand_BulkBriefIntroduceAccount_deserialize
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandBulkBriefIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AccountCommandBulkBriefIntroduceAccount_deserialize(void * this, void *
   stream) */

int __thiscall AccountCommand_BulkBriefIntroduceAccount_deserialize(void *this,void *stream)

{
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar3;
  int iVar2;
  void *outBuffer;
  uint3 extraout_var_02;
  int unaff_EBX;
  void **unaff_ESI;
  void *size;
  void *pvStack_30;
  void *local_2c;
  undefined1 auStack_28 [16];
  void *pvStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes BulkBriefIntroduceAccount. Older stream versions read and
                       inflate a compressed blob; newer versions read account ids and string vectors
                       directly before chaining the tail deserialize vfunc. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016b1a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  size = stream;
  (**(code **)(*(int *)this + 0x10))(stream,&local_2c,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01407cf0(stream);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      if (unaff_EBX < 2) {
        PacketBuffer_init(auStack_28);
        local_c = (void *)0x0;
        bVar1 = Deserializer_readInteger(stream,(int *)&pvStack_4);
        if (bVar1) {
          bVar1 = Deserializer_readInteger(stream,(int *)&stack0xffffffc8);
          if (bVar1) {
            iVar2 = ReadBuffer_claimBytes(stream,&pvStack_30,unaff_ESI,(int)size);
            if ((char)iVar2 != '\0') {
              outBuffer = Mem_Alloc((uint)pvStack_4);
              local_2c = pvStack_4;
              iVar2 = Zlib_inflateBuffer(outBuffer,(uint *)&local_2c,pvStack_30,(int)unaff_ESI);
              if (iVar2 != 0) {
                FUN_012f5a60("zres == 0",
                             "..\\common\\networking\\account_command\\AccountCommandBulkBriefIntroduceAccount.cpp"
                             ,0x88);
              }
              RawBuffer_assign(auStack_28,outBuffer,pvStack_4,(uint)size);
                    /* WARNING: Subroutine does not return */
              _free(outBuffer);
            }
          }
        }
        local_c = (void *)0xffffffff;
        RawBuffer_free(auStack_28);
        uVar3 = extraout_var_01;
      }
      else {
        pvStack_4 = stream;
        bVar1 = Deserializer_readIntegerVector(&pvStack_4,(void *)((int)this + 8));
        uVar3 = extraout_var_02;
        if (bVar1) {
          pvStack_4 = stream;
          Deserializer_readStringVector(&pvStack_4,(void *)((int)this + 0x28));
          if (3 < unaff_EBX) {
            pvStack_4 = stream;
            Deserializer_readStringVector(&pvStack_4,(void *)((int)this + 0x18));
          }
          iVar2 = (**(code **)(*(int *)this + 0x14))(stream);
          ExceptionList = pvStack_18;
          return iVar2;
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return (uint)uVar3 << 8;
}

