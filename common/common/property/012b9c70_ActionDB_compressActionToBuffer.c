// addr: 0x012b9c70
// name: ActionDB_compressActionToBuffer
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int ActionDB_compressActionToBuffer(void * action, void * dbBuffer) */

int ActionDB_compressActionToBuffer(void *action,void *dbBuffer)

{
  void *data;
  uint uVar1;
  void *dest;
  int iVar2;
  int *outSize;
  void *pvStack_30;
  longlong lStack_2c;
  undefined1 auStack_24 [4];
  int aiStack_20 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes an Action through its virtual writer, compresses the serialized
                       bytes into allocated storage, and stores the compressed payload in the DB
                       buffer. It asserts non-null action/dbBuffer inputs and a successful
                       compression result. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d9d8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  if (action == (void *)0x0) {
    FUN_012f5a60("action","..\\common\\common\\property\\ActionDB.cpp",399,uVar1);
  }
  if (dbBuffer == (void *)0x0) {
    FUN_012f5a60("dbBuffer","..\\common\\common\\property\\ActionDB.cpp",400,uVar1);
  }
  PacketBuffer_init(aiStack_20);
  uStack_4 = 0;
  outSize = aiStack_20;
  (**(code **)(*(int *)action + 0x28))();
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_30,(void **)&stack0xffffffcc,outSize);
  lStack_2c = (longlong)ROUND(_DAT_0180bfd0 * 0.0 + _DAT_018d43f8 + 0.0);
  data = (void *)lStack_2c;
  dest = Mem_Alloc((int)(void *)lStack_2c + 1);
  iVar2 = zlib_compress(dest,(long *)&stack0x00000000,pvStack_30,0);
  if (iVar2 != 0) {
    FUN_012f5a60("res == 0","..\\common\\common\\property\\ActionDB.cpp",0x19a);
  }
  GrowableBuffer_append(dbBuffer,dest,data,(int)outSize);
  puStack_8 = (undefined1 *)0xffffffff;
  RawBuffer_free(auStack_24);
  ExceptionList = pvStack_10;
  return 0;
}

