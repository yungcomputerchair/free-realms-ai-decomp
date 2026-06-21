// addr: 0x00d2db30
// name: VideoCapture_JPG_ScratchBuffer_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_JPG_ScratchBuffer_ctor(void * this) */

void * __fastcall VideoCapture_JPG_ScratchBuffer_ctor(void *this)

{
  void *_Dst;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and zeroes an 0x83d-byte JPG scratch buffer and stores it in the
                       wrapper object. Evidence: JPG import and worker paths allocate it before
                       decode/convert work and destroy it with FUN_00d2df00. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01612bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _Dst = Mem_Alloc(0x83d);
  local_4 = 0;
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    *(undefined1 *)((int)_Dst + 0x83c) = 0;
    _memset(_Dst,0,0x83c);
  }
  *(void **)this = _Dst;
  ExceptionList = local_c;
  return this;
}

