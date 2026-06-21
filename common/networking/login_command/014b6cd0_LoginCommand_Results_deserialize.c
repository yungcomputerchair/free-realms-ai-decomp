// addr: 0x014b6cd0
// name: LoginCommand_Results_deserialize
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandResults.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool LoginCommand_Results_deserialize(void * this, void * reader) */

bool __thiscall LoginCommand_Results_deserialize(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  void *outBuffer;
  void *unaff_EBX;
  int unaff_EBP;
  void *size;
  void *local_4c;
  void **ppvStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes LoginCommand_Results fields from a packet/stream, with
                       version-gated reads for success, explanation, account/server ids, strings,
                       and compressed data. The zres assertion and file path tie it to
                       LoginCommandResults.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a8220;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_4c;
  ExceptionList = &local_c;
  size = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4c,DAT_01b839d8 ^ (uint)&stack0xffffffa4)
  ;
  if (((cVar1 != '\0') && (cVar1 = FUN_01441e20(reader), cVar1 != '\0')) &&
     (bVar2 = Deserializer_readInteger(reader,&iStack_40), bVar2)) {
    *(bool *)((int)this + 0x14) = iStack_40 != 0;
    if (unaff_EBP < 3) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      uStack_30 = 0;
      local_c = (void *)0x0;
      bVar2 = Deserializer_readString(reader,auStack_34);
      if (!bVar2) {
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
        ExceptionList = pvStack_14;
        return false;
      }
      *(undefined4 *)((int)this + 0x18) = 0;
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else {
      bVar2 = Deserializer_readInteger(reader,&iStack_44);
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      *(int *)((int)this + 0x18) = iStack_44;
    }
    bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x1c));
    if (bVar2) {
      if (1 < unaff_EBP) {
        bVar2 = Deserializer_readInteger(reader,&iStack_38);
        if (!bVar2) {
          ExceptionList = pvStack_14;
          return false;
        }
        *(bool *)((int)this + 0x20) = iStack_38 != 0;
      }
      if (((unaff_EBP < 4) ||
          (bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x24)), bVar2)) &&
         ((unaff_EBP < 5 ||
          (bVar2 = Deserializer_readString(reader,(void *)((int)this + 0x28)), bVar2)))) {
        if (unaff_EBP < 6) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          ExceptionList = pvStack_14;
          return (bool)uVar3;
        }
        bVar2 = Deserializer_readInteger(reader,(int *)&stack0xffffffb0);
        if (((bVar2) && (bVar2 = Deserializer_readInteger(reader,(int *)&ppvStack_48), bVar2)) &&
           (iVar4 = ReadBuffer_claimBytes(reader,&local_4c,ppvStack_48,(int)size),
           (char)iVar4 != '\0')) {
          outBuffer = Mem_Alloc((uint)unaff_EBX);
          iVar4 = Zlib_inflateBuffer(outBuffer,&uStack_3c,local_4c,(int)ppvStack_48);
          if (iVar4 != 0) {
            FUN_012f5a60("zres == 0",
                         "..\\common\\networking\\login_command\\LoginCommandResults.cpp",0xe3);
          }
          PacketBuffer_init(auStack_34);
          local_c = (void *)0x1;
          RawBuffer_assign(auStack_34,outBuffer,unaff_EBX,(uint)size);
                    /* WARNING: Subroutine does not return */
          _free(outBuffer);
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return false;
}

