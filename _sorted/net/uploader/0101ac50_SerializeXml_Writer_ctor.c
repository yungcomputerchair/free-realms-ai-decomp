// addr: 0x0101ac50
// name: SerializeXml_Writer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SerializeXml_Writer_ctor(void * this, bool flag_) */

void * __thiscall SerializeXml_Writer_ctor(void *this,bool flag_)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SerializeXml writer-like object with a fixed
                       SerializeStackElement list and a large internal output buffer, storing the
                       provided flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01634679;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)((int)this + 8) = SoeUtil::List<SerializeXml::SerializeStackElement,32>::vftable;
  FUN_010169c0((void *)((int)this + 0x18));
  local_4 = 0;
  FUN_0101a610(uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)this = 0;
  *(bool *)((int)this + 1) = flag_;
  puVar3 = Mem_Alloc(0x10048);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    puVar1 = puVar3 + 0x10;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[8] = 0;
    puVar3[0xc] = 0;
    puVar3[0x4010] = 0;
    puVar3[0x4011] = 0;
    puVar3[0xd] = puVar1;
    puVar3[0xe] = (-(int)puVar1 & 3U) + (int)puVar1;
    puVar3[0xf] = puVar3 + 0x4010;
    *(undefined4 **)((int)this + 4) = puVar3;
  }
  ExceptionList = local_c;
  return this;
}

