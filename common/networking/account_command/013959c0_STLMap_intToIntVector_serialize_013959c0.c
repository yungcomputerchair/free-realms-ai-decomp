// addr: 0x013959c0
// name: STLMap_intToIntVector_serialize_013959c0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToIntVector_serialize_013959c0(void * writer, void * map) */

int __thiscall STLMap_intToIntVector_serialize_013959c0(void *this,void *writer,void *map)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint extraout_EAX;
  int local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes another int-to-int-vector map instantiation by writing count, then
                       each integer key and associated integer vector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016846d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Serializer_startAppendingSTLContainer
            (*(void **)this,*(int *)((int)writer + 8),DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  piVar1 = *(int **)((int)writer + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar3 = Serialize_returnTrue();
      ExceptionList = local_c;
      return iVar3;
    }
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)writer + 4)) {
      FUN_00d83c2d();
    }
    local_20[0] = piVar2[3];
    FUN_005f15f0(piVar2 + 4);
    local_4 = 1;
    iVar3 = STLMap_intToIntVectorElement_serialize(*(int *)this,local_20);
    if ((char)iVar3 == '\0') break;
    local_4 = 0xffffffff;
    StdStringBuffer_release(local_20);
    FUN_0138ce10();
  }
  local_4 = 0xffffffff;
  StdStringBuffer_release(local_20);
  ExceptionList = local_c;
  return extraout_EAX & 0xffffff00;
}

