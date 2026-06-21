// addr: 0x014b6690
// name: LoginCommand_Results_serialize
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandResults.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void LoginCommand_Results_serialize(void * this, void * writer) */

void __thiscall LoginCommand_Results_serialize(void *this,void *writer)

{
  void *data;
  void *_Dst;
  int iVar1;
  uint unaff_EBX;
  int *outSize;
  longlong lStack_30;
  void *pvStack_28;
  undefined1 auStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes LoginCommand_Results to a writer, logging each field and
                       compressing a payload before writing compressed size/data. Referenced labels
                       such as Login Succeeded, Explanation, AccountID, Server ID, and the zres
                       assertion identify this as the write side. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a8148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outSize = writer;
  (**(code **)(*(int *)this + 8))(writer,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  DebugStream_writeCString(writer,"Starting LoginCommand_Results\n");
  LoginCommand_writeDebug(this,writer);
  DebugStream_writeCString(writer,"Login Succeeded: ");
  Serializer_appendInteger(writer,(uint)*(byte *)((int)this + 0x14));
  DebugStream_writeCString(writer,"Explanation: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(writer,"AccountID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(writer,"UseExplanation: ");
  Serializer_appendInteger(writer,(uint)*(byte *)((int)this + 0x20));
  DebugStream_writeCString(writer,"Server ID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x24));
  Serializer_appendString(writer,(void *)((int)this + 0x28));
  PacketBuffer_init(auStack_24);
  puStack_8 = (undefined1 *)0x0;
  lStack_30 = CONCAT44(lStack_30._4_4_,auStack_24);
  STLVector_int_serialize(&lStack_30,(int)this + 4);
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_28,(void **)&stack0xffffffcc,outSize);
  lStack_30 = (longlong)ROUND((double)(int)unaff_EBX * _DAT_018dfdf8);
  data = (void *)(0xc - (int)lStack_30);
  _Dst = Mem_Alloc((uint)data);
  _memset(_Dst,0,(size_t)data);
  iVar1 = zlib_compress(_Dst,(long *)&stack0x00000000,pvStack_28,unaff_EBX);
  if (iVar1 != 0) {
    FUN_012f5a60("zres == 0","..\\common\\networking\\login_command\\LoginCommandResults.cpp",0x11c)
    ;
  }
  Serializer_appendInteger(writer,unaff_EBX);
  Serializer_appendInteger(writer,(uint)data);
  GrowableBuffer_append(writer,_Dst,data,(int)outSize);
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

