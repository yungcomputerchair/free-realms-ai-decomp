// addr: 0x01392980
// name: Card_getDisplayNameForContext
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Card_getDisplayNameForContext(void * this, void * outName, int
   nameContext_) */

void * __thiscall Card_getDisplayNameForContext(void *this,void *outName,int nameContext_)

{
  char cVar1;
  uint nameContext__00;
  void *pvVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Fills outName with the card display name for a requested context, using a
                       player-element lookup path when available and otherwise delegating to an
                       attached object or returning empty. Used by card description and emit-text
                       formatting. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016840d9;
  local_c = ExceptionList;
  nameContext__00 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x1e8))();
  if ((cVar1 != '\0') &&
     (pvVar2 = PlayArea_findPlayerElementById
                         (*(void **)((int)this + 0x30),*(int *)((int)this + 0x40)),
     pvVar2 != (void *)0x0)) {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             PlayElement_getDisplayNameVariant((void *)nameContext_,nameContext__00);
    *(undefined4 *)((int)outName + 0x18) = 0xf;
    *(undefined4 *)((int)outName + 0x14) = 0;
    *(undefined1 *)((int)outName + 4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (outName,pbVar3,0,0xffffffff);
    ExceptionList = local_c;
    return outName;
  }
  if (*(int *)((int)this + 100) == 0) {
    *(undefined4 *)((int)outName + 0x18) = 0xf;
    *(undefined4 *)((int)outName + 0x14) = 0;
    *(undefined1 *)((int)outName + 4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(outName,"",0);
  }
  else {
    (**(code **)(**(int **)((int)this + 100) + 0xd0))(outName,nameContext_);
  }
  ExceptionList = local_c;
  return outName;
}

