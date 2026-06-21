// addr: 0x01297360
// name: RuleSetDB_compressRuleSet
// subsystem: common/common/property
// source (binary assert): common/common/property/RuleSetDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: bool RuleSetDB_compressRuleSet(void * ruleSet, void * dbBuffer) */

bool RuleSetDB_compressRuleSet(void *ruleSet,void *dbBuffer)

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
  
                    /* Serializes a RuleSet into a temporary buffer, compresses the serialized
                       bytes, appends the compressed payload to the supplied DB buffer, and asserts
                       if compression fails. The function validates both ruleSet and dbBuffer before
                       calling the RuleSet serialize vtable slot. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166a838;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  if (ruleSet == (void *)0x0) {
    FUN_012f5a60("ruleSet","..\\common\\common\\property\\RuleSetDB.cpp",0x10e,uVar1);
  }
  if (dbBuffer == (void *)0x0) {
    FUN_012f5a60("dbBuffer","..\\common\\common\\property\\RuleSetDB.cpp",0x10f,uVar1);
  }
  PacketBuffer_init(aiStack_20);
  uStack_4 = 0;
  outSize = aiStack_20;
  (**(code **)(*(int *)ruleSet + 0x28))();
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_30,(void **)&stack0xffffffcc,outSize);
  lStack_2c = (longlong)ROUND(_DAT_0180bfd0 * 0.0 + _DAT_018d43f8 + 0.0);
  data = (void *)lStack_2c;
  dest = Mem_Alloc((int)(void *)lStack_2c + 1);
  iVar2 = zlib_compress(dest,(long *)&stack0x00000000,pvStack_30,0);
  if (iVar2 != 0) {
    FUN_012f5a60("res == 0","..\\common\\common\\property\\RuleSetDB.cpp",0x119);
  }
  GrowableBuffer_append(dbBuffer,dest,data,(int)outSize);
  puStack_8 = (undefined1 *)0xffffffff;
  RawBuffer_free(auStack_24);
  ExceptionList = pvStack_10;
  return false;
}

