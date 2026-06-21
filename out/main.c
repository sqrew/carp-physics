#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include <carp_stdbool.h>
#include <core.h>
#include <carp_memory.h>
#include <carp_bool.h>
#include <carp_byte.h>
#include <carp_int.h>
#include <carp_long.h>
#include <carp_double.h>
#include <carp_float.h>
#include <carp_stdint.h>
#include <carp_char.h>
#include <carp_string.h>
#include <carp_system.h>
#include <errno.h>
#include <carp_io.h>
#include <carp_pattern.h>
#include <carp_debug.h>
#include <carp_binary.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>



//Types:
typedef struct AABB AABB;
typedef struct BaseShape BaseShape;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty;
typedef struct Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty;
typedef struct Body Body;
typedef struct BodyType BodyType;
typedef struct Bucket__ColorId_String Bucket__ColorId_String;
typedef struct Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty;
typedef struct ByteOrder ByteOrder;
typedef struct CellRange CellRange;
typedef struct Collidable Collidable;
typedef struct Collision Collision;
typedef struct CollisionResult CollisionResult;
typedef struct ColorId ColorId;
typedef struct Contact Contact;
typedef struct ContactSet ContactSet;
typedef struct Handle__void Handle__void;
typedef struct LocalCrater LocalCrater;
typedef struct Map__ColorId_String Map__ColorId_String;
typedef struct Maybe__CollisionResult Maybe__CollisionResult;
typedef struct Maybe__Contact Maybe__Contact;
typedef struct Maybe__ContactSet Maybe__ContactSet;
typedef struct Maybe__Long Maybe__Long;
typedef struct Maybe__RayHit Maybe__RayHit;
typedef struct Maybe__String Maybe__String;
typedef struct Maybe__Uint16 Maybe__Uint16;
typedef struct Maybe__Uint32 Maybe__Uint32;
typedef struct Maybe__Uint64 Maybe__Uint64;
typedef struct Maybe__bool Maybe__bool;
typedef struct Maybe__double Maybe__double;
typedef struct Maybe__float Maybe__float;
typedef struct Maybe__int Maybe__int;
typedef struct Maybe__uint8_t Maybe__uint8_t;
typedef struct Opaque Opaque;
typedef struct Pair__Array__Uint16_int Pair__Array__Uint16_int;
typedef struct Pair__Array__Uint32_int Pair__Array__Uint32_int;
typedef struct Pair__Array__Uint64_int Pair__Array__Uint64_int;
typedef struct Pair__ColorId_String Pair__ColorId_String;
typedef struct Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty;
typedef struct Plane Plane;
typedef struct Quaternion Quaternion;
typedef struct Ray Ray;
typedef struct RayHit RayHit;
typedef struct Result__Array__Uint16_int Result__Array__Uint16_int;
typedef struct Result__Array__Uint32_int Result__Array__Uint32_int;
typedef struct Result__Array__Uint64_int Result__Array__Uint64_int;
typedef struct Result__Char_String Result__Char_String;
typedef struct Result__FILE_MUL__String Result__FILE_MUL__String;
typedef struct Result__String_String Result__String_String;
typedef struct Result__Uint16_Array__uint8_t Result__Uint16_Array__uint8_t;
typedef struct Result__Uint32_Array__uint8_t Result__Uint32_Array__uint8_t;
typedef struct Result__Uint64_Array__uint8_t Result__Uint64_Array__uint8_t;
typedef struct Result__bool_String Result__bool_String;
typedef struct RigidBody RigidBody;
typedef struct SDF SDF;
typedef struct Segment Segment;
typedef struct SpatialGrid__Uint64 SpatialGrid__Uint64;
typedef struct Sphere Sphere;
typedef struct TestState TestState;
typedef struct Transform Transform;
typedef struct TransformMat4 TransformMat4;
typedef struct Trigger Trigger;
typedef struct Vector2__bool Vector2__bool;
typedef struct Vector3__Lambda_div__double_13_env_ty Vector3__Lambda_div__double_13_env_ty;
typedef struct Vector3__Lambda_mul__double_13_env_ty Vector3__Lambda_mul__double_13_env_ty;
typedef struct Vector3__bool Vector3__bool;
typedef struct Vector3__double Vector3__double;
typedef struct Volume Volume;


// Depth 3
struct Maybe__Long {
    union {
    struct {
        Long member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Long_Just_tag 0
#define Maybe__Long_Nothing_tag 1

// Depth 3
struct Maybe__String {
    union {
    struct {
        String member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__String_Just_tag 0
#define Maybe__String_Nothing_tag 1

// Depth 3
struct Maybe__bool {
    union {
    struct {
        bool member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__bool_Just_tag 0
#define Maybe__bool_Nothing_tag 1

// Depth 3
struct Maybe__double {
    union {
    struct {
        double member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__double_Just_tag 0
#define Maybe__double_Nothing_tag 1

// Depth 3
struct Maybe__float {
    union {
    struct {
        float member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__float_Just_tag 0
#define Maybe__float_Nothing_tag 1

// Depth 3
struct Maybe__int {
    union {
    struct {
        int member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__int_Just_tag 0
#define Maybe__int_Nothing_tag 1

// Depth 3
struct Maybe__uint8_t {
    union {
    struct {
        uint8_t member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__uint8_t_Just_tag 0
#define Maybe__uint8_t_Nothing_tag 1

// Depth 3
struct Result__Char_String {
    union {
    struct {
        Char member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Char_String_Success_tag 0
#define Result__Char_String_Error_tag 1

// Depth 3
struct Result__String_String {
    union {
    struct {
        String member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__String_String_Success_tag 0
#define Result__String_String_Error_tag 1

// Depth 3
struct Result__bool_String {
    union {
    struct {
        bool member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__bool_String_Success_tag 0
#define Result__bool_String_Error_tag 1

// Depth 3
struct CellRange {
    int min_MINUS_x;
    int max_MINUS_x;
    int min_MINUS_y;
    int max_MINUS_y;
    int min_MINUS_z;
    int max_MINUS_z;
};

// Depth 3
struct Quaternion {
    double x;
    double y;
    double z;
    double w;
};

// Depth 3
struct Vector2__bool {
    bool x;
    bool y;
};

// Depth 3
struct Vector3__Lambda_div__double_13_env_ty {
    double n;
};

// Depth 3
struct Vector3__Lambda_mul__double_13_env_ty {
    double n;
};

// Depth 3
struct Vector3__bool {
    bool x;
    bool y;
    bool z;
};

// Depth 3
struct Vector3__double {
    double x;
    double y;
    double z;
};

// Depth 3
struct TestState {
    int passed;
    int failed;
};

// Depth 4
typedef Array Array__Array__Uint64;

// Depth 4
typedef Array Array__Array__uint8_t;

// Depth 4
typedef Array Array__Bucket__ColorId_String;

// Depth 4
typedef Array Array__Char;

// Depth 4
typedef Array Array__Collidable;

// Depth 4
typedef Array Array__CollisionResult;

// Depth 4
typedef Array Array__Contact;

// Depth 4
typedef Array Array__LocalCrater;

// Depth 4
typedef Array Array__Pair__ColorId_String;

// Depth 4
typedef Array Array__PatternMatchResult;

// Depth 4
typedef Array Array__Result__Uint16_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint32_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint64_Array__uint8_t;

// Depth 4
typedef Array Array__String;

// Depth 4
typedef Array Array__Uint16;

// Depth 4
typedef Array Array__Uint32;

// Depth 4
typedef Array Array__Uint64;

// Depth 4
typedef Array Array__Vector3__double;

// Depth 4
typedef Array Array__float;

// Depth 4
typedef Array Array__int;

// Depth 4
typedef Array Array__uint8_t;

// Depth 4
typedef bool(*Fn__Char_Char_bool)(Char, Char);

// Depth 4
typedef Char(*Fn__Char_MUL__Char)(Char*);

// Depth 4
typedef bool(*Fn__Char_bool)(Char);

// Depth 4
typedef int(*Fn__Char_int)(Char);

// Depth 4
typedef Long(*Fn__Long_Long_Long)(Long, Long);

// Depth 4
typedef bool(*Fn__Long_Long_bool)(Long, Long);

// Depth 4
typedef Long(*Fn__Long_MUL__Long)(Long*);

// Depth 4
typedef String(*Fn__Long_String)(Long);

// Depth 4
typedef bool(*Fn__Long_bool)(Long);

// Depth 4
typedef double(*Fn__Long_double)(Long);

// Depth 4
typedef int(*Fn__Long_int)(Long);

// Depth 4
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 4
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 4
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 4
typedef int(*Fn__String_MUL__Char_int)(String*, Char);

// Depth 4
typedef bool(*Fn__String_MUL__Long_MUL__bool)(String*, Long*);

// Depth 4
typedef String(*Fn__String_MUL__Long_String)(String*, Long);

// Depth 4
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String_MUL__String)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 4
typedef int(*Fn__String_MUL__String_MUL__int)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__bool)(String*);

// Depth 4
typedef String(*Fn__String_MUL__bool_String)(String*, bool);

// Depth 4
typedef bool(*Fn__String_MUL__double_MUL__bool)(String*, double*);

// Depth 4
typedef String(*Fn__String_MUL__double_String)(String*, double);

// Depth 4
typedef bool(*Fn__String_MUL__float_MUL__bool)(String*, float*);

// Depth 4
typedef String(*Fn__String_MUL__float_String)(String*, float);

// Depth 4
typedef int(*Fn__String_MUL__int)(String*);

// Depth 4
typedef Char(*Fn__String_MUL__int_Char)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_Char_void)(String*, int, Char);

// Depth 4
typedef String(*Fn__String_MUL__int_MUL__String)(String*, int*);

// Depth 4
typedef bool(*Fn__String_MUL__int_MUL__bool)(String*, int*);

// Depth 4
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_String_MUL__void)(String*, int, String*);

// Depth 4
typedef String(*Fn__String_MUL__int_int_String)(String*, int, int);

// Depth 4
typedef bool(*Fn__String_MUL__uint8_t_MUL__bool)(String*, uint8_t*);

// Depth 4
typedef String(*Fn__String_MUL__uint8_t_String)(String*, uint8_t);

// Depth 4
typedef void(*Fn__String_MUL__void)(String*);

// Depth 4
typedef String(*Fn__String_String)(String);

// Depth 4
typedef Char(*Fn___Char)();

// Depth 4
typedef String(*Fn___String)();

// Depth 4
typedef double(*Fn___double)();

// Depth 4
typedef int(*Fn___int)();

// Depth 4
typedef void(*Fn___void)();

// Depth 4
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 4
typedef String(*Fn__bool_String)(bool);

// Depth 4
typedef bool(*Fn__bool_bool)(bool);

// Depth 4
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 4
typedef Long(*Fn__double_Long)(double);

// Depth 4
typedef double(*Fn__double_MUL__double)(double*);

// Depth 4
typedef String(*Fn__double_String)(double);

// Depth 4
typedef double(*Fn__double_double)(double);

// Depth 4
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 4
typedef double(*Fn__double_double_double)(double, double);

// Depth 4
typedef double(*Fn__double_double_double_double)(double, double, double);

// Depth 4
typedef float(*Fn__double_float)(double);

// Depth 4
typedef int(*Fn__double_int)(double);

// Depth 4
typedef float(*Fn__float_MUL__float)(float*);

// Depth 4
typedef String(*Fn__float_String)(float);

// Depth 4
typedef double(*Fn__float_double)(float);

// Depth 4
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 4
typedef float(*Fn__float_float_float)(float, float);

// Depth 4
typedef int(*Fn__float_int)(float);

// Depth 4
typedef Char(*Fn__int_Char)(int);

// Depth 4
typedef String(*Fn__int_Char_String)(int, Char);

// Depth 4
typedef Long(*Fn__int_Long)(int);

// Depth 4
typedef int(*Fn__int_MUL__int)(int*);

// Depth 4
typedef int*(*Fn__int_MUL__int_MUL_)(int*);

// Depth 4
typedef bool(*Fn__int_MUL__int_MUL__bool)(int*, int*);

// Depth 4
typedef String(*Fn__int_String)(int);

// Depth 4
typedef bool(*Fn__int_bool)(int);

// Depth 4
typedef double(*Fn__int_double)(int);

// Depth 4
typedef float(*Fn__int_float)(int);

// Depth 4
typedef int(*Fn__int_int)(int);

// Depth 4
typedef int(*Fn__int_int_MUL__int)(int, int*);

// Depth 4
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 4
typedef int(*Fn__int_int_int)(int, int);

// Depth 4
typedef int(*Fn__int_int_int_int)(int, int, int);

// Depth 4
typedef uint8_t(*Fn__int_uint8_t)(int);

// Depth 4
typedef void(*Fn__int_void)(int);

// Depth 4
typedef String(*Fn__uint8_t_MUL__String)(uint8_t*);

// Depth 4
typedef uint8_t(*Fn__uint8_t_MUL__uint8_t)(uint8_t*);

// Depth 4
typedef String(*Fn__uint8_t_String)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_bool)(uint8_t);

// Depth 4
typedef int(*Fn__uint8_t_int)(uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_uint8_t_bool)(uint8_t, uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t_uint8_t)(uint8_t, uint8_t);

// Depth 5
struct AABB {
    Vector3__double min;
    Vector3__double max;
};

// Depth 5
struct Contact {
    double depth;
    Vector3__double point;
    Vector3__double normal;
};

// Depth 5
typedef int(*Fn__Fn___void_int)(Lambda);

// Depth 5
typedef void(*Fn__int_Fn__int_void_void)(int, Lambda);

// Depth 5
struct LocalCrater {
    Vector3__double pos;
    double radius;
};

// Depth 5
struct Plane {
    Vector3__double normal;
    double d;
};

// Depth 5
struct Ray {
    Vector3__double origin;
    Vector3__double direction;
};

// Depth 5
struct RayHit {
    double t;
    Vector3__double point;
    Vector3__double normal;
};

// Depth 5
struct Segment {
    Vector3__double start;
    Vector3__double end;
};

// Depth 5
struct Sphere {
    Vector3__double center;
    double radius;
};

// Depth 5
struct Transform {
    Vector3__double position;
    Quaternion rotation;
    Vector3__double scale;
};

// Depth 6
typedef String(*Fn__CellRange_MUL__String)(CellRange*);

// Depth 6
typedef int*(*Fn__CellRange_MUL__int_MUL_)(CellRange*);

// Depth 6
typedef Result__Char_String(*Fn__Char_Result__Char_String)(Char);

// Depth 6
typedef bool(*Fn__Fn__bool_bool_bool_bool_Vector2__bool_MUL__bool)(Lambda, bool, Vector2__bool*);

// Depth 6
typedef bool(*Fn__Fn__bool_bool_bool_bool_Vector3__bool_MUL__bool)(Lambda, bool, Vector3__bool*);

// Depth 6
typedef Vector3__double(*Fn__Fn__double_double_Vector3__double_MUL__Vector3__double)(Lambda, Vector3__double*);

// Depth 6
typedef Vector3__double(*Fn__Fn__double_double_double_Vector3__double_MUL__Vector3__double_MUL__Vector3__double)(Lambda, Vector3__double*, Vector3__double*);

// Depth 6
typedef double(*Fn__Fn__double_double_double_double_Vector3__double_MUL__double)(Lambda, double, Vector3__double*);

// Depth 6
typedef Maybe__Long(*Fn__Long_Maybe__Long)(Long);

// Depth 6
typedef String(*Fn__Maybe__String_String)(Maybe__String);

// Depth 6
typedef String(*Fn__Maybe__String_String_String)(Maybe__String, String);

// Depth 6
typedef Quaternion(*Fn__Quaternion_MUL__Quaternion)(Quaternion*);

// Depth 6
typedef Quaternion(*Fn__Quaternion_MUL__Quaternion_MUL__Quaternion)(Quaternion*, Quaternion*);

// Depth 6
typedef String(*Fn__Quaternion_MUL__String)(Quaternion*);

// Depth 6
typedef Vector3__double(*Fn__Quaternion_MUL__Vector3__double_MUL__Vector3__double)(Quaternion*, Vector3__double*);

// Depth 6
typedef double*(*Fn__Quaternion_MUL__double_MUL_)(Quaternion*);

// Depth 6
typedef Quaternion(*Fn__Quaternion_MUL__double_Quaternion)(Quaternion*, double);

// Depth 6
typedef Quaternion(*Fn__Quaternion_Quaternion)(Quaternion);

// Depth 6
typedef Maybe__String(*Fn__String_Maybe__String)(String);

// Depth 6
typedef Result__Char_String(*Fn__String_Result__Char_String)(String);

// Depth 6
typedef Result__String_String(*Fn__String_Result__String_String)(String);

// Depth 6
typedef Result__bool_String(*Fn__String_Result__bool_String)(String);

// Depth 6
typedef bool*(*Fn__Vector2__bool_MUL__bool_MUL_)(Vector2__bool*);

// Depth 6
typedef bool*(*Fn__Vector3__bool_MUL__bool_MUL_)(Vector3__bool*);

// Depth 6
typedef String(*Fn__Vector3__double_MUL__String)(Vector3__double*);

// Depth 6
typedef Vector3__double(*Fn__Vector3__double_MUL__Vector3__double)(Vector3__double*);

// Depth 6
typedef Vector3__double(*Fn__Vector3__double_MUL__Vector3__double_MUL__Vector3__double)(Vector3__double*, Vector3__double*);

// Depth 6
typedef double(*Fn__Vector3__double_MUL__Vector3__double_MUL__double)(Vector3__double*, Vector3__double*);

// Depth 6
typedef double(*Fn__Vector3__double_MUL__double)(Vector3__double*);

// Depth 6
typedef double*(*Fn__Vector3__double_MUL__double_MUL_)(Vector3__double*);

// Depth 6
typedef Vector3__double(*Fn__Vector3__double_MUL__double_Vector3__double)(Vector3__double*, double);

// Depth 6
typedef Vector3__double(*Fn__Vector3__double_Vector3__double)(Vector3__double);

// Depth 6
typedef Maybe__Long(*Fn___Maybe__Long)();

// Depth 6
typedef Maybe__String(*Fn___Maybe__String)();

// Depth 6
typedef Maybe__double(*Fn___Maybe__double)();

// Depth 6
typedef Maybe__float(*Fn___Maybe__float)();

// Depth 6
typedef Maybe__int(*Fn___Maybe__int)();

// Depth 6
typedef Maybe__uint8_t(*Fn___Maybe__uint8_t)();

// Depth 6
typedef Quaternion(*Fn___Quaternion)();

// Depth 6
typedef Result__bool_String(*Fn__bool_Result__bool_String)(bool);

// Depth 6
typedef Maybe__double(*Fn__double_Maybe__double)(double);

// Depth 6
typedef Vector3__double(*Fn__double_double_double_Vector3__double)(double, double, double);

// Depth 6
typedef Quaternion(*Fn__double_double_double_double_Quaternion)(double, double, double, double);

// Depth 6
typedef Maybe__float(*Fn__float_Maybe__float)(float);

// Depth 6
typedef Maybe__int(*Fn__int_Maybe__int)(int);

// Depth 6
typedef CellRange(*Fn__int_int_int_int_int_int_CellRange)(int, int, int, int, int, int);

// Depth 6
typedef Maybe__uint8_t(*Fn__uint8_t_Maybe__uint8_t)(uint8_t);

// Depth 6
struct TransformMat4 {
    Array__float data;
};

// Depth 7
struct Maybe__Contact {
    union {
    struct {
        Contact member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Contact_Just_tag 0
#define Maybe__Contact_Nothing_tag 1

// Depth 7
struct Maybe__RayHit {
    union {
    struct {
        RayHit member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__RayHit_Just_tag 0
#define Maybe__RayHit_Nothing_tag 1

// Depth 7
struct BaseShape {
    union {
    struct {
        double member0;
    } Ball;
    struct {
        Plane member0;
    } Surface;
    struct {
        Vector3__double member0;
    } Box;
    struct {
        double member0;
        double member1;
    } Cylinder;
    char __dummy;
    } u;
    char _tag;
};
#define BaseShape_Ball_tag 0
#define BaseShape_Surface_tag 1
#define BaseShape_Box_tag 2
#define BaseShape_Cylinder_tag 3

// Depth 7
typedef Array__Char(*Fn__Array__Char_Array__Char)(Array__Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_Char_Array__Char)(Array__Char, Char);

// Depth 7
typedef String(*Fn__Array__Char_MUL__String)(Array__Char*);

// Depth 7
typedef int(*Fn__Array__Char_MUL__int)(Array__Char*);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_Array__Char)(Array__Char*, int);

// Depth 7
typedef Char*(*Fn__Array__Char_MUL__int_Char_MUL_)(Array__Char*, int);

// Depth 7
typedef void(*Fn__Array__Char_MUL__int_Char_void)(Array__Char*, int, Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_int_Array__Char)(Array__Char*, int, int);

// Depth 7
typedef String(*Fn__Array__String_MUL__String)(Array__String*);

// Depth 7
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 7
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 7
typedef void(*Fn__Array__String_MUL__int_String_void)(Array__String*, int, String);

// Depth 7
typedef Array__String(*Fn__Array__String_String_Array__String)(Array__String, String);

// Depth 7
typedef Array__float(*Fn__Array__float_Array__float)(Array__float);

// Depth 7
typedef String(*Fn__Array__float_MUL__String)(Array__float*);

// Depth 7
typedef float*(*Fn__Array__float_MUL__int_float_MUL_)(Array__float*, int);

// Depth 7
typedef void(*Fn__Array__float_MUL__int_float_void)(Array__float*, int, float);

// Depth 7
typedef int(*Fn__Array__int_MUL__int)(Array__int*);

// Depth 7
typedef int*(*Fn__Array__int_MUL__int_int_MUL_)(Array__int*, int);

// Depth 7
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__Array__uint8_t)(Array__uint8_t*);

// Depth 7
typedef String(*Fn__Array__uint8_t_MUL__String)(Array__uint8_t*);

// Depth 7
typedef int(*Fn__Array__uint8_t_MUL__int)(Array__uint8_t*);

// Depth 7
typedef Maybe__uint8_t(*Fn__Array__uint8_t_MUL__int_Maybe__uint8_t)(Array__uint8_t*, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__int_int_Array__uint8_t)(Array__uint8_t*, int, int);

// Depth 7
typedef uint8_t*(*Fn__Array__uint8_t_MUL__int_uint8_t_MUL_)(Array__uint8_t*, int);

// Depth 7
typedef void(*Fn__Array__uint8_t_MUL__int_uint8_t_void)(Array__uint8_t*, int, uint8_t);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_uint8_t_Array__uint8_t)(Array__uint8_t, uint8_t);

// Depth 7
typedef Array__String(*Fn__Fn__String_MUL__bool_MUL__Array__String_Array__String)(Lambda*, Array__String);

// Depth 7
typedef int(*Fn__Fn__int_int_MUL__int_MUL__int_Array__int_MUL__int)(Lambda*, int, Array__int*);

// Depth 7
typedef Array__String(*Fn__Fn__uint8_t_MUL__String_MUL__Array__uint8_t_MUL__Array__String)(Lambda*, Array__uint8_t*);

// Depth 7
typedef Array__uint8_t(*Fn__Fn__uint8_t_uint8_t_MUL__Array__uint8_t_Array__uint8_t)(Lambda*, Array__uint8_t);

// Depth 7
typedef Array__String(*Fn__Pattern_MUL__String_MUL__Array__String)(Pattern*, String*);

// Depth 7
typedef Array__int(*Fn__Pattern_MUL__String_MUL__Array__int)(Pattern*, String*);

// Depth 7
typedef Array__Char(*Fn__String_MUL__Array__Char)(String*);

// Depth 7
typedef Array__String(*Fn__String_MUL__Array__Char_MUL__Array__String)(String*, Array__Char*);

// Depth 7
typedef int(*Fn__String_MUL__Array__Char_MUL__int_int)(String*, Array__Char*, int);

// Depth 7
typedef String(*Fn__String_MUL__Array__String_MUL__String)(String*, Array__String*);

// Depth 7
typedef Array__uint8_t(*Fn__String_MUL__Array__uint8_t)(String*);

// Depth 7
typedef Array__uint8_t(*Fn___Array__uint8_t)();

// Depth 7
typedef Array__Char(*Fn__int_Array__Char)(int);

// Depth 7
typedef Array__String(*Fn__int_Array__String)(int);

// Depth 7
typedef Array__float(*Fn__int_Array__float)(int);

// Depth 7
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 7
typedef Array__uint8_t(*Fn__int_Array__uint8_t)(int);

// Depth 7
typedef Array__Char(*Fn__int_Char_MUL__Array__Char)(int, Char*);

// Depth 7
typedef Array__Char(*Fn__int_Fn___Char_MUL__Array__Char)(int, Lambda*);

// Depth 7
typedef Array__float(*Fn__int_float_MUL__Array__float)(int, float*);

// Depth 8
typedef String(*Fn__AABB_MUL__String)(AABB*);

// Depth 8
typedef Vector3__double*(*Fn__AABB_MUL__Vector3__double_MUL_)(AABB*);

// Depth 8
typedef Contact(*Fn__Contact_MUL__Contact)(Contact*);

// Depth 8
typedef String(*Fn__Contact_MUL__String)(Contact*);

// Depth 8
typedef Vector3__double*(*Fn__Contact_MUL__Vector3__double_MUL_)(Contact*);

// Depth 8
typedef double*(*Fn__Contact_MUL__double_MUL_)(Contact*);

// Depth 8
typedef String(*Fn__LocalCrater_MUL__String)(LocalCrater*);

// Depth 8
typedef Vector3__double*(*Fn__LocalCrater_MUL__Vector3__double_MUL_)(LocalCrater*);

// Depth 8
typedef double*(*Fn__LocalCrater_MUL__double_MUL_)(LocalCrater*);

// Depth 8
typedef String(*Fn__Plane_MUL__String)(Plane*);

// Depth 8
typedef Vector3__double*(*Fn__Plane_MUL__Vector3__double_MUL_)(Plane*);

// Depth 8
typedef Vector3__double(*Fn__Plane_MUL__Vector3__double_MUL__Vector3__double)(Plane*, Vector3__double*);

// Depth 8
typedef double(*Fn__Plane_MUL__Vector3__double_MUL__double)(Plane*, Vector3__double*);

// Depth 8
typedef double*(*Fn__Plane_MUL__double_MUL_)(Plane*);

// Depth 8
typedef String(*Fn__RayHit_MUL__String)(RayHit*);

// Depth 8
typedef double*(*Fn__RayHit_MUL__double_MUL_)(RayHit*);

// Depth 8
typedef String(*Fn__Ray_MUL__String)(Ray*);

// Depth 8
typedef Vector3__double*(*Fn__Ray_MUL__Vector3__double_MUL_)(Ray*);

// Depth 8
typedef Vector3__double(*Fn__Ray_MUL__double_Vector3__double)(Ray*, double);

// Depth 8
typedef String(*Fn__Segment_MUL__String)(Segment*);

// Depth 8
typedef Vector3__double(*Fn__Segment_MUL__Vector3__double)(Segment*);

// Depth 8
typedef Vector3__double*(*Fn__Segment_MUL__Vector3__double_MUL_)(Segment*);

// Depth 8
typedef double(*Fn__Segment_MUL__double)(Segment*);

// Depth 8
typedef String(*Fn__Sphere_MUL__String)(Sphere*);

// Depth 8
typedef Vector3__double*(*Fn__Sphere_MUL__Vector3__double_MUL_)(Sphere*);

// Depth 8
typedef double*(*Fn__Sphere_MUL__double_MUL_)(Sphere*);

// Depth 8
typedef Quaternion*(*Fn__Transform_MUL__Quaternion_MUL_)(Transform*);

// Depth 8
typedef void(*Fn__Transform_MUL__Quaternion_void)(Transform*, Quaternion);

// Depth 8
typedef String(*Fn__Transform_MUL__String)(Transform*);

// Depth 8
typedef Vector3__double*(*Fn__Transform_MUL__Vector3__double_MUL_)(Transform*);

// Depth 8
typedef void(*Fn__Transform_MUL__Vector3__double_void)(Transform*, Vector3__double);

// Depth 8
typedef Transform(*Fn__Transform_Quaternion_Transform)(Transform, Quaternion);

// Depth 8
typedef Transform(*Fn__Transform_Transform)(Transform);

// Depth 8
typedef Transform(*Fn__Vector3__double_Quaternion_Vector3__double_Transform)(Vector3__double, Quaternion, Vector3__double);

// Depth 8
typedef AABB(*Fn__Vector3__double_Vector3__double_AABB)(Vector3__double, Vector3__double);

// Depth 8
typedef Ray(*Fn__Vector3__double_Vector3__double_Ray)(Vector3__double, Vector3__double);

// Depth 8
typedef Plane(*Fn__Vector3__double_double_Plane)(Vector3__double, double);

// Depth 8
typedef Contact(*Fn__double_Vector3__double_Vector3__double_Contact)(double, Vector3__double, Vector3__double);

// Depth 8
typedef RayHit(*Fn__double_Vector3__double_Vector3__double_RayHit)(double, Vector3__double, Vector3__double);

// Depth 9
typedef void(*Fn__Array__Vector3__double_MUL__Vector3__double_void)(Array__Vector3__double*, Vector3__double);

// Depth 9
typedef TransformMat4(*Fn__Array__float_TransformMat4)(Array__float);

// Depth 9
typedef Array__float*(*Fn__TransformMat4_MUL__Array__float_MUL_)(TransformMat4*);

// Depth 9
typedef String(*Fn__TransformMat4_MUL__String)(TransformMat4*);

// Depth 9
typedef Vector3__double(*Fn__TransformMat4_MUL__int_Vector3__double)(TransformMat4*, int);

// Depth 9
typedef TransformMat4(*Fn__Transform_MUL__TransformMat4)(Transform*);

// Depth 9
typedef TransformMat4(*Fn__Vector3__double_MUL__Quaternion_MUL__Vector3__double_MUL__TransformMat4)(Vector3__double*, Quaternion*, Vector3__double*);

// Depth 9
typedef Array__Vector3__double(*Fn__int_Array__Vector3__double)(int);

// Depth 10
typedef Maybe__Contact(*Fn__AABB_MUL__AABB_MUL__Maybe__Contact)(AABB*, AABB*);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__Array__uint8_t_Array__uint8_t_Array__Array__uint8_t)(Array__Array__uint8_t, Array__uint8_t);

// Depth 10
typedef int(*Fn__Array__Array__uint8_t_MUL__int)(Array__Array__uint8_t*);

// Depth 10
typedef Array__uint8_t*(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_MUL_)(Array__Array__uint8_t*, int);

// Depth 10
typedef void(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_void)(Array__Array__uint8_t*, int, Array__uint8_t);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__uint8_t_MUL__int_Array__Array__uint8_t)(Array__uint8_t*, int);

// Depth 10
typedef BaseShape(*Fn__BaseShape_BaseShape)(BaseShape);

// Depth 10
typedef BaseShape(*Fn__BaseShape_MUL__BaseShape)(BaseShape*);

// Depth 10
typedef String(*Fn__BaseShape_MUL__String)(BaseShape*);

// Depth 10
typedef Maybe__Contact(*Fn__Contact_Maybe__Contact)(Contact);

// Depth 10
typedef Array__int(*Fn__Fn__Array__uint8_t_MUL__int_MUL__Array__Array__uint8_t_MUL__Array__int)(Lambda*, Array__Array__uint8_t*);

// Depth 10
typedef BaseShape(*Fn__Plane_BaseShape)(Plane);

// Depth 10
typedef Maybe__RayHit(*Fn__RayHit_Maybe__RayHit)(RayHit);

// Depth 10
typedef Maybe__RayHit(*Fn__Ray_MUL__AABB_MUL__Maybe__RayHit)(Ray*, AABB*);

// Depth 10
typedef Maybe__RayHit(*Fn__Ray_MUL__Sphere_MUL__Maybe__RayHit)(Ray*, Sphere*);

// Depth 10
typedef Maybe__Contact(*Fn__Sphere_MUL__AABB_MUL__Maybe__Contact)(Sphere*, AABB*);

// Depth 10
typedef Maybe__Contact(*Fn__Sphere_MUL__Sphere_MUL__Maybe__Contact)(Sphere*, Sphere*);

// Depth 10
typedef BaseShape(*Fn__Vector3__double_BaseShape)(Vector3__double);

// Depth 10
typedef Maybe__Contact(*Fn___Maybe__Contact)();

// Depth 10
typedef Maybe__RayHit(*Fn___Maybe__RayHit)();

// Depth 10
typedef BaseShape(*Fn__double_BaseShape)(double);

// Depth 10
typedef BaseShape(*Fn__double_double_BaseShape)(double, double);

// Depth 10
typedef Array__Array__uint8_t(*Fn__int_Array__Array__uint8_t)(int);

// Depth 10
struct SDF {
    BaseShape base;
    Array__LocalCrater craters;
    Vector3__double position;
    Quaternion rotation;
};

// Depth 11
typedef Array__Contact(*Fn__Array__Contact_Array__Contact)(Array__Contact);

// Depth 11
typedef void(*Fn__Array__Contact_MUL__Contact_void)(Array__Contact*, Contact);

// Depth 11
typedef String(*Fn__Array__Contact_MUL__String)(Array__Contact*);

// Depth 11
typedef int(*Fn__Array__Contact_MUL__int)(Array__Contact*);

// Depth 11
typedef Contact*(*Fn__Array__Contact_MUL__int_Contact_MUL_)(Array__Contact*, int);

// Depth 11
typedef Array__LocalCrater(*Fn__Array__LocalCrater_Array__LocalCrater)(Array__LocalCrater);

// Depth 11
typedef void(*Fn__Array__LocalCrater_MUL__LocalCrater_void)(Array__LocalCrater*, LocalCrater);

// Depth 11
typedef String(*Fn__Array__LocalCrater_MUL__String)(Array__LocalCrater*);

// Depth 11
typedef int(*Fn__Array__LocalCrater_MUL__int)(Array__LocalCrater*);

// Depth 11
typedef LocalCrater*(*Fn__Array__LocalCrater_MUL__int_LocalCrater_MUL_)(Array__LocalCrater*, int);

// Depth 12
struct Volume {
    union {
    struct {
        AABB member0;
    } Box;
    struct {
        Sphere member0;
    } Ball;
    struct {
        Plane member0;
    } Surface;
    struct {
        SDF member0;
    } Sdf;
    char __dummy;
    } u;
    char _tag;
};
#define Volume_Box_tag 0
#define Volume_Ball_tag 1
#define Volume_Surface_tag 2
#define Volume_Sdf_tag 3

// Depth 13
typedef SDF(*Fn__BaseShape_Array__LocalCrater_Vector3__double_Quaternion_SDF)(BaseShape, Array__LocalCrater, Vector3__double, Quaternion);

// Depth 13
typedef Array__LocalCrater*(*Fn__SDF_MUL__Array__LocalCrater_MUL_)(SDF*);

// Depth 13
typedef BaseShape*(*Fn__SDF_MUL__BaseShape_MUL_)(SDF*);

// Depth 13
typedef Quaternion*(*Fn__SDF_MUL__Quaternion_MUL_)(SDF*);

// Depth 13
typedef String(*Fn__SDF_MUL__String)(SDF*);

// Depth 13
typedef Vector3__double*(*Fn__SDF_MUL__Vector3__double_MUL_)(SDF*);

// Depth 13
typedef Vector3__double(*Fn__SDF_MUL__Vector3__double_MUL__Vector3__double)(SDF*, Vector3__double*);

// Depth 13
typedef double(*Fn__SDF_MUL__Vector3__double_MUL__double)(SDF*, Vector3__double*);

// Depth 13
typedef double(*Fn__SDF_MUL__Vector3__double_MUL__double_double)(SDF*, Vector3__double*, double);

// Depth 13
typedef Maybe__Contact(*Fn__Sphere_MUL__SDF_MUL__Maybe__Contact)(Sphere*, SDF*);

// Depth 15
typedef Volume(*Fn__AABB_Volume)(AABB);

// Depth 15
typedef Volume(*Fn__Plane_Volume)(Plane);

// Depth 15
typedef Volume(*Fn__SDF_Volume)(SDF);

// Depth 15
typedef Volume(*Fn__Sphere_Volume)(Sphere);

// Depth 15
typedef AABB(*Fn__Volume_MUL__AABB)(Volume*);

// Depth 15
typedef String(*Fn__Volume_MUL__String)(Volume*);

// Depth 15
typedef Volume(*Fn__Volume_MUL__Volume)(Volume*);

// Depth 15
typedef Volume(*Fn__Volume_Volume)(Volume);

// Depth 101
struct BodyType {
    union {
    // Dynamic
    // Kinematic
    // Static
    char __dummy;
    } u;
    char _tag;
};
#define BodyType_Dynamic_tag 0
#define BodyType_Kinematic_tag 1
#define BodyType_Static_tag 2

// Depth 101
struct ByteOrder {
    union {
    // LittleEndian
    // BigEndian
    char __dummy;
    } u;
    char _tag;
};
#define ByteOrder_LittleEndian_tag 0
#define ByteOrder_BigEndian_tag 1

// Depth 101
struct Opaque {
    union {
    char __dummy;
    } u;
    char _tag;
};

// Depth 101
struct ColorId {
    union {
    // Black
    // Red
    // Green
    // Yellow
    // Blue
    // Magenta
    // Cyan
    // White
    // Reset
    // None
    // Bold
    // Italic
    // Underline
    // BlinkSlow
    // BlinkRapid
    // BgBlack
    // BgRed
    // BgGreen
    // BgYellow
    // BgBlue
    // BgMagenta
    // BgCyan
    // BgWhite
    char __dummy;
    } u;
    char _tag;
};
#define ColorId_Black_tag 0
#define ColorId_Red_tag 1
#define ColorId_Green_tag 2
#define ColorId_Yellow_tag 3
#define ColorId_Blue_tag 4
#define ColorId_Magenta_tag 5
#define ColorId_Cyan_tag 6
#define ColorId_White_tag 7
#define ColorId_Reset_tag 8
#define ColorId_None_tag 9
#define ColorId_Bold_tag 10
#define ColorId_Italic_tag 11
#define ColorId_Underline_tag 12
#define ColorId_BlinkSlow_tag 13
#define ColorId_BlinkRapid_tag 14
#define ColorId_BgBlack_tag 15
#define ColorId_BgRed_tag 16
#define ColorId_BgGreen_tag 17
#define ColorId_BgYellow_tag 18
#define ColorId_BgBlue_tag 19
#define ColorId_BgMagenta_tag 20
#define ColorId_BgCyan_tag 21
#define ColorId_BgWhite_tag 22

// Depth 103
struct Maybe__Uint16 {
    union {
    struct {
        Uint16 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint16_Just_tag 0
#define Maybe__Uint16_Nothing_tag 1

// Depth 103
struct Maybe__Uint32 {
    union {
    struct {
        Uint32 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint32_Just_tag 0
#define Maybe__Uint32_Nothing_tag 1

// Depth 103
struct Maybe__Uint64 {
    union {
    struct {
        Uint64 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint64_Just_tag 0
#define Maybe__Uint64_Nothing_tag 1

// Depth 103
struct Result__FILE_MUL__String {
    union {
    struct {
        FILE* member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__FILE_MUL__String_Success_tag 0
#define Result__FILE_MUL__String_Error_tag 1

// Depth 103
struct Result__Uint16_Array__uint8_t {
    union {
    struct {
        Uint16 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint16_Array__uint8_t_Success_tag 0
#define Result__Uint16_Array__uint8_t_Error_tag 1

// Depth 103
struct Result__Uint32_Array__uint8_t {
    union {
    struct {
        Uint32 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint32_Array__uint8_t_Success_tag 0
#define Result__Uint32_Array__uint8_t_Error_tag 1

// Depth 103
struct Result__Uint64_Array__uint8_t {
    union {
    struct {
        Uint64 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint64_Array__uint8_t_Success_tag 0
#define Result__Uint64_Array__uint8_t_Error_tag 1

// Depth 103
struct Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty {
    Uint32 i;
};

// Depth 103
struct Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty {
    Uint64 i;
};

// Depth 103
struct Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Body {
    Vector3__double velocity;
    Vector3__double angular_MINUS_velocity;
    Vector3__double force;
    Vector3__double torque;
    double mass;
    double inv_MINUS_mass;
    double inv_MINUS_inertia;
    double restitution;
    double friction;
    double damping;
    double angular_MINUS_damping;
    bool is_MINUS_sleeping;
    BodyType body_MINUS_type;
};

// Depth 103
struct Handle__void {
    Uint64 index_MINUS_raw;
    Uint32 generation_MINUS_raw;
};

// Depth 103
struct SpatialGrid__Uint64 {
    double cell_MINUS_size;
    int cols;
    int rows;
    int layers;
    Array__Array__Uint64 buckets;
    Array__Uint64 overflow;
    Vector3__double origin;
};

// Depth 104
typedef Uint16(*Fn__Array__uint8_t_MUL__Uint16)(Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__Array__uint8_t_MUL__Uint32)(Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__Array__uint8_t_MUL__Uint64)(Array__uint8_t*);

// Depth 104
typedef BodyType(*Fn__BodyType_BodyType)(BodyType);

// Depth 104
typedef String(*Fn__BodyType_MUL__String)(BodyType*);

// Depth 104
typedef Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef String(*Fn__ByteOrder_MUL__String)(ByteOrder*);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint16_Array__uint8_t)(ByteOrder, Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint32_Array__uint8_t)(ByteOrder, Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint64_Array__uint8_t)(ByteOrder, Uint64);

// Depth 104
typedef bool(*Fn__FILE_MUL__FILE_MUL__bool)(FILE*, FILE*);

// Depth 104
typedef bool(*Fn__FILE_MUL__bool)(FILE*);

// Depth 104
typedef int(*Fn__FILE_MUL__int)(FILE*);

// Depth 104
typedef void(*Fn__FILE_MUL__int_int_void)(FILE*, int, int);

// Depth 104
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 104
typedef bool(*Fn__Int16_Int16_bool)(Int16, Int16);

// Depth 104
typedef Long(*Fn__Int16_Long)(Int16);

// Depth 104
typedef Int16(*Fn__Int16_MUL__Int16)(Int16*);

// Depth 104
typedef String(*Fn__Int16_String)(Int16);

// Depth 104
typedef bool(*Fn__Int32_Int32_bool)(Int32, Int32);

// Depth 104
typedef Long(*Fn__Int32_Long)(Int32);

// Depth 104
typedef Int32(*Fn__Int32_MUL__Int32)(Int32*);

// Depth 104
typedef String(*Fn__Int32_String)(Int32);

// Depth 104
typedef bool(*Fn__Int64_Int64_bool)(Int64, Int64);

// Depth 104
typedef Long(*Fn__Int64_Long)(Int64);

// Depth 104
typedef Int64(*Fn__Int64_MUL__Int64)(Int64*);

// Depth 104
typedef String(*Fn__Int64_String)(Int64);

// Depth 104
typedef bool(*Fn__Int8_Int8_bool)(Int8, Int8);

// Depth 104
typedef Long(*Fn__Int8_Long)(Int8);

// Depth 104
typedef Int8(*Fn__Int8_MUL__Int8)(Int8*);

// Depth 104
typedef String(*Fn__Int8_String)(Int8);

// Depth 104
typedef Int16(*Fn__Long_Int16)(Long);

// Depth 104
typedef Int32(*Fn__Long_Int32)(Long);

// Depth 104
typedef Int64(*Fn__Long_Int64)(Long);

// Depth 104
typedef Int8(*Fn__Long_Int8)(Long);

// Depth 104
typedef Uint16(*Fn__Long_Uint16)(Long);

// Depth 104
typedef Uint32(*Fn__Long_Uint32)(Long);

// Depth 104
typedef Uint64(*Fn__Long_Uint64)(Long);

// Depth 104
typedef Uint8(*Fn__Long_Uint8)(Long);

// Depth 104
typedef String(*Fn__Opaque_MUL__String)(Opaque*);

// Depth 104
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 104
typedef int(*Fn__String_MUL__int_int_FILE_MUL__int)(String*, int, int, FILE*);

// Depth 104
typedef Long(*Fn__Uint16_Long)(Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__Uint16_MUL__Array__uint8_t)(Uint16*);

// Depth 104
typedef Uint16(*Fn__Uint16_MUL__Uint16)(Uint16*);

// Depth 104
typedef uint8_t(*Fn__Uint16_MUL__uint8_t)(Uint16*);

// Depth 104
typedef String(*Fn__Uint16_String)(Uint16);

// Depth 104
typedef Uint16(*Fn__Uint16_Uint16_Uint16)(Uint16, Uint16);

// Depth 104
typedef bool(*Fn__Uint16_Uint16_bool)(Uint16, Uint16);

// Depth 104
typedef Long(*Fn__Uint32_Long)(Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__Uint32_MUL__Array__uint8_t)(Uint32*);

// Depth 104
typedef Uint32(*Fn__Uint32_MUL__Uint32)(Uint32*);

// Depth 104
typedef uint8_t(*Fn__Uint32_MUL__uint8_t)(Uint32*);

// Depth 104
typedef String(*Fn__Uint32_String)(Uint32);

// Depth 104
typedef Uint32(*Fn__Uint32_Uint32)(Uint32);

// Depth 104
typedef Uint32(*Fn__Uint32_Uint32_Uint32)(Uint32, Uint32);

// Depth 104
typedef bool(*Fn__Uint32_Uint32_bool)(Uint32, Uint32);

// Depth 104
typedef Long(*Fn__Uint64_Long)(Uint64);

// Depth 104
typedef Array__uint8_t(*Fn__Uint64_MUL__Array__uint8_t)(Uint64*);

// Depth 104
typedef Uint64(*Fn__Uint64_MUL__Uint64)(Uint64*);

// Depth 104
typedef bool(*Fn__Uint64_MUL__Uint64_MUL__bool)(Uint64*, Uint64*);

// Depth 104
typedef uint8_t(*Fn__Uint64_MUL__uint8_t)(Uint64*);

// Depth 104
typedef String(*Fn__Uint64_String)(Uint64);

// Depth 104
typedef Uint64(*Fn__Uint64_Uint64)(Uint64);

// Depth 104
typedef Uint64(*Fn__Uint64_Uint64_Uint64)(Uint64, Uint64);

// Depth 104
typedef bool(*Fn__Uint64_Uint64_bool)(Uint64, Uint64);

// Depth 104
typedef double(*Fn__Uint64_double)(Uint64);

// Depth 104
typedef Long(*Fn__Uint8_Long)(Uint8);

// Depth 104
typedef Uint8(*Fn__Uint8_MUL__Uint8)(Uint8*);

// Depth 104
typedef String(*Fn__Uint8_String)(Uint8);

// Depth 104
typedef bool(*Fn__Uint8_Uint8_bool)(Uint8, Uint8);

// Depth 104
typedef BodyType(*Fn___BodyType)();

// Depth 104
typedef ByteOrder(*Fn___ByteOrder)();

// Depth 104
typedef Uint16(*Fn___Uint16)();

// Depth 104
typedef Uint32(*Fn___Uint32)();

// Depth 104
typedef Uint64(*Fn___Uint64)();

// Depth 104
typedef Uint16(*Fn__uint8_t_uint8_t_Uint16)(uint8_t, uint8_t);

// Depth 104
typedef Uint32(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_Uint32)(uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 104
typedef Uint64(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_Uint64)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 105
struct Collidable {
    Handle__void handle;
    Volume volume;
    Uint32 layer;
    Uint32 mask;
    bool is_MINUS_trigger;
};

// Depth 105
struct ContactSet {
    Handle__void a;
    Handle__void b;
    Array__Contact contacts;
};

// Depth 105
struct RigidBody {
    Transform transform;
    Body body;
};

// Depth 105
struct Trigger {
    Handle__void a;
    Handle__void b;
};

// Depth 106
struct Result__Array__Uint16_int {
    union {
    struct {
        Array__Uint16 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint16_int_Success_tag 0
#define Result__Array__Uint16_int_Error_tag 1

// Depth 106
struct Result__Array__Uint32_int {
    union {
    struct {
        Array__Uint32 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint32_int_Success_tag 0
#define Result__Array__Uint32_int_Error_tag 1

// Depth 106
struct Result__Array__Uint64_int {
    union {
    struct {
        Array__Uint64 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint64_int_Success_tag 0
#define Result__Array__Uint64_int_Error_tag 1

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint16_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint32_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint64_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Body(*Fn__Body_Body)(Body);

// Depth 106
typedef BodyType*(*Fn__Body_MUL__BodyType_MUL_)(Body*);

// Depth 106
typedef String(*Fn__Body_MUL__String)(Body*);

// Depth 106
typedef Vector3__double*(*Fn__Body_MUL__Vector3__double_MUL_)(Body*);

// Depth 106
typedef void(*Fn__Body_MUL__Vector3__double_MUL__void)(Body*, Vector3__double*);

// Depth 106
typedef void(*Fn__Body_MUL__Vector3__double_void)(Body*, Vector3__double);

// Depth 106
typedef bool*(*Fn__Body_MUL__bool_MUL_)(Body*);

// Depth 106
typedef void(*Fn__Body_MUL__bool_void)(Body*, bool);

// Depth 106
typedef double*(*Fn__Body_MUL__double_MUL_)(Body*);

// Depth 106
typedef Maybe__Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__FILE_MUL__Result__FILE_MUL__String)(FILE*);

// Depth 106
typedef Handle__void(*Fn__Handle__void_Handle__void)(Handle__void);

// Depth 106
typedef Handle__void(*Fn__Handle__void_MUL__Handle__void)(Handle__void*);

// Depth 106
typedef bool(*Fn__Handle__void_MUL__Handle__void_MUL__bool)(Handle__void*, Handle__void*);

// Depth 106
typedef String(*Fn__Handle__void_MUL__String)(Handle__void*);

// Depth 106
typedef Uint32*(*Fn__Handle__void_MUL__Uint32_MUL_)(Handle__void*);

// Depth 106
typedef Uint64*(*Fn__Handle__void_MUL__Uint64_MUL_)(Handle__void*);

// Depth 106
typedef FILE*(*Fn__Result__FILE_MUL__String_FILE_MUL_)(Result__FILE_MUL__String);

// Depth 106
typedef bool(*Fn__Result__FILE_MUL__String_MUL__bool)(Result__FILE_MUL__String*);

// Depth 106
typedef String(*Fn__Result__FILE_MUL__String_String)(Result__FILE_MUL__String);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint16_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_MUL__Uint16)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint16_Array__uint8_t_MUL__bool)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_Uint16)(Result__Uint16_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint32_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_MUL__Uint32)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint32_Array__uint8_t_MUL__bool)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_Uint32)(Result__Uint32_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint64_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_MUL__Uint64)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint64_Array__uint8_t_MUL__bool)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_Uint64)(Result__Uint64_Array__uint8_t);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_MUL__String_MUL__Result__FILE_MUL__String)(String*, String*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_Result__FILE_MUL__String)(String);

// Depth 106
typedef void(*Fn__Transform_MUL__Body_MUL__Vector3__double_MUL__Vector3__double_MUL__double_void)(Transform*, Body*, Vector3__double*, Vector3__double*, double);

// Depth 106
typedef void(*Fn__Transform_MUL__Body_MUL__double_double_void)(Transform*, Body*, double, double);

// Depth 106
typedef void(*Fn__Transform_MUL__Body_MUL__double_void)(Transform*, Body*, double);

// Depth 106
typedef Maybe__Uint16(*Fn__Uint16_Maybe__Uint16)(Uint16);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Uint16_Result__Uint16_Array__uint8_t)(Uint16);

// Depth 106
typedef Maybe__Uint32(*Fn__Uint32_Maybe__Uint32)(Uint32);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Uint32_Result__Uint32_Array__uint8_t)(Uint32);

// Depth 106
typedef Maybe__Uint64(*Fn__Uint64_Maybe__Uint64)(Uint64);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Uint64_Result__Uint64_Array__uint8_t)(Uint64);

// Depth 106
typedef Handle__void(*Fn__Uint64_Uint32_Handle__void)(Uint64, Uint32);

// Depth 106
typedef Body(*Fn__Vector3__double_Vector3__double_Vector3__double_Vector3__double_double_double_double_double_double_double_double_bool_BodyType_Body)(Vector3__double, Vector3__double, Vector3__double, Vector3__double, double, double, double, double, double, double, double, bool, BodyType);

// Depth 106
typedef Maybe__Uint16(*Fn___Maybe__Uint16)();

// Depth 106
typedef Maybe__Uint32(*Fn___Maybe__Uint32)();

// Depth 106
typedef Maybe__Uint64(*Fn___Maybe__Uint64)();

// Depth 106
typedef Body(*Fn__double_double_Body)(double, double);

// Depth 106
typedef Body(*Fn__double_double_double_double_double_double_Body)(double, double, double, double, double, double);

// Depth 106
struct Pair__Array__Uint16_int {
    Array__Uint16 a;
    int b;
};

// Depth 106
struct Pair__Array__Uint32_int {
    Array__Uint32 a;
    int b;
};

// Depth 106
struct Pair__Array__Uint64_int {
    Array__Uint64 a;
    int b;
};

// Depth 107
struct Maybe__ContactSet {
    union {
    struct {
        ContactSet member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__ContactSet_Just_tag 0
#define Maybe__ContactSet_Nothing_tag 1

// Depth 107
struct Collision {
    ContactSet contact_MINUS_set;
};

// Depth 107
typedef Array__Uint16(*Fn__Array__Uint16_MUL__Array__Uint16)(Array__Uint16*);

// Depth 107
typedef int(*Fn__Array__Uint16_MUL__int)(Array__Uint16*);

// Depth 107
typedef Uint16*(*Fn__Array__Uint16_MUL__int_Uint16_MUL_)(Array__Uint16*, int);

// Depth 107
typedef void(*Fn__Array__Uint16_MUL__int_Uint16_void)(Array__Uint16*, int, Uint16);

// Depth 107
typedef Array__Uint32(*Fn__Array__Uint32_MUL__Array__Uint32)(Array__Uint32*);

// Depth 107
typedef int(*Fn__Array__Uint32_MUL__int)(Array__Uint32*);

// Depth 107
typedef Uint32*(*Fn__Array__Uint32_MUL__int_Uint32_MUL_)(Array__Uint32*, int);

// Depth 107
typedef void(*Fn__Array__Uint32_MUL__int_Uint32_void)(Array__Uint32*, int, Uint32);

// Depth 107
typedef Array__Uint64(*Fn__Array__Uint64_Array__Uint64)(Array__Uint64);

// Depth 107
typedef Array__Uint64(*Fn__Array__Uint64_MUL__Array__Uint64)(Array__Uint64*);

// Depth 107
typedef bool(*Fn__Array__Uint64_MUL__Uint64_MUL__bool)(Array__Uint64*, Uint64*);

// Depth 107
typedef void(*Fn__Array__Uint64_MUL__Uint64_void)(Array__Uint64*, Uint64);

// Depth 107
typedef int(*Fn__Array__Uint64_MUL__int)(Array__Uint64*);

// Depth 107
typedef Uint64*(*Fn__Array__Uint64_MUL__int_Uint64_MUL_)(Array__Uint64*, int);

// Depth 107
typedef void(*Fn__Array__Uint64_MUL__int_Uint64_void)(Array__Uint64*, int, Uint64);

// Depth 107
typedef Array__Uint16(*Fn__Fn__Array__uint8_t_MUL__Uint16_MUL__Array__Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint32(*Fn__Fn__Array__uint8_t_MUL__Uint32_MUL__Array__Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint64(*Fn__Fn__Array__uint8_t_MUL__Uint64_MUL__Array__Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint16_MUL__Array__uint8_t_MUL__Array__Uint16_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint16_MUL__uint8_t_MUL__Array__Uint16_MUL__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint32_MUL__Array__uint8_t_MUL__Array__Uint32_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint32_MUL__uint8_t_MUL__Array__Uint32_MUL__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint64_MUL__Array__uint8_t_MUL__Array__Uint64_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint64_MUL__uint8_t_MUL__Array__Uint64_MUL__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__Uint16(*Fn__int_Array__Uint16)(int);

// Depth 107
typedef Array__Uint32(*Fn__int_Array__Uint32)(int);

// Depth 107
typedef Array__Uint64(*Fn__int_Array__Uint64)(int);

// Depth 108
typedef Handle__void*(*Fn__Collidable_MUL__Handle__void_MUL_)(Collidable*);

// Depth 108
typedef String(*Fn__Collidable_MUL__String)(Collidable*);

// Depth 108
typedef Uint32*(*Fn__Collidable_MUL__Uint32_MUL_)(Collidable*);

// Depth 108
typedef Volume*(*Fn__Collidable_MUL__Volume_MUL_)(Collidable*);

// Depth 108
typedef bool*(*Fn__Collidable_MUL__bool_MUL_)(Collidable*);

// Depth 108
typedef ContactSet(*Fn__ContactSet_ContactSet)(ContactSet);

// Depth 108
typedef Array__Contact*(*Fn__ContactSet_MUL__Array__Contact_MUL_)(ContactSet*);

// Depth 108
typedef ContactSet(*Fn__ContactSet_MUL__ContactSet)(ContactSet*);

// Depth 108
typedef Handle__void*(*Fn__ContactSet_MUL__Handle__void_MUL_)(ContactSet*);

// Depth 108
typedef String(*Fn__ContactSet_MUL__String)(ContactSet*);

// Depth 108
typedef ContactSet(*Fn__Handle__void_Handle__void_Array__Contact_ContactSet)(Handle__void, Handle__void, Array__Contact);

// Depth 108
typedef Trigger(*Fn__Handle__void_Handle__void_Trigger)(Handle__void, Handle__void);

// Depth 108
typedef Body*(*Fn__RigidBody_MUL__Body_MUL_)(RigidBody*);

// Depth 108
typedef void(*Fn__RigidBody_MUL__RigidBody_MUL__ContactSet_MUL__void)(RigidBody*, RigidBody*, ContactSet*);

// Depth 108
typedef String(*Fn__RigidBody_MUL__String)(RigidBody*);

// Depth 108
typedef Transform*(*Fn__RigidBody_MUL__Transform_MUL_)(RigidBody*);

// Depth 108
typedef RigidBody(*Fn__Transform_Body_RigidBody)(Transform, Body);

// Depth 108
typedef Handle__void*(*Fn__Trigger_MUL__Handle__void_MUL_)(Trigger*);

// Depth 108
typedef String(*Fn__Trigger_MUL__String)(Trigger*);

// Depth 108
typedef RigidBody(*Fn__Vector3__double_Quaternion_double_double_RigidBody)(Vector3__double, Quaternion, double, double);

// Depth 108
typedef RigidBody(*Fn__Vector3__double_Quaternion_double_double_double_double_double_double_RigidBody)(Vector3__double, Quaternion, double, double, double, double, double, double);

// Depth 109
struct CollisionResult {
    union {
    struct {
        Collision member0;
    } Physical;
    struct {
        Trigger member0;
    } Triggered;
    char __dummy;
    } u;
    char _tag;
};
#define CollisionResult_Physical_tag 0
#define CollisionResult_Triggered_tag 1

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Result__Uint16_Array__uint8_t*(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_MUL_)(Array__Result__Uint16_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_void)(Array__Result__Uint16_Array__uint8_t*, int, Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Result__Uint32_Array__uint8_t*(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_MUL_)(Array__Result__Uint32_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_void)(Array__Result__Uint32_Array__uint8_t*, int, Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Result__Uint64_Array__uint8_t*(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_MUL_)(Array__Result__Uint64_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_void)(Array__Result__Uint64_Array__uint8_t*, int, Result__Uint64_Array__uint8_t);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__Array__Uint16_Result__Array__Uint16_int)(Array__Uint16);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__Array__Uint16_int_Pair__Array__Uint16_int)(Array__Uint16, int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__Array__Uint32_Result__Array__Uint32_int)(Array__Uint32);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__Array__Uint32_int_Pair__Array__Uint32_int)(Array__Uint32, int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__Array__Uint64_Result__Array__Uint64_int)(Array__Uint64);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__Array__Uint64_int_Pair__Array__Uint64_int)(Array__Uint64, int);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint16_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint32_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint64_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Uint16_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Uint32_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Uint64_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint16*(*Fn__Pair__Array__Uint16_int_MUL__Array__Uint16_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint16_int_MUL__int_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef Array__Uint32*(*Fn__Pair__Array__Uint32_int_MUL__Array__Uint32_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint32_int_MUL__int_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef Array__Uint64*(*Fn__Pair__Array__Uint64_int_MUL__Array__Uint64_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint64_int_MUL__int_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__int_Array__Result__Uint16_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__int_Array__Result__Uint32_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__int_Array__Result__Uint64_Array__uint8_t)(int);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__int_Result__Array__Uint16_int)(int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__int_Result__Array__Uint32_int)(int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__int_Result__Array__Uint64_int)(int);

// Depth 110
typedef Array__Uint64*(*Fn__Array__Array__Uint64_MUL__int_Array__Uint64_MUL_)(Array__Array__Uint64*, int);

// Depth 110
typedef ContactSet*(*Fn__Collision_MUL__ContactSet_MUL_)(Collision*);

// Depth 110
typedef Handle__void*(*Fn__Collision_MUL__Handle__void_MUL_)(Collision*);

// Depth 110
typedef String(*Fn__Collision_MUL__String)(Collision*);

// Depth 110
typedef Collision(*Fn__ContactSet_Collision)(ContactSet);

// Depth 110
typedef Maybe__ContactSet(*Fn__ContactSet_Maybe__ContactSet)(ContactSet);

// Depth 110
typedef Maybe__ContactSet(*Fn__Handle__void_MUL__AABB_MUL__Handle__void_MUL__SDF_MUL__Maybe__ContactSet)(Handle__void*, AABB*, Handle__void*, SDF*);

// Depth 110
typedef Maybe__ContactSet(*Fn__Handle__void_MUL__SDF_MUL__Handle__void_MUL__Plane_MUL__Maybe__ContactSet)(Handle__void*, SDF*, Handle__void*, Plane*);

// Depth 110
typedef Maybe__ContactSet(*Fn__Handle__void_MUL__SDF_MUL__Handle__void_MUL__SDF_MUL__Maybe__ContactSet)(Handle__void*, SDF*, Handle__void*, SDF*);

// Depth 110
typedef Maybe__ContactSet(*Fn__Handle__void_MUL__Volume_MUL__Handle__void_MUL__Volume_MUL__Maybe__ContactSet)(Handle__void*, Volume*, Handle__void*, Volume*);

// Depth 110
typedef Maybe__ContactSet(*Fn__Handle__void_MUL__Volume_MUL__Vector3__double_MUL__double_Handle__void_MUL__Volume_MUL__Maybe__ContactSet)(Handle__void*, Volume*, Vector3__double*, double, Handle__void*, Volume*);

// Depth 110
typedef Maybe__ContactSet(*Fn___Maybe__ContactSet)();

// Depth 111
struct Maybe__CollisionResult {
    union {
    struct {
        CollisionResult member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__CollisionResult_Just_tag 0
#define Maybe__CollisionResult_Nothing_tag 1

// Depth 111
typedef int(*Fn__Array__Collidable_MUL__int)(Array__Collidable*);

// Depth 111
typedef Collidable*(*Fn__Array__Collidable_MUL__int_Collidable_MUL_)(Array__Collidable*, int);

// Depth 112
typedef CollisionResult(*Fn__CollisionResult_MUL__CollisionResult)(CollisionResult*);

// Depth 112
typedef String(*Fn__CollisionResult_MUL__String)(CollisionResult*);

// Depth 112
typedef CollisionResult(*Fn__Collision_CollisionResult)(Collision);

// Depth 112
typedef Array__Uint64(*Fn__SpatialGrid__Uint64_MUL__AABB_MUL__Array__Uint64)(SpatialGrid__Uint64*, AABB*);

// Depth 112
typedef CellRange(*Fn__SpatialGrid__Uint64_MUL__AABB_MUL__CellRange)(SpatialGrid__Uint64*, AABB*);

// Depth 112
typedef Array__Array__Uint64*(*Fn__SpatialGrid__Uint64_MUL__Array__Array__Uint64_MUL_)(SpatialGrid__Uint64*);

// Depth 112
typedef Array__Uint64*(*Fn__SpatialGrid__Uint64_MUL__Array__Uint64_MUL_)(SpatialGrid__Uint64*);

// Depth 112
typedef Vector3__double*(*Fn__SpatialGrid__Uint64_MUL__Vector3__double_MUL_)(SpatialGrid__Uint64*);

// Depth 112
typedef Vector3__double(*Fn__SpatialGrid__Uint64_MUL__Vector3__double_MUL__Vector3__double)(SpatialGrid__Uint64*, Vector3__double*);

// Depth 112
typedef double*(*Fn__SpatialGrid__Uint64_MUL__double_MUL_)(SpatialGrid__Uint64*);

// Depth 112
typedef int*(*Fn__SpatialGrid__Uint64_MUL__int_MUL_)(SpatialGrid__Uint64*);

// Depth 112
typedef CollisionResult(*Fn__Trigger_CollisionResult)(Trigger);

// Depth 114
typedef Maybe__CollisionResult(*Fn__Collidable_MUL__Collidable_MUL__Maybe__CollisionResult)(Collidable*, Collidable*);

// Depth 114
typedef Maybe__CollisionResult(*Fn__CollisionResult_Maybe__CollisionResult)(CollisionResult);

// Depth 114
typedef Maybe__CollisionResult(*Fn___Maybe__CollisionResult)();

// Depth 115
typedef void(*Fn__Array__CollisionResult_MUL__CollisionResult_void)(Array__CollisionResult*, CollisionResult);

// Depth 115
typedef void(*Fn__SpatialGrid__Uint64_MUL__Collidable_MUL__Array__Collidable_MUL__Array__CollisionResult_MUL__bool_void)(SpatialGrid__Uint64*, Collidable*, Array__Collidable*, Array__CollisionResult*, bool);

// Depth 504
struct Bucket__ColorId_String {
    Array__Pair__ColorId_String entries;
};

// Depth 504
struct Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty {
    String* val;
};

// Depth 504
struct Map__ColorId_String {
    int len;
    int n_MINUS_buckets;
    Array__Bucket__ColorId_String buckets;
};

// Depth 504
struct Pair__ColorId_String {
    ColorId a;
    String b;
};

// Depth 504
struct Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty {
    String* data;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
typedef CChar*(*Fn__CChar_MUL__CChar_MUL_)(CChar*);

// Depth 505
typedef FILE*(*Fn__CChar_MUL__CChar_MUL__FILE_MUL_)(CChar*, CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__CChar_MUL__bool)(CChar*, CChar*);

// Depth 505
typedef String(*Fn__CChar_MUL__String)(CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__bool)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int_int_FILE_MUL__int)(CChar*, int, int, FILE*);

// Depth 505
typedef ColorId(*Fn__ColorId_MUL__ColorId)(ColorId*);

// Depth 505
typedef bool(*Fn__ColorId_MUL__ColorId_MUL__bool)(ColorId*, ColorId*);

// Depth 505
typedef String(*Fn__ColorId_MUL__String)(ColorId*);

// Depth 505
typedef int(*Fn__ColorId_MUL__int)(ColorId*);

// Depth 505
typedef String(*Fn__ColorId_String)(ColorId);

// Depth 505
typedef String(*Fn__ColorId_String_MUL__String)(ColorId, String*);

// Depth 505
typedef void(*Fn__ColorId_String_MUL__void)(ColorId, String*);

// Depth 505
typedef void(*Fn__ColorId_void)(ColorId);

// Depth 505
typedef Array__Contact(*Fn__LambdaEnv_Array__Contact_Array__Contact)(LambdaEnv, Array__Contact);

// Depth 505
typedef Array__LocalCrater(*Fn__LambdaEnv_Array__LocalCrater_Array__LocalCrater)(LambdaEnv, Array__LocalCrater);

// Depth 505
typedef Array__float(*Fn__LambdaEnv_Array__float_Array__float)(LambdaEnv, Array__float);

// Depth 505
typedef BaseShape(*Fn__LambdaEnv_BaseShape_BaseShape)(LambdaEnv, BaseShape);

// Depth 505
typedef BodyType(*Fn__LambdaEnv_BodyType_BodyType)(LambdaEnv, BodyType);

// Depth 505
typedef Body(*Fn__LambdaEnv_Body_Body)(LambdaEnv, Body);

// Depth 505
typedef ContactSet(*Fn__LambdaEnv_ContactSet_ContactSet)(LambdaEnv, ContactSet);

// Depth 505
typedef Handle__void(*Fn__LambdaEnv_Handle__void_Handle__void)(LambdaEnv, Handle__void);

// Depth 505
typedef Quaternion(*Fn__LambdaEnv_Quaternion_Quaternion)(LambdaEnv, Quaternion);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint16_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint32_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint64_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_String_MUL__bool)(LambdaEnv, String*);

// Depth 505
typedef Transform(*Fn__LambdaEnv_Transform_Transform)(LambdaEnv, Transform);

// Depth 505
typedef Uint32(*Fn__LambdaEnv_Uint32_Uint32)(LambdaEnv, Uint32);

// Depth 505
typedef Uint64(*Fn__LambdaEnv_Uint64_Uint64)(LambdaEnv, Uint64);

// Depth 505
typedef Vector3__double(*Fn__LambdaEnv_Vector3__double_Vector3__double)(LambdaEnv, Vector3__double);

// Depth 505
typedef Volume(*Fn__LambdaEnv_Volume_Volume)(LambdaEnv, Volume);

// Depth 505
typedef bool(*Fn__LambdaEnv_bool_bool)(LambdaEnv, bool);

// Depth 505
typedef double(*Fn__LambdaEnv_double_double)(LambdaEnv, double);

// Depth 505
typedef int(*Fn__LambdaEnv_int_int)(LambdaEnv, int);

// Depth 505
typedef uint8_t(*Fn__LambdaEnv_uint8_t_uint8_t)(LambdaEnv, uint8_t);

// Depth 505
typedef String(*Fn__PatternMatchResult_MUL__String)(PatternMatchResult*);

// Depth 505
typedef Maybe__String(*Fn__PatternMatchResult_MUL__String_MUL__Maybe__String)(PatternMatchResult*, String*);

// Depth 505
typedef bool(*Fn__PatternMatchResult_MUL__bool)(PatternMatchResult*);

// Depth 505
typedef int(*Fn__PatternMatchResult_MUL__int)(PatternMatchResult*);

// Depth 505
typedef int*(*Fn__PatternMatchResult_MUL__int_MUL_)(PatternMatchResult*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__PatternMatchResult)(Pattern*, String*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__int_PatternMatchResult)(Pattern*, String*, int);

// Depth 505
typedef CChar*(*Fn__String_MUL__CChar_MUL_)(String*);

// Depth 505
typedef TestState(*Fn__TestState_Fn__int_int_MUL__TestState)(TestState, Lambda*);

// Depth 505
typedef String(*Fn__TestState_MUL__String)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__TestState)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_String_MUL__TestState)(TestState*, bool, String*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_bool_String_MUL__String_MUL__Fn__bool_bool_bool_TestState)(TestState*, bool, bool, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_bool_String_MUL__String_MUL__bool_TestState)(TestState*, bool, bool, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_bool_String_MUL__TestState)(TestState*, bool, bool, String*);

// Depth 505
typedef int*(*Fn__TestState_MUL__int_MUL_)(TestState*);

// Depth 505
typedef void(*Fn__TestState_MUL__void)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_int_TestState)(TestState, int);

// Depth 505
typedef ColorId(*Fn___ColorId)();

// Depth 505
typedef CChar*(*Fn__int_CChar_MUL_)(int);

// Depth 505
typedef TestState(*Fn__int_int_TestState)(int, int);

// Depth 507
typedef Pair__ColorId_String(*Fn__ColorId_MUL__String_MUL__Pair__ColorId_String)(ColorId*, String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__ColorId_String_Pair__ColorId_String)(ColorId, String);

// Depth 507
typedef ColorId*(*Fn__Pair__ColorId_String_MUL__ColorId_MUL_)(Pair__ColorId_String*);

// Depth 507
typedef String*(*Fn__Pair__ColorId_String_MUL__String_MUL_)(Pair__ColorId_String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__Pair__ColorId_String_Pair__ColorId_String)(Pair__ColorId_String);

// Depth 507
typedef Pair__ColorId_String(*Fn__Pair__ColorId_String_String_Pair__ColorId_String)(Pair__ColorId_String, String);

// Depth 508
typedef int(*Fn__Array__PatternMatchResult_MUL__int)(Array__PatternMatchResult*);

// Depth 508
typedef PatternMatchResult*(*Fn__Array__PatternMatchResult_MUL__int_PatternMatchResult_MUL_)(Array__PatternMatchResult*, int);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Array__PatternMatchResult_PatternMatchResult_Array__PatternMatchResult)(Array__PatternMatchResult, PatternMatchResult);

// Depth 508
typedef Array__String(*Fn__Fn__PatternMatchResult_MUL__String_MUL__Array__PatternMatchResult_MUL__Array__String)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__int(*Fn__Fn__PatternMatchResult_MUL__int_MUL__Array__PatternMatchResult_MUL__Array__int)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Pattern_MUL__String_MUL__Array__PatternMatchResult)(Pattern*, String*);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__Pair__ColorId_String_void)(Array__Pair__ColorId_String*, Pair__ColorId_String);

// Depth 510
typedef int(*Fn__Array__Pair__ColorId_String_MUL__int)(Array__Pair__ColorId_String*);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__int_Fn__Pair__ColorId_String_Pair__ColorId_String_MUL__void)(Array__Pair__ColorId_String*, int, Lambda*);

// Depth 510
typedef Pair__ColorId_String(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String)(Array__Pair__ColorId_String*, int);

// Depth 510
typedef Pair__ColorId_String*(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String_MUL_)(Array__Pair__ColorId_String*, int);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String_void)(Array__Pair__ColorId_String*, int, Pair__ColorId_String);

// Depth 512
typedef Bucket__ColorId_String(*Fn__Array__Pair__ColorId_String_Bucket__ColorId_String)(Array__Pair__ColorId_String);

// Depth 512
typedef Array__Pair__ColorId_String*(*Fn__Bucket__ColorId_String_MUL__Array__Pair__ColorId_String_MUL_)(Bucket__ColorId_String*);

// Depth 512
typedef String(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__String_MUL__String)(Bucket__ColorId_String*, ColorId*, String*);

// Depth 512
typedef void(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__String_MUL__void)(Bucket__ColorId_String*, ColorId*, String*);

// Depth 512
typedef int(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__int)(Bucket__ColorId_String*, ColorId*);

// Depth 512
typedef String(*Fn__Bucket__ColorId_String_MUL__int_String)(Bucket__ColorId_String*, int);

// Depth 512
typedef void(*Fn__Bucket__ColorId_String_MUL__int_String_MUL__void)(Bucket__ColorId_String*, int, String*);

// Depth 512
typedef Bucket__ColorId_String(*Fn___Bucket__ColorId_String)();

// Depth 515
typedef Bucket__ColorId_String*(*Fn__Array__Bucket__ColorId_String_MUL__int_Bucket__ColorId_String_MUL_)(Array__Bucket__ColorId_String*, int);

// Depth 515
typedef void(*Fn__Array__Bucket__ColorId_String_MUL__int_Bucket__ColorId_String_void)(Array__Bucket__ColorId_String*, int, Bucket__ColorId_String);

// Depth 515
typedef Array__Bucket__ColorId_String(*Fn__int_Array__Bucket__ColorId_String)(int);

// Depth 515
typedef Array__Bucket__ColorId_String(*Fn__int_Fn___Bucket__ColorId_String_MUL__Array__Bucket__ColorId_String)(int, Lambda*);

// Depth 517
typedef Map__ColorId_String(*Fn__Array__Pair__ColorId_String_Map__ColorId_String)(Array__Pair__ColorId_String);

// Depth 517
typedef Array__Bucket__ColorId_String*(*Fn__Map__ColorId_String_MUL__Array__Bucket__ColorId_String_MUL_)(Map__ColorId_String*);

// Depth 517
typedef String(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String)(Map__ColorId_String*, ColorId*);

// Depth 517
typedef String(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String_MUL__String)(Map__ColorId_String*, ColorId*, String*);

// Depth 517
typedef void(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String_MUL__void)(Map__ColorId_String*, ColorId*, String*);

// Depth 517
typedef int*(*Fn__Map__ColorId_String_MUL__int_MUL_)(Map__ColorId_String*);

// Depth 517
typedef void(*Fn__Map__ColorId_String_MUL__int_void)(Map__ColorId_String*, int);

// Depth 517
typedef Map__ColorId_String(*Fn___Map__ColorId_String)();

// Depth 517
typedef Map__ColorId_String(*Fn__int_int_Array__Bucket__ColorId_String_Map__ColorId_String)(int, int, Array__Bucket__ColorId_String);


//Declarations:

// Depth 500
bool _DIV__EQ___int(int a, int b);

// Depth 500
bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b);

// Depth 500
bool _LT__EQ___Char(Char a, Char b);

// Depth 500
bool _LT__EQ___double(double a, double b);

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___double(double a, double b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p);

// Depth 500
Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p);

// Depth 500
Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* pRef);

// Depth 500
void Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* p);

// Depth 500
Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef);

// Depth 500
void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p);

// Depth 500
Vector3__Lambda_div__double_13_env_ty* Vector3__Lambda_div__double_13_env_ty_copy(Vector3__Lambda_div__double_13_env_ty* pRef);

// Depth 500
void Vector3__Lambda_div__double_13_env_ty_delete(Vector3__Lambda_div__double_13_env_ty* p);

// Depth 500
Vector3__Lambda_mul__double_13_env_ty* Vector3__Lambda_mul__double_13_env_ty_copy(Vector3__Lambda_mul__double_13_env_ty* pRef);

// Depth 500
void Vector3__Lambda_mul__double_13_env_ty_delete(Vector3__Lambda_mul__double_13_env_ty* p);

// Depth 500
double clamp__double(double min, double max, double val);

// Depth 500
int clamp__int(int min, int max, int val);

// Depth 500
int id__int(int x);

// Depth 500
int main(int argc, char** argv);

// Depth 500
double max__double(double a, double b);

// Depth 500
int max__int(int a, int b);

// Depth 500
double min__double(double a, double b);

// Depth 500
int min__int(int a, int b);

// Depth 500
bool not(bool a);

// Depth 500
bool null_QMARK___CChar(CChar* p);

// Depth 500
bool null_QMARK___FILE(FILE* p);

// Depth 1000

// Depth 500
AABB AABB_copy(AABB* pRef);

// Depth 500
void AABB_delete(AABB p);

// Depth 500
AABB AABB_init(Vector3__double min, Vector3__double max);

// Depth 500
Vector3__double* AABB_max(AABB* p);

// Depth 500
Vector3__double* AABB_min(AABB* p);

// Depth 500
String AABB_prn(AABB *p);

// Depth 500
AABB AABB_set_MINUS_max(AABB p, Vector3__double newValue);

// Depth 500
void AABB_set_MINUS_max_BANG_(AABB* pRef, Vector3__double newValue);

// Depth 500
AABB AABB_set_MINUS_min(AABB p, Vector3__double newValue);

// Depth 500
void AABB_set_MINUS_min_BANG_(AABB* pRef, Vector3__double newValue);

// Depth 500
String AABB_str(AABB *p);

// Depth 500
AABB AABB_update_MINUS_max(AABB p, Lambda *updater);

// Depth 500
AABB AABB_update_MINUS_min(AABB p, Lambda *updater);

// Depth 1000

// Depth 500
Array Array_allocate__Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Bucket__ColorId_String (int n);

// Depth 500
Array Array_allocate__Char (int n);

// Depth 500
Array Array_allocate__Result__Uint16_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint32_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint64_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__String (int n);

// Depth 500
Array Array_allocate__Uint16 (int n);

// Depth 500
Array Array_allocate__Uint32 (int n);

// Depth 500
Array Array_allocate__Uint64 (int n);

// Depth 500
Array Array_allocate__float (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
Array Array_allocate__uint8_t (int n);

// Depth 500
void Array_aset_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_BANG___float (Array *aRef, int n, float newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String (Array *aRef, int n, Bucket__ColorId_String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String (Array *aRef, int n, Pair__ColorId_String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___float (Array *aRef, int n, float newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue);

// Depth 500
void Array_aupdate_BANG___Pair__ColorId_String(Array__Pair__ColorId_String* a, int i, Lambda* f);

// Depth 500
bool Array_contains_QMARK___Uint64(Array__Uint64* arr, Uint64* el);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a);

// Depth 500
Array Array_copy__Contact (Array* a);

// Depth 500
Array Array_copy__LocalCrater (Array* a);

// Depth 500
Array Array_copy__Result__Uint16_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint32_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint64_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Uint16 (Array* a);

// Depth 500
Array Array_copy__Uint32 (Array* a);

// Depth 500
Array Array_copy__Uint64 (Array* a);

// Depth 500
Array Array_copy__float (Array* a);

// Depth 500
Array Array_copy__uint8_t (Array* a);

// Depth 500
void Array_delete__Array__uint8_t (Array a);

// Depth 500
void Array_delete__Bucket__ColorId_String (Array a);

// Depth 500
void Array_delete__Char (Array a);

// Depth 500
void Array_delete__Collidable (Array a);

// Depth 500
void Array_delete__CollisionResult (Array a);

// Depth 500
void Array_delete__Contact (Array a);

// Depth 500
void Array_delete__LocalCrater (Array a);

// Depth 500
void Array_delete__Pair__ColorId_String (Array a);

// Depth 500
void Array_delete__PatternMatchResult (Array a);

// Depth 500
void Array_delete__Result__Uint16_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint32_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint64_Array__uint8_t (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__Uint16 (Array a);

// Depth 500
void Array_delete__Uint32 (Array a);

// Depth 500
void Array_delete__Uint64 (Array a);

// Depth 500
void Array_delete__Vector3__double (Array a);

// Depth 500
void Array_delete__float (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
void Array_delete__uint8_t (Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a);

// Depth 500
int Array_length__Array__uint8_t (Array *a);

// Depth 500
int Array_length__Char (Array *a);

// Depth 500
int Array_length__Collidable (Array *a);

// Depth 500
int Array_length__Contact (Array *a);

// Depth 500
int Array_length__LocalCrater (Array *a);

// Depth 500
int Array_length__Pair__ColorId_String (Array *a);

// Depth 500
int Array_length__PatternMatchResult (Array *a);

// Depth 500
int Array_length__Result__Uint16_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint32_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint64_Array__uint8_t (Array *a);

// Depth 500
int Array_length__String (Array *a);

// Depth 500
int Array_length__Uint16 (Array *a);

// Depth 500
int Array_length__Uint32 (Array *a);

// Depth 500
int Array_length__Uint64 (Array *a);

// Depth 500
int Array_length__int (Array *a);

// Depth 500
int Array_length__uint8_t (Array *a);

// Depth 500
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index);

// Depth 500
Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n);

// Depth 500
Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index);

// Depth 500
String Array_prn__Contact(Array__Contact* x);

// Depth 500
String Array_prn__LocalCrater(Array__LocalCrater* x);

// Depth 500
String Array_prn__float(Array__float* x);

// Depth 500
void Array_push_MINUS_back_BANG___CollisionResult(Array *aRef, CollisionResult value);

// Depth 500
void Array_push_MINUS_back_BANG___Contact(Array *aRef, Contact value);

// Depth 500
void Array_push_MINUS_back_BANG___LocalCrater(Array *aRef, LocalCrater value);

// Depth 500
void Array_push_MINUS_back_BANG___Pair__ColorId_String(Array *aRef, Pair__ColorId_String value);

// Depth 500
void Array_push_MINUS_back_BANG___Uint64(Array *aRef, Uint64 value);

// Depth 500
void Array_push_MINUS_back_BANG___Vector3__double(Array *aRef, Vector3__double value);

// Depth 500
Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value);

// Depth 500
Array Array_push_MINUS_back__Char(Array a, Char value);

// Depth 500
Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value);

// Depth 500
Array Array_push_MINUS_back__String(Array a, String value);

// Depth 500
Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value);

// Depth 500
int Array_reduce__int_int(Lambda* f, int x, Array__int* xs);

// Depth 500
Array__Bucket__ColorId_String Array_repeat__Bucket__ColorId_String(int n, Lambda* f);

// Depth 500
Array__Char Array_repeat__Char(int n, Lambda* f);

// Depth 500
Array__Char Array_replicate__Char(int n, Char* e);

// Depth 500
Array__float Array_replicate__float(int n, float* e);

// Depth 500
Array__Char Array_reverse__Char(Array__Char a);

// Depth 500
Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
String Array_str__Contact (Array* a);

// Depth 500
String Array_str__LocalCrater (Array* a);

// Depth 500
String Array_str__float (Array* a);

// Depth 500
Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index);

// Depth 500
Pair__ColorId_String Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(Array *a, int i);

// Depth 500
Array__Uint64* Array_unsafe_MINUS_nth__Array__Uint64 (Array *aRef, int n);

// Depth 500
Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n);

// Depth 500
Bucket__ColorId_String* Array_unsafe_MINUS_nth__Bucket__ColorId_String (Array *aRef, int n);

// Depth 500
Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n);

// Depth 500
Collidable* Array_unsafe_MINUS_nth__Collidable (Array *aRef, int n);

// Depth 500
Contact* Array_unsafe_MINUS_nth__Contact (Array *aRef, int n);

// Depth 500
LocalCrater* Array_unsafe_MINUS_nth__LocalCrater (Array *aRef, int n);

// Depth 500
Pair__ColorId_String* Array_unsafe_MINUS_nth__Pair__ColorId_String (Array *aRef, int n);

// Depth 500
PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n);

// Depth 500
Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n);

// Depth 500
String* Array_unsafe_MINUS_nth__String (Array *aRef, int n);

// Depth 500
Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n);

// Depth 500
Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n);

// Depth 500
Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n);

// Depth 500
float* Array_unsafe_MINUS_nth__float (Array *aRef, int n);

// Depth 500
int* Array_unsafe_MINUS_nth__int (Array *aRef, int n);

// Depth 500
uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n);

// Depth 500
Array__uint8_t Array_zero__uint8_t();

// Depth 1000

// Depth 500
BaseShape BaseShape_Ball(double member0);

// Depth 500
BaseShape BaseShape_Box(Vector3__double member0);

// Depth 500
BaseShape BaseShape_Cylinder(double member0, double member1);

// Depth 500
BaseShape BaseShape_Surface(Plane member0);

// Depth 500
BaseShape BaseShape_copy(BaseShape* pRef);

// Depth 500
void BaseShape_delete(BaseShape p);

// Depth 500
int BaseShape_get_MINUS_tag(BaseShape *p);

// Depth 500
String BaseShape_prn(BaseShape *p);

// Depth 500
String BaseShape_str(BaseShape *p);

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b);

// Depth 500
Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i);

// Depth 500
Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i);

// Depth 500
Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y);

// Depth 500
Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order);

// Depth 500
String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs);

// Depth 500
Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes);

// Depth 500
Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i);

// Depth 500
Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is);

// Depth 500
Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i);

// Depth 500
Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is);

// Depth 500
Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i);

// Depth 500
Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is);

// Depth 500
Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
ByteOrder Binary_system_MINUS_endianness();

// Depth 500
String Binary_to_MINUS_hex_MINUS_str(uint8_t b);

// Depth 500
Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 500
Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 1000

// Depth 500
double* Body_angular_MINUS_damping(Body* p);

// Depth 500
Vector3__double* Body_angular_MINUS_velocity(Body* p);

// Depth 500
void Body_apply_MINUS_angular_MINUS_impulse_BANG_(Body* b, Vector3__double* impulse);

// Depth 500
void Body_apply_MINUS_force_BANG_(Body* b, Vector3__double* f);

// Depth 500
void Body_apply_MINUS_impulse_BANG_(Body* b, Vector3__double* impulse);

// Depth 500
void Body_apply_MINUS_torque_BANG_(Body* b, Vector3__double* t);

// Depth 500
BodyType* Body_body_MINUS_type(Body* p);

// Depth 500
Body Body_copy(Body* pRef);

// Depth 500
double* Body_damping(Body* p);

// Depth 500
void Body_delete(Body p);

// Depth 500
Vector3__double* Body_force(Body* p);

// Depth 500
double* Body_friction(Body* p);

// Depth 500
Body Body_init(Vector3__double velocity, Vector3__double angular_MINUS_velocity, Vector3__double force, Vector3__double torque, double mass, double inv_MINUS_mass, double inv_MINUS_inertia, double restitution, double friction, double damping, double angular_MINUS_damping, bool is_MINUS_sleeping, BodyType body_MINUS_type);

// Depth 500
double* Body_inv_MINUS_inertia(Body* p);

// Depth 500
double* Body_inv_MINUS_mass(Body* p);

// Depth 500
bool* Body_is_MINUS_sleeping(Body* p);

// Depth 500
Body Body_kinematic(double restitution, double friction);

// Depth 500
double* Body_mass(Body* p);

// Depth 500
Body Body_new(double mass, double restitution, double friction, double damping, double ang_MINUS_damping, double inertia);

// Depth 500
String Body_prn(Body *p);

// Depth 500
double* Body_restitution(Body* p);

// Depth 500
Body Body_set_MINUS_angular_MINUS_damping(Body p, double newValue);

// Depth 500
void Body_set_MINUS_angular_MINUS_damping_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_angular_MINUS_velocity(Body p, Vector3__double newValue);

// Depth 500
void Body_set_MINUS_angular_MINUS_velocity_BANG_(Body* pRef, Vector3__double newValue);

// Depth 500
Body Body_set_MINUS_body_MINUS_type(Body p, BodyType newValue);

// Depth 500
void Body_set_MINUS_body_MINUS_type_BANG_(Body* pRef, BodyType newValue);

// Depth 500
Body Body_set_MINUS_damping(Body p, double newValue);

// Depth 500
void Body_set_MINUS_damping_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_force(Body p, Vector3__double newValue);

// Depth 500
void Body_set_MINUS_force_BANG_(Body* pRef, Vector3__double newValue);

// Depth 500
Body Body_set_MINUS_friction(Body p, double newValue);

// Depth 500
void Body_set_MINUS_friction_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_inv_MINUS_inertia(Body p, double newValue);

// Depth 500
void Body_set_MINUS_inv_MINUS_inertia_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_inv_MINUS_mass(Body p, double newValue);

// Depth 500
void Body_set_MINUS_inv_MINUS_mass_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_is_MINUS_sleeping(Body p, bool newValue);

// Depth 500
void Body_set_MINUS_is_MINUS_sleeping_BANG_(Body* pRef, bool newValue);

// Depth 500
Body Body_set_MINUS_mass(Body p, double newValue);

// Depth 500
void Body_set_MINUS_mass_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_restitution(Body p, double newValue);

// Depth 500
void Body_set_MINUS_restitution_BANG_(Body* pRef, double newValue);

// Depth 500
Body Body_set_MINUS_torque(Body p, Vector3__double newValue);

// Depth 500
void Body_set_MINUS_torque_BANG_(Body* pRef, Vector3__double newValue);

// Depth 500
Body Body_set_MINUS_velocity(Body p, Vector3__double newValue);

// Depth 500
void Body_set_MINUS_velocity_BANG_(Body* pRef, Vector3__double newValue);

// Depth 500
Body Body__STATIC_(double restitution, double friction);

// Depth 500
String Body_str(Body *p);

// Depth 500
Vector3__double* Body_torque(Body* p);

// Depth 500
Body Body_update_MINUS_angular_MINUS_damping(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_angular_MINUS_velocity(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_body_MINUS_type(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_damping(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_force(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_friction(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_inv_MINUS_inertia(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_inv_MINUS_mass(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_is_MINUS_sleeping(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_mass(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_restitution(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_torque(Body p, Lambda *updater);

// Depth 500
Body Body_update_MINUS_velocity(Body p, Lambda *updater);

// Depth 500
Vector3__double* Body_velocity(Body* p);

// Depth 1000

// Depth 500
BodyType BodyType_Dynamic();

// Depth 500
BodyType BodyType_Kinematic();

// Depth 500
BodyType BodyType_Static();

// Depth 500
BodyType BodyType_copy(BodyType* pRef);

// Depth 500
void BodyType_delete(BodyType p);

// Depth 500
int BodyType_get_MINUS_tag(BodyType *p);

// Depth 500
String BodyType_prn(BodyType *p);

// Depth 500
String BodyType_str(BodyType *p);

// Depth 1000

// Depth 500
bool Bool_blit(bool x);

// Depth 500
int Bool_hash(bool* k);

// Depth 500
String Bool_prn(bool x);

// Depth 500
bool Bool_zero();

// Depth 1000

// Depth 500
String BoolRef_format(String* s, bool* x);

// Depth 500
String BoolRef_prn(bool* x);

// Depth 500
String BoolRef_str(bool* x);

// Depth 1000

// Depth 500
Pair__ColorId_String Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* _env, Pair__ColorId_String p);

// Depth 500
void Bucket_delete__ColorId_String(Bucket__ColorId_String p);

// Depth 500
Bucket__ColorId_String Bucket_empty__ColorId_String();

// Depth 500
Array__Pair__ColorId_String* Bucket_entries__ColorId_String(Bucket__ColorId_String* p);

// Depth 500
int Bucket_find__ColorId_String(Bucket__ColorId_String* b, ColorId* k);

// Depth 500
String Bucket_get_MINUS_idx__ColorId_String(Bucket__ColorId_String* b, int i);

// Depth 500
String Bucket_get__ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* default_MINUS_value);

// Depth 500
Bucket__ColorId_String Bucket_init__ColorId_String(Array__Pair__ColorId_String entries);

// Depth 500
void Bucket_push_MINUS_back_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v);

// Depth 500
void Bucket_put_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v);

// Depth 500
void Bucket_set_MINUS_idx_BANG___ColorId_String(Bucket__ColorId_String* b, int i, String* val);

// Depth 1000

// Depth 500
uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y);

// Depth 500
uint8_t Byte_blit(uint8_t x);

// Depth 500
bool Byte_even_QMARK_(uint8_t a);

// Depth 500
Maybe__uint8_t Byte_from_MINUS_string(String* s);

// Depth 500
int Byte_hash(uint8_t* k);

// Depth 500
bool Byte_odd_QMARK_(uint8_t a);

// Depth 500
uint8_t Byte_pow(uint8_t x, uint8_t y);

// Depth 500
String Byte_prn(uint8_t x);

// Depth 500
uint8_t Byte_random();

// Depth 500
uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper);

// Depth 500
uint8_t Byte_zero();

// Depth 1000

// Depth 500
ByteOrder ByteOrder_BigEndian();

// Depth 500
ByteOrder ByteOrder_LittleEndian();

// Depth 500
ByteOrder ByteOrder_blit(ByteOrder x);

// Depth 500
ByteOrder ByteOrder_copy(ByteOrder* pRef);

// Depth 500
void ByteOrder_delete(ByteOrder p);

// Depth 500
int ByteOrder_get_MINUS_tag(ByteOrder *p);

// Depth 500
String ByteOrder_prn(ByteOrder *p);

// Depth 500
String ByteOrder_str(ByteOrder *p);

// Depth 1000

// Depth 500
bool ByteRef__LT_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__EQ_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__GT_(uint8_t* a, uint8_t* b);

// Depth 500
String ByteRef_format(String* s, uint8_t* x);

// Depth 500
String ByteRef_prn(uint8_t* x);

// Depth 500
String ByteRef_str(uint8_t* x);

// Depth 1000

// Depth 500
CellRange CellRange_copy(CellRange* pRef);

// Depth 500
void CellRange_delete(CellRange p);

// Depth 500
CellRange CellRange_init(int min_MINUS_x, int max_MINUS_x, int min_MINUS_y, int max_MINUS_y, int min_MINUS_z, int max_MINUS_z);

// Depth 500
int* CellRange_max_MINUS_x(CellRange* p);

// Depth 500
int* CellRange_max_MINUS_y(CellRange* p);

// Depth 500
int* CellRange_max_MINUS_z(CellRange* p);

// Depth 500
int* CellRange_min_MINUS_x(CellRange* p);

// Depth 500
int* CellRange_min_MINUS_y(CellRange* p);

// Depth 500
int* CellRange_min_MINUS_z(CellRange* p);

// Depth 500
String CellRange_prn(CellRange *p);

// Depth 500
CellRange CellRange_set_MINUS_max_MINUS_x(CellRange p, int newValue);

// Depth 500
void CellRange_set_MINUS_max_MINUS_x_BANG_(CellRange* pRef, int newValue);

// Depth 500
CellRange CellRange_set_MINUS_max_MINUS_y(CellRange p, int newValue);

// Depth 500
void CellRange_set_MINUS_max_MINUS_y_BANG_(CellRange* pRef, int newValue);

// Depth 500
CellRange CellRange_set_MINUS_max_MINUS_z(CellRange p, int newValue);

// Depth 500
void CellRange_set_MINUS_max_MINUS_z_BANG_(CellRange* pRef, int newValue);

// Depth 500
CellRange CellRange_set_MINUS_min_MINUS_x(CellRange p, int newValue);

// Depth 500
void CellRange_set_MINUS_min_MINUS_x_BANG_(CellRange* pRef, int newValue);

// Depth 500
CellRange CellRange_set_MINUS_min_MINUS_y(CellRange p, int newValue);

// Depth 500
void CellRange_set_MINUS_min_MINUS_y_BANG_(CellRange* pRef, int newValue);

// Depth 500
CellRange CellRange_set_MINUS_min_MINUS_z(CellRange p, int newValue);

// Depth 500
void CellRange_set_MINUS_min_MINUS_z_BANG_(CellRange* pRef, int newValue);

// Depth 500
String CellRange_str(CellRange *p);

// Depth 500
CellRange CellRange_update_MINUS_max_MINUS_x(CellRange p, Lambda *updater);

// Depth 500
CellRange CellRange_update_MINUS_max_MINUS_y(CellRange p, Lambda *updater);

// Depth 500
CellRange CellRange_update_MINUS_max_MINUS_z(CellRange p, Lambda *updater);

// Depth 500
CellRange CellRange_update_MINUS_min_MINUS_x(CellRange p, Lambda *updater);

// Depth 500
CellRange CellRange_update_MINUS_min_MINUS_y(CellRange p, Lambda *updater);

// Depth 500
CellRange CellRange_update_MINUS_min_MINUS_z(CellRange p, Lambda *updater);

// Depth 1000

// Depth 500
bool Char_alpha_QMARK_(Char c);

// Depth 500
bool Char_alphanum_QMARK_(Char c);

// Depth 500
Char Char_blit(Char x);

// Depth 500
int Char_hash(Char* k);

// Depth 500
bool Char_lower_MINUS_case_QMARK_(Char c);

// Depth 500
int Char_meaning(Char* char_MINUS_ref);

// Depth 500
bool Char_num_QMARK_(Char c);

// Depth 500
Char Char_random();

// Depth 500
Char Char_random_MINUS_between(Char a, Char b);

// Depth 500
bool Char_upper_MINUS_case_QMARK_(Char c);

// Depth 500
Char Char_zero();

// Depth 1000

// Depth 500
bool CharRef__LT_(Char* a, Char* b);

// Depth 500
bool CharRef__EQ_(Char* a, Char* b);

// Depth 500
bool CharRef__GT_(Char* a, Char* b);

// Depth 1000

// Depth 500
Collidable Collidable_copy(Collidable* pRef);

// Depth 500
void Collidable_delete(Collidable p);

// Depth 500
Handle__void* Collidable_handle(Collidable* p);

// Depth 500
Collidable Collidable_init(Handle__void handle, Volume volume, Uint32 layer, Uint32 mask, bool is_MINUS_trigger);

// Depth 500
bool* Collidable_is_MINUS_trigger(Collidable* p);

// Depth 500
Uint32* Collidable_layer(Collidable* p);

// Depth 500
Uint32* Collidable_mask(Collidable* p);

// Depth 500
String Collidable_prn(Collidable *p);

// Depth 500
Collidable Collidable_set_MINUS_handle(Collidable p, Handle__void newValue);

// Depth 500
void Collidable_set_MINUS_handle_BANG_(Collidable* pRef, Handle__void newValue);

// Depth 500
Collidable Collidable_set_MINUS_is_MINUS_trigger(Collidable p, bool newValue);

// Depth 500
void Collidable_set_MINUS_is_MINUS_trigger_BANG_(Collidable* pRef, bool newValue);

// Depth 500
Collidable Collidable_set_MINUS_layer(Collidable p, Uint32 newValue);

// Depth 500
void Collidable_set_MINUS_layer_BANG_(Collidable* pRef, Uint32 newValue);

// Depth 500
Collidable Collidable_set_MINUS_mask(Collidable p, Uint32 newValue);

// Depth 500
void Collidable_set_MINUS_mask_BANG_(Collidable* pRef, Uint32 newValue);

// Depth 500
Collidable Collidable_set_MINUS_volume(Collidable p, Volume newValue);

// Depth 500
void Collidable_set_MINUS_volume_BANG_(Collidable* pRef, Volume newValue);

// Depth 500
String Collidable_str(Collidable *p);

// Depth 500
Collidable Collidable_update_MINUS_handle(Collidable p, Lambda *updater);

// Depth 500
Collidable Collidable_update_MINUS_is_MINUS_trigger(Collidable p, Lambda *updater);

// Depth 500
Collidable Collidable_update_MINUS_layer(Collidable p, Lambda *updater);

// Depth 500
Collidable Collidable_update_MINUS_mask(Collidable p, Lambda *updater);

// Depth 500
Collidable Collidable_update_MINUS_volume(Collidable p, Lambda *updater);

// Depth 500
Volume* Collidable_volume(Collidable* p);

// Depth 1000

// Depth 500
Handle__void* Collision_a(Collision* c);

// Depth 500
Handle__void* Collision_b(Collision* c);

// Depth 500
Maybe__ContactSet Collision_collide(Handle__void* h1, Volume* v1, Handle__void* h2, Volume* v2);

// Depth 500
Maybe__ContactSet Collision_collide_MINUS_box_MINUS_sdf(Handle__void* h_MINUS_box, AABB* box, Handle__void* h_MINUS_sdf, SDF* sdf);

// Depth 500
Maybe__ContactSet Collision_collide_MINUS_sdf_MINUS_plane(Handle__void* h_MINUS_sdf, SDF* sdf, Handle__void* h_MINUS_plane, Plane* plane);

// Depth 500
Maybe__ContactSet Collision_collide_MINUS_sdf_MINUS_sdf(Handle__void* h1, SDF* sdf1, Handle__void* h2, SDF* sdf2);

// Depth 500
Maybe__ContactSet Collision_collide_MINUS_swept(Handle__void* h1, Volume* v1, Vector3__double* vel, double dt, Handle__void* h2, Volume* v2);

// Depth 500
ContactSet* Collision_contact_MINUS_set(Collision* p);

// Depth 500
Collision Collision_copy(Collision* pRef);

// Depth 500
void Collision_delete(Collision p);

// Depth 500
AABB Collision_get_MINUS_aabb(Volume* v);

// Depth 500
AABB Collision_get_MINUS_swept_MINUS_aabb(Volume* v, Vector3__double* vel, double dt);

// Depth 500
Collision Collision_init(ContactSet contact_MINUS_set);

// Depth 500
String Collision_prn(Collision *p);

// Depth 500
Collision Collision_set_MINUS_contact_MINUS_set(Collision p, ContactSet newValue);

// Depth 500
void Collision_set_MINUS_contact_MINUS_set_BANG_(Collision* pRef, ContactSet newValue);

// Depth 500
String Collision_str(Collision *p);

// Depth 500
Collision Collision_update_MINUS_contact_MINUS_set(Collision p, Lambda *updater);

// Depth 1000

// Depth 500
Maybe__CollisionResult CollisionChecker_check_MINUS_pair(Collidable* c1, Collidable* c2);

// Depth 500
Maybe__CollisionResult CollisionChecker_check_MINUS_pair_MINUS_swept(Collidable* c1, Vector3__double* vel, double dt, Collidable* c2);

// Depth 500
Array__CollisionResult CollisionChecker_query_MINUS_and_MINUS_check(SpatialGrid__Uint64* grid, Collidable* self, Array__Collidable* others, bool symmetric);

// Depth 500
void CollisionChecker_query_MINUS_and_MINUS_check_MINUS_into_BANG_(SpatialGrid__Uint64* grid, Collidable* self, Array__Collidable* others, Array__CollisionResult* out, bool symmetric);

// Depth 1000

// Depth 500
CollisionResult CollisionResult_Physical(Collision member0);

// Depth 500
CollisionResult CollisionResult_Triggered(Trigger member0);

// Depth 500
Handle__void CollisionResult_a(CollisionResult* res);

// Depth 500
Handle__void CollisionResult_b(CollisionResult* res);

// Depth 500
CollisionResult CollisionResult_copy(CollisionResult* pRef);

// Depth 500
void CollisionResult_delete(CollisionResult p);

// Depth 500
int CollisionResult_get_MINUS_tag(CollisionResult *p);

// Depth 500
String CollisionResult_prn(CollisionResult *p);

// Depth 500
String CollisionResult_str(CollisionResult *p);

// Depth 1000

// Depth 500
bool Color__EQ___ColorId(ColorId* a, ColorId* b);

// Depth 500
String Color_color(ColorId cid);

// Depth 500
String Color_colorize(ColorId cid, String* s);

// Depth 500
int Color_hash(ColorId* k);

// Depth 500
Map__ColorId_String Color_table;

// Depth 1000

// Depth 500
ColorId Color_Id_BgBlack();

// Depth 500
ColorId Color_Id_BgBlue();

// Depth 500
ColorId Color_Id_BgCyan();

// Depth 500
ColorId Color_Id_BgGreen();

// Depth 500
ColorId Color_Id_BgMagenta();

// Depth 500
ColorId Color_Id_BgRed();

// Depth 500
ColorId Color_Id_BgWhite();

// Depth 500
ColorId Color_Id_BgYellow();

// Depth 500
ColorId Color_Id_Black();

// Depth 500
ColorId Color_Id_BlinkRapid();

// Depth 500
ColorId Color_Id_BlinkSlow();

// Depth 500
ColorId Color_Id_Blue();

// Depth 500
ColorId Color_Id_Bold();

// Depth 500
ColorId Color_Id_Cyan();

// Depth 500
ColorId Color_Id_Green();

// Depth 500
ColorId Color_Id_Italic();

// Depth 500
ColorId Color_Id_Magenta();

// Depth 500
ColorId Color_Id_None();

// Depth 500
ColorId Color_Id_Red();

// Depth 500
ColorId Color_Id_Reset();

// Depth 500
ColorId Color_Id_Underline();

// Depth 500
ColorId Color_Id_White();

// Depth 500
ColorId Color_Id_Yellow();

// Depth 500
ColorId Color_Id_copy(ColorId* pRef);

// Depth 500
void Color_Id_delete(ColorId p);

// Depth 500
int Color_Id_get_MINUS_tag(ColorId *p);

// Depth 500
String Color_Id_prn(ColorId *p);

// Depth 500
String Color_Id_str(ColorId *p);

// Depth 1000

// Depth 500
Contact Contact_copy(Contact* pRef);

// Depth 500
void Contact_delete(Contact p);

// Depth 500
double* Contact_depth(Contact* p);

// Depth 500
Contact Contact_init(double depth, Vector3__double point, Vector3__double normal);

// Depth 500
Vector3__double* Contact_normal(Contact* p);

// Depth 500
Vector3__double* Contact_point(Contact* p);

// Depth 500
String Contact_prn(Contact *p);

// Depth 500
Contact Contact_reverse(Contact* c);

// Depth 500
Contact Contact_set_MINUS_depth(Contact p, double newValue);

// Depth 500
void Contact_set_MINUS_depth_BANG_(Contact* pRef, double newValue);

// Depth 500
Contact Contact_set_MINUS_normal(Contact p, Vector3__double newValue);

// Depth 500
void Contact_set_MINUS_normal_BANG_(Contact* pRef, Vector3__double newValue);

// Depth 500
Contact Contact_set_MINUS_point(Contact p, Vector3__double newValue);

// Depth 500
void Contact_set_MINUS_point_BANG_(Contact* pRef, Vector3__double newValue);

// Depth 500
String Contact_str(Contact *p);

// Depth 500
Contact Contact_update_MINUS_depth(Contact p, Lambda *updater);

// Depth 500
Contact Contact_update_MINUS_normal(Contact p, Lambda *updater);

// Depth 500
Contact Contact_update_MINUS_point(Contact p, Lambda *updater);

// Depth 1000

// Depth 500
Handle__void* ContactSet_a(ContactSet* p);

// Depth 500
Handle__void* ContactSet_b(ContactSet* p);

// Depth 500
Array__Contact* ContactSet_contacts(ContactSet* p);

// Depth 500
ContactSet ContactSet_copy(ContactSet* pRef);

// Depth 500
void ContactSet_delete(ContactSet p);

// Depth 500
ContactSet ContactSet_init(Handle__void a, Handle__void b, Array__Contact contacts);

// Depth 500
ContactSet ContactSet_new(Handle__void a, Handle__void b, Array__Contact contacts);

// Depth 500
String ContactSet_prn(ContactSet *p);

// Depth 500
ContactSet ContactSet_reverse(ContactSet* cs);

// Depth 500
ContactSet ContactSet_set_MINUS_a(ContactSet p, Handle__void newValue);

// Depth 500
void ContactSet_set_MINUS_a_BANG_(ContactSet* pRef, Handle__void newValue);

// Depth 500
ContactSet ContactSet_set_MINUS_b(ContactSet p, Handle__void newValue);

// Depth 500
void ContactSet_set_MINUS_b_BANG_(ContactSet* pRef, Handle__void newValue);

// Depth 500
ContactSet ContactSet_set_MINUS_contacts(ContactSet p, Array__Contact newValue);

// Depth 500
void ContactSet_set_MINUS_contacts_BANG_(ContactSet* pRef, Array__Contact newValue);

// Depth 500
String ContactSet_str(ContactSet *p);

// Depth 500
ContactSet ContactSet_update_MINUS_a(ContactSet p, Lambda *updater);

// Depth 500
ContactSet ContactSet_update_MINUS_b(ContactSet p, Lambda *updater);

// Depth 500
ContactSet ContactSet_update_MINUS_contacts(ContactSet p, Lambda *updater);

// Depth 1000

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
double Double_blit(double x);

// Depth 500
double Double_clamp__double(double min, double max, double val);

// Depth 500
double Double_dec(double x);

// Depth 500
double Double_e;

// Depth 500
Maybe__double Double_from_MINUS_string(String* s);

// Depth 500
int Double_hash(double* k);

// Depth 500
double Double_inc(double x);

// Depth 500
bool Double_negative_QMARK_(double a);

// Depth 500
double Double_pi;

// Depth 500
bool Double_positive_QMARK_(double a);

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_random();

// Depth 500
double Double_random_MINUS_between(double lower, double upper);

// Depth 500
double Double_sign(double x);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 500
String DoubleRef_format(String* s, double* x);

// Depth 500
String DoubleRef_prn(double* x);

// Depth 500
String DoubleRef_str(double* x);

// Depth 1000

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
float Float_blit(float x);

// Depth 500
float Float_dec(float x);

// Depth 500
Maybe__float Float_from_MINUS_string(String* s);

// Depth 500
int Float_hash(float* k);

// Depth 500
float Float_inc(float x);

// Depth 500
bool Float_negative_QMARK_(float a);

// Depth 500
float Float_pi;

// Depth 500
bool Float_positive_QMARK_(float a);

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_random();

// Depth 500
float Float_random_MINUS_between(float lower, float upper);

// Depth 500
float Float_sign(float x);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 500
String FloatRef_format(String* s, float* x);

// Depth 500
String FloatRef_prn(float* x);

// Depth 500
String FloatRef_str(float* x);

// Depth 1000

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f);

// Depth 500
void Function_delete__Long_Uint32 (Lambda f);

// Depth 500
void Function_delete__Long_Uint64 (Lambda f);

// Depth 500
void Function_delete__Pair__ColorId_String_Pair__ColorId_String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__int (Lambda f);

// Depth 500
void Function_delete__String_MUL__bool (Lambda f);

// Depth 500
void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__bool_bool_bool (Lambda f);

// Depth 500
void Function_delete__double_double (Lambda f);

// Depth 500
void Function_delete__double_double_double (Lambda f);

// Depth 500
void Function_delete__int_int (Lambda f);

// Depth 500
void Function_delete__int_int_MUL__int (Lambda f);

// Depth 500
void Function_delete__uint8_t_MUL__String (Lambda f);

// Depth 500
void Function_delete__uint8_t_uint8_t (Lambda f);

// Depth 500
void Function_delete__void (Lambda f);

// Depth 1000

// Depth 500
double Geometry_EPSILON;

// Depth 500
Plane Geometry_create_MINUS_plane(Vector3__double* p, Vector3__double* n);

// Depth 500
Ray Geometry_create_MINUS_ray(Vector3__double* origin, Vector3__double* direction);

// Depth 1000

// Depth 500
Maybe__Contact Geometry_AABB_collide_MINUS_aabb(AABB* a, AABB* b);

// Depth 500
bool Geometry_AABB_contains_QMARK_(AABB* a, Vector3__double* p);

// Depth 1000

// Depth 500
Vector3__double Geometry_Ray_at(Ray* r, double t);

// Depth 500
Array__Vector3__double Geometry_Ray_fibonacci_MINUS_samples;

// Depth 500
Array__Vector3__double Geometry_Ray_fibonacci_MINUS_sphere(int samples);

// Depth 500
Maybe__RayHit Geometry_Ray_intersect_MINUS_aabb(Ray* ray, AABB* aabb);

// Depth 500
Maybe__RayHit Geometry_Ray_intersect_MINUS_sphere(Ray* ray, Sphere* sphere);

// Depth 1000

// Depth 500
Vector3__double Geometry_Segment_direction(Segment* s);

// Depth 500
Maybe__RayHit Geometry_Segment_intersect_MINUS_aabb(Segment* s, AABB* aabb);

// Depth 500
Maybe__RayHit Geometry_Segment_intersect_MINUS_sdf(Segment* s, SDF* sdf);

// Depth 500
Maybe__RayHit Geometry_Segment_intersect_MINUS_sphere(Segment* s, Sphere* sphere);

// Depth 500
double Geometry_Segment_length(Segment* s);

// Depth 1000

// Depth 500
Maybe__Contact Geometry_Sphere_collide_MINUS_aabb(Sphere* sphere, AABB* aabb);

// Depth 500
Maybe__Contact Geometry_Sphere_collide_MINUS_sdf(Sphere* sphere, SDF* sdf);

// Depth 500
Maybe__Contact Geometry_Sphere_collide_MINUS_sphere(Sphere* s1, Sphere* s2);

// Depth 500
bool Geometry_Sphere_contains_QMARK_(Sphere* s, Vector3__double* p);

// Depth 1000

// Depth 500
Handle__void Handle_copy__void(Handle__void* pRef);

// Depth 500
void Handle_delete__void(Handle__void p);

// Depth 500
bool Handle_equal_QMARK___void_void(Handle__void* a, Handle__void* b);

// Depth 500
Uint32* Handle_generation_MINUS_raw__void(Handle__void* p);

// Depth 500
Uint64* Handle_index_MINUS_raw__void(Handle__void* p);

// Depth 500
Handle__void Handle_init__void(Uint64 index_MINUS_raw, Uint32 generation_MINUS_raw);

// Depth 500
bool Handle_less_MINUS_than_QMARK___void_void(Handle__void* a, Handle__void* b);

// Depth 500
String Handle_prn__void(Handle__void *p);

// Depth 1000

// Depth 500
int Heap_lchild(int i);

// Depth 500
int Heap_parent(int i);

// Depth 500
int Heap_rchild(int i);

// Depth 1000

// Depth 500
Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name);

// Depth 500
void IO_color(ColorId cid);

// Depth 500
void IO_colorize(ColorId cid, String* s);

// Depth 500
Result__Char_String IO_fgetc(FILE* file);

// Depth 500
Maybe__String IO_getenv(String* s);

// Depth 500
Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode);

// Depth 500
Result__String_String IO_read_MINUS__GT_EOF(String* filename);

// Depth 500
Result__String_String IO_read_MINUS_file(String* filename);

// Depth 500
Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name);

// Depth 1000

// Depth 500
void IO_Raw_fclose_BANG_(FILE* file);

// Depth 500
void IO_Raw_fflush_BANG_(FILE* file);

// Depth 500
FILE* IO_Raw_fopen(String* pathname, String* mode);

// Depth 500
int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_unlink(String* file_MINUS_name);

// Depth 500
void IO_Raw_unlink_BANG_(String* file_MINUS_name);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
int Int_blit(int x);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
int Int_from_MINUS_int(int a);

// Depth 500
Maybe__int Int_from_MINUS_string(String* s);

// Depth 500
int Int_hash(int* k);

// Depth 500
bool Int_negative_QMARK_(int a);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_positive_MINUS_mod(int k, int n);

// Depth 500
bool Int_positive_QMARK_(int a);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_random();

// Depth 500
int Int_random_MINUS_between(int lower, int upper);

// Depth 500
int Int_sign(int n);

// Depth 500
int Int_to_MINUS_int(int a);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
Int16 Int16_blit(Int16 x);

// Depth 500
int Int16_hash(Int16* k);

// Depth 500
String Int16_prn(Int16 a);

// Depth 500
Int16 Int16_zero();

// Depth 1000

// Depth 500
bool Int16Extra__EQ_(Int16* a, Int16* b);

// Depth 500
String Int16Extra_prn(Int16* a);

// Depth 500
String Int16Extra_str(Int16* a);

// Depth 1000

// Depth 500
Int32 Int32_blit(Int32 x);

// Depth 500
int Int32_hash(Int32* k);

// Depth 500
String Int32_prn(Int32 a);

// Depth 500
Int32 Int32_zero();

// Depth 1000

// Depth 500
bool Int32Extra__EQ_(Int32* a, Int32* b);

// Depth 500
String Int32Extra_prn(Int32* a);

// Depth 500
String Int32Extra_str(Int32* a);

// Depth 1000

// Depth 500
Int64 Int64_blit(Int64 x);

// Depth 500
int Int64_hash(Int64* k);

// Depth 500
String Int64_prn(Int64 a);

// Depth 500
Int64 Int64_zero();

// Depth 1000

// Depth 500
bool Int64Extra__EQ_(Int64* a, Int64* b);

// Depth 500
String Int64Extra_prn(Int64* a);

// Depth 500
String Int64Extra_str(Int64* a);

// Depth 1000

// Depth 500
Int8 Int8_blit(Int8 x);

// Depth 500
int Int8_hash(Int8* k);

// Depth 500
String Int8_prn(Int8 a);

// Depth 500
Int8 Int8_zero();

// Depth 1000

// Depth 500
bool Int8Extra__EQ_(Int8* a, Int8* b);

// Depth 500
String Int8Extra_prn(Int8* a);

// Depth 500
String Int8Extra_str(Int8* a);

// Depth 1000

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 500
String IntRef_format(String* s, int* x);

// Depth 500
String IntRef_prn(int* x);

// Depth 500
String IntRef_str(int* x);

// Depth 1000

// Depth 500
void Integrator_integrate_BANG_(Transform* t, Body* b, Vector3__double* accel, Vector3__double* ang_MINUS_accel, double dt);

// Depth 500
void Integrator_step_BANG_(Transform* t, Body* b, double dt);

// Depth 500
void Integrator_step_MINUS_custom_BANG_(Transform* t, Body* b, double dt, double sub_MINUS_step_MINUS_size);

// Depth 1000

// Depth 500
LocalCrater LocalCrater_copy(LocalCrater* pRef);

// Depth 500
void LocalCrater_delete(LocalCrater p);

// Depth 500
LocalCrater LocalCrater_init(Vector3__double pos, double radius);

// Depth 500
Vector3__double* LocalCrater_pos(LocalCrater* p);

// Depth 500
String LocalCrater_prn(LocalCrater *p);

// Depth 500
double* LocalCrater_radius(LocalCrater* p);

// Depth 500
LocalCrater LocalCrater_set_MINUS_pos(LocalCrater p, Vector3__double newValue);

// Depth 500
void LocalCrater_set_MINUS_pos_BANG_(LocalCrater* pRef, Vector3__double newValue);

// Depth 500
LocalCrater LocalCrater_set_MINUS_radius(LocalCrater p, double newValue);

// Depth 500
void LocalCrater_set_MINUS_radius_BANG_(LocalCrater* pRef, double newValue);

// Depth 500
String LocalCrater_str(LocalCrater *p);

// Depth 500
LocalCrater LocalCrater_update_MINUS_pos(LocalCrater p, Lambda *updater);

// Depth 500
LocalCrater LocalCrater_update_MINUS_radius(LocalCrater p, Lambda *updater);

// Depth 1000

// Depth 500
Long Long_add_MINUS_ref(Long* x, Long* y);

// Depth 500
Long Long_blit(Long x);

// Depth 500
bool Long_even_QMARK_(Long a);

// Depth 500
Maybe__Long Long_from_MINUS_string(String* s);

// Depth 500
int Long_hash(Long* k);

// Depth 500
bool Long_negative_QMARK_(Long a);

// Depth 500
bool Long_odd_QMARK_(Long a);

// Depth 500
bool Long_positive_QMARK_(Long a);

// Depth 500
String Long_prn(Long x);

// Depth 500
Long Long_random();

// Depth 500
Long Long_random_MINUS_between(Long lower, Long upper);

// Depth 500
Long Long_sign(Long n);

// Depth 500
Long Long_zero();

// Depth 1000

// Depth 500
bool LongRef__LT_(Long* a, Long* b);

// Depth 500
bool LongRef__EQ_(Long* a, Long* b);

// Depth 500
bool LongRef__GT_(Long* a, Long* b);

// Depth 500
String LongRef_format(String* s, Long* x);

// Depth 500
String LongRef_prn(Long* x);

// Depth 500
String LongRef_str(Long* x);

// Depth 1000

// Depth 500
Array__Bucket__ColorId_String* Map_buckets__ColorId_String(Map__ColorId_String* p);

// Depth 500
Map__ColorId_String Map_create__ColorId_String();

// Depth 500
void Map_delete__ColorId_String(Map__ColorId_String p);

// Depth 500
int Map_dflt_MINUS_len;

// Depth 500
Map__ColorId_String Map_from_MINUS_array__ColorId_String(Array__Pair__ColorId_String a);

// Depth 500
String Map_get_MINUS_with_MINUS_default__ColorId_String(Map__ColorId_String* m, ColorId* k, String* default_MINUS_value);

// Depth 500
String Map_get__ColorId_String(Map__ColorId_String* m, ColorId* k);

// Depth 500
Map__ColorId_String Map_init__ColorId_String(int len, int n_MINUS_buckets, Array__Bucket__ColorId_String buckets);

// Depth 500
int* Map_len__ColorId_String(Map__ColorId_String* p);

// Depth 500
int Map_max_MINUS_load;

// Depth 500
int Map_min_MINUS_load;

// Depth 500
int* Map_n_MINUS_buckets__ColorId_String(Map__ColorId_String* p);

// Depth 500
void Map_put_BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v);

// Depth 500
void Map_put_MINUS__BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v);

// Depth 500
void Map_set_MINUS_len_BANG___ColorId_String(Map__ColorId_String* pRef, int newValue);

// Depth 1000

// Depth 500
Maybe__CollisionResult Maybe_Just__CollisionResult(CollisionResult member0);

// Depth 500
Maybe__Contact Maybe_Just__Contact(Contact member0);

// Depth 500
Maybe__ContactSet Maybe_Just__ContactSet(ContactSet member0);

// Depth 500
Maybe__Long Maybe_Just__Long(Long member0);

// Depth 500
Maybe__RayHit Maybe_Just__RayHit(RayHit member0);

// Depth 500
Maybe__String Maybe_Just__String(String member0);

// Depth 500
Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0);

// Depth 500
Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0);

// Depth 500
Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0);

// Depth 500
Maybe__double Maybe_Just__double(double member0);

// Depth 500
Maybe__float Maybe_Just__float(float member0);

// Depth 500
Maybe__int Maybe_Just__int(int member0);

// Depth 500
Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0);

// Depth 500
Maybe__CollisionResult Maybe_Nothing__CollisionResult();

// Depth 500
Maybe__Contact Maybe_Nothing__Contact();

// Depth 500
Maybe__ContactSet Maybe_Nothing__ContactSet();

// Depth 500
Maybe__Long Maybe_Nothing__Long();

// Depth 500
Maybe__RayHit Maybe_Nothing__RayHit();

// Depth 500
Maybe__String Maybe_Nothing__String();

// Depth 500
Maybe__Uint16 Maybe_Nothing__Uint16();

// Depth 500
Maybe__Uint32 Maybe_Nothing__Uint32();

// Depth 500
Maybe__Uint64 Maybe_Nothing__Uint64();

// Depth 500
Maybe__double Maybe_Nothing__double();

// Depth 500
Maybe__float Maybe_Nothing__float();

// Depth 500
Maybe__int Maybe_Nothing__int();

// Depth 500
Maybe__uint8_t Maybe_Nothing__uint8_t();

// Depth 500
void Maybe_delete__CollisionResult(Maybe__CollisionResult p);

// Depth 500
void Maybe_delete__Contact(Maybe__Contact p);

// Depth 500
void Maybe_delete__ContactSet(Maybe__ContactSet p);

// Depth 500
void Maybe_delete__Long(Maybe__Long p);

// Depth 500
void Maybe_delete__RayHit(Maybe__RayHit p);

// Depth 500
void Maybe_delete__String(Maybe__String p);

// Depth 500
void Maybe_delete__Uint16(Maybe__Uint16 p);

// Depth 500
void Maybe_delete__Uint32(Maybe__Uint32 p);

// Depth 500
void Maybe_delete__Uint64(Maybe__Uint64 p);

// Depth 500
void Maybe_delete__bool(Maybe__bool p);

// Depth 500
void Maybe_delete__double(Maybe__double p);

// Depth 500
void Maybe_delete__float(Maybe__float p);

// Depth 500
void Maybe_delete__int(Maybe__int p);

// Depth 500
void Maybe_delete__uint8_t(Maybe__uint8_t p);

// Depth 500
String Maybe_from__String(Maybe__String a, String dflt);

// Depth 500
String Maybe_unsafe_MINUS_from__String(Maybe__String a);

// Depth 1000

// Depth 500
Opaque Opaque_copy(Opaque* pRef);

// Depth 500
void Opaque_delete(Opaque p);

// Depth 500
int Opaque_get_MINUS_tag(Opaque *p);

// Depth 500
String Opaque_prn(Opaque *p);

// Depth 500
String Opaque_str(Opaque *p);

// Depth 1000

// Depth 500
Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
ColorId* Pair_a__ColorId_String(Pair__ColorId_String* p);

// Depth 500
int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
String* Pair_b__ColorId_String(Pair__ColorId_String* p);

// Depth 500
void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p);

// Depth 500
void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p);

// Depth 500
void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p);

// Depth 500
void Pair_delete__ColorId_String(Pair__ColorId_String p);

// Depth 500
Pair__ColorId_String Pair_init_MINUS_from_MINUS_refs__ColorId_String(ColorId* a_MINUS_val, String* b_MINUS_val);

// Depth 500
Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b);

// Depth 500
Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b);

// Depth 500
Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b);

// Depth 500
Pair__ColorId_String Pair_init__ColorId_String(ColorId a, String b);

// Depth 500
Pair__ColorId_String Pair_set_MINUS_b__ColorId_String(Pair__ColorId_String p, String newValue);

// Depth 1000

// Depth 500
int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m);

// Depth 500
String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m);

// Depth 500
Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data);

// Depth 500
int Pattern_find(Pattern* pattern, String* data);

// Depth 500
Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data);

// Depth 500
Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data);

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__Char* chars);

// Depth 500
Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
PatternMatchResult Pattern_match(Pattern* pattern, String* data);

// Depth 500
String Pattern_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 500
bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res);

// Depth 500
Array__String Pattern_split(Pattern* p, String* s);

// Depth 1000

// Depth 500
int* Pattern_MatchResult_end(PatternMatchResult* p);

// Depth 500
PatternMatchResult Pattern_MatchResult_init(int start, int end);

// Depth 500
String Pattern_MatchResult_prn(PatternMatchResult *p);

// Depth 500
String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
int* Pattern_MatchResult_start(PatternMatchResult* p);

// Depth 500
String Pattern_MatchResult_str(PatternMatchResult matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater);

// Depth 1000

// Depth 500
Plane Plane_copy(Plane* pRef);

// Depth 500
double* Plane_d(Plane* p);

// Depth 500
void Plane_delete(Plane p);

// Depth 500
double Plane_distance_MINUS_to_MINUS_point(Plane* plane, Vector3__double* p);

// Depth 500
Plane Plane_init(Vector3__double normal, double d);

// Depth 500
Vector3__double* Plane_normal(Plane* p);

// Depth 500
String Plane_prn(Plane *p);

// Depth 500
Vector3__double Plane_project_MINUS_point(Plane* plane, Vector3__double* p);

// Depth 500
Plane Plane_set_MINUS_d(Plane p, double newValue);

// Depth 500
void Plane_set_MINUS_d_BANG_(Plane* pRef, double newValue);

// Depth 500
Plane Plane_set_MINUS_normal(Plane p, Vector3__double newValue);

// Depth 500
void Plane_set_MINUS_normal_BANG_(Plane* pRef, Vector3__double newValue);

// Depth 500
String Plane_str(Plane *p);

// Depth 500
Plane Plane_update_MINUS_d(Plane p, Lambda *updater);

// Depth 500
Plane Plane_update_MINUS_normal(Plane p, Lambda *updater);

// Depth 1000

// Depth 500
int * Pointer_address__int(int * a);

// Depth 500
bool Pointer_eq__CChar(CChar *p1, CChar *p2);

// Depth 500
bool Pointer_eq__FILE(FILE *p1, FILE *p2);

// Depth 1000

// Depth 500
Quaternion Quaternion_add(Quaternion* a, Quaternion* b);

// Depth 500
Quaternion Quaternion_conjugate(Quaternion* q);

// Depth 500
Quaternion Quaternion_copy(Quaternion* pRef);

// Depth 500
void Quaternion_delete(Quaternion p);

// Depth 500
Quaternion Quaternion_from_MINUS_axis_MINUS_angle(Vector3__double axis, double angle);

// Depth 500
Quaternion Quaternion_from_MINUS_euler(double yaw, double pitch, double roll);

// Depth 500
Quaternion Quaternion_identity();

// Depth 500
Quaternion Quaternion_init(double x, double y, double z, double w);

// Depth 500
Quaternion Quaternion_inverse(Quaternion* q);

// Depth 500
Quaternion Quaternion_mul(Quaternion* a, Quaternion* b);

// Depth 500
Quaternion Quaternion_mul_MINUS_raw(Quaternion* a, Quaternion* b);

// Depth 500
Quaternion Quaternion_new(double x, double y, double z, double w);

// Depth 500
Quaternion Quaternion_normalize(Quaternion* q);

// Depth 500
String Quaternion_prn(Quaternion *p);

// Depth 500
Vector3__double Quaternion_rotate(Quaternion* q, Vector3__double* v);

// Depth 500
Quaternion Quaternion_scale(Quaternion* q, double s);

// Depth 500
Quaternion Quaternion_set_MINUS_w(Quaternion p, double newValue);

// Depth 500
void Quaternion_set_MINUS_w_BANG_(Quaternion* pRef, double newValue);

// Depth 500
Quaternion Quaternion_set_MINUS_x(Quaternion p, double newValue);

// Depth 500
void Quaternion_set_MINUS_x_BANG_(Quaternion* pRef, double newValue);

// Depth 500
Quaternion Quaternion_set_MINUS_y(Quaternion p, double newValue);

// Depth 500
void Quaternion_set_MINUS_y_BANG_(Quaternion* pRef, double newValue);

// Depth 500
Quaternion Quaternion_set_MINUS_z(Quaternion p, double newValue);

// Depth 500
void Quaternion_set_MINUS_z_BANG_(Quaternion* pRef, double newValue);

// Depth 500
String Quaternion_str(Quaternion *p);

// Depth 500
Vector3__double Quaternion_to_MINUS_euler(Quaternion* q);

// Depth 500
Quaternion Quaternion_update_MINUS_w(Quaternion p, Lambda *updater);

// Depth 500
Quaternion Quaternion_update_MINUS_x(Quaternion p, Lambda *updater);

// Depth 500
Quaternion Quaternion_update_MINUS_y(Quaternion p, Lambda *updater);

// Depth 500
Quaternion Quaternion_update_MINUS_z(Quaternion p, Lambda *updater);

// Depth 500
double* Quaternion_w(Quaternion* p);

// Depth 500
double* Quaternion_x(Quaternion* p);

// Depth 500
double* Quaternion_y(Quaternion* p);

// Depth 500
double* Quaternion_z(Quaternion* p);

// Depth 1000

// Depth 500
bool Random__;

// Depth 500
double Random_a;

// Depth 500
double Random_c;

// Depth 500
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_();

// Depth 500
double Random_m;

// Depth 500
double Random_random();

// Depth 500
double Random_s;

// Depth 500
void Random_seed();

// Depth 500
void Random_seed_MINUS_from(double new_MINUS_seed);

// Depth 1000

// Depth 500
Ray Ray_copy(Ray* pRef);

// Depth 500
void Ray_delete(Ray p);

// Depth 500
Vector3__double* Ray_direction(Ray* p);

// Depth 500
Ray Ray_init(Vector3__double origin, Vector3__double direction);

// Depth 500
Vector3__double* Ray_origin(Ray* p);

// Depth 500
String Ray_prn(Ray *p);

// Depth 500
Ray Ray_set_MINUS_direction(Ray p, Vector3__double newValue);

// Depth 500
void Ray_set_MINUS_direction_BANG_(Ray* pRef, Vector3__double newValue);

// Depth 500
Ray Ray_set_MINUS_origin(Ray p, Vector3__double newValue);

// Depth 500
void Ray_set_MINUS_origin_BANG_(Ray* pRef, Vector3__double newValue);

// Depth 500
String Ray_str(Ray *p);

// Depth 500
Ray Ray_update_MINUS_direction(Ray p, Lambda *updater);

// Depth 500
Ray Ray_update_MINUS_origin(Ray p, Lambda *updater);

// Depth 1000

// Depth 500
RayHit RayHit_copy(RayHit* pRef);

// Depth 500
void RayHit_delete(RayHit p);

// Depth 500
RayHit RayHit_init(double t, Vector3__double point, Vector3__double normal);

// Depth 500
Vector3__double* RayHit_normal(RayHit* p);

// Depth 500
Vector3__double* RayHit_point(RayHit* p);

// Depth 500
String RayHit_prn(RayHit *p);

// Depth 500
RayHit RayHit_set_MINUS_normal(RayHit p, Vector3__double newValue);

// Depth 500
void RayHit_set_MINUS_normal_BANG_(RayHit* pRef, Vector3__double newValue);

// Depth 500
RayHit RayHit_set_MINUS_point(RayHit p, Vector3__double newValue);

// Depth 500
void RayHit_set_MINUS_point_BANG_(RayHit* pRef, Vector3__double newValue);

// Depth 500
RayHit RayHit_set_MINUS_t(RayHit p, double newValue);

// Depth 500
void RayHit_set_MINUS_t_BANG_(RayHit* pRef, double newValue);

// Depth 500
String RayHit_str(RayHit *p);

// Depth 500
double* RayHit_t(RayHit* p);

// Depth 500
RayHit RayHit_update_MINUS_normal(RayHit p, Lambda *updater);

// Depth 500
RayHit RayHit_update_MINUS_point(RayHit p, Lambda *updater);

// Depth 500
RayHit RayHit_update_MINUS_t(RayHit p, Lambda *updater);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0);

// Depth 500
Result__Char_String Result_Error__String_Char(String member0);

// Depth 500
Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0);

// Depth 500
Result__String_String Result_Error__String_String(String member0);

// Depth 500
Result__bool_String Result_Error__String_bool(String member0);

// Depth 500
Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0);

// Depth 500
Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0);

// Depth 500
Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0);

// Depth 500
Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0);

// Depth 500
Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0);

// Depth 500
Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0);

// Depth 500
Result__Char_String Result_Success__Char_String(Char member0);

// Depth 500
Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0);

// Depth 500
Result__String_String Result_Success__String_String(String member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0);

// Depth 500
Result__bool_String Result_Success__bool_String(bool member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef);

// Depth 500
Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef);

// Depth 500
Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef);

// Depth 500
void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p);

// Depth 500
void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p);

// Depth 500
void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p);

// Depth 500
void Result_delete__Char_String(Result__Char_String p);

// Depth 500
void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p);

// Depth 500
void Result_delete__String_String(Result__String_String p);

// Depth 500
void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p);

// Depth 500
void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p);

// Depth 500
void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p);

// Depth 500
void Result_delete__bool_String(Result__bool_String p);

// Depth 500
bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a);

// Depth 500
bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a);

// Depth 500
Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a);

// Depth 500
Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a);

// Depth 1000

// Depth 500
void RigidBody_apply_MINUS_angular_MINUS_impulse_BANG_(RigidBody* rb, Vector3__double* impulse);

// Depth 500
void RigidBody_apply_MINUS_force_BANG_(RigidBody* rb, Vector3__double* f);

// Depth 500
void RigidBody_apply_MINUS_impulse_BANG_(RigidBody* rb, Vector3__double* impulse);

// Depth 500
void RigidBody_apply_MINUS_torque_BANG_(RigidBody* rb, Vector3__double* t);

// Depth 500
Body* RigidBody_body(RigidBody* p);

// Depth 500
RigidBody RigidBody_copy(RigidBody* pRef);

// Depth 500
void RigidBody_delete(RigidBody p);

// Depth 500
RigidBody RigidBody_init(Transform transform, Body body);

// Depth 500
RigidBody RigidBody_kinematic(Vector3__double pos, Quaternion rot, double restitution, double friction);

// Depth 500
RigidBody RigidBody_new(Vector3__double pos, Quaternion rot, double mass, double restitution, double friction, double damping, double ang_MINUS_damping, double inertia);

// Depth 500
Vector3__double* RigidBody_position(RigidBody* rb);

// Depth 500
String RigidBody_prn(RigidBody *p);

// Depth 500
Quaternion* RigidBody_rotation(RigidBody* rb);

// Depth 500
RigidBody RigidBody_set_MINUS_body(RigidBody p, Body newValue);

// Depth 500
void RigidBody_set_MINUS_body_BANG_(RigidBody* pRef, Body newValue);

// Depth 500
void RigidBody_set_MINUS_position_BANG_(RigidBody* rb, Vector3__double pos);

// Depth 500
void RigidBody_set_MINUS_rotation_BANG_(RigidBody* rb, Quaternion rot);

// Depth 500
RigidBody RigidBody_set_MINUS_transform(RigidBody p, Transform newValue);

// Depth 500
void RigidBody_set_MINUS_transform_BANG_(RigidBody* pRef, Transform newValue);

// Depth 500
RigidBody RigidBody__STATIC_(Vector3__double pos, Quaternion rot, double restitution, double friction);

// Depth 500
void RigidBody_step_BANG_(RigidBody* rb, double dt);

// Depth 500
void RigidBody_step_MINUS_custom_BANG_(RigidBody* rb, double dt, double sub_MINUS_step);

// Depth 500
String RigidBody_str(RigidBody *p);

// Depth 500
Transform* RigidBody_transform(RigidBody* p);

// Depth 500
RigidBody RigidBody_update_MINUS_body(RigidBody p, Lambda *updater);

// Depth 500
RigidBody RigidBody_update_MINUS_transform(RigidBody p, Lambda *updater);

// Depth 1000

// Depth 500
void SDF_add_MINUS_crater_BANG_(SDF* sdf, LocalCrater c);

// Depth 500
double SDF_apply_MINUS_craters(SDF* sdf, Vector3__double* p, double base_MINUS_d);

// Depth 500
BaseShape* SDF_base(SDF* p);

// Depth 500
SDF SDF_copy(SDF* pRef);

// Depth 500
Array__LocalCrater* SDF_craters(SDF* p);

// Depth 500
void SDF_delete(SDF p);

// Depth 500
double SDF_distance(SDF* sdf, Vector3__double* p_MINUS_world);

// Depth 500
double SDF_distance_MINUS_local(SDF* sdf, Vector3__double* p);

// Depth 500
double SDF_distance_MINUS_world(SDF* sdf, Vector3__double* p_MINUS_world);

// Depth 500
SDF SDF_init(BaseShape base, Array__LocalCrater craters, Vector3__double position, Quaternion rotation);

// Depth 500
SDF SDF_init_MINUS_box(Vector3__double e, Vector3__double pos, Quaternion rot);

// Depth 500
SDF SDF_init_MINUS_cylinder(double r, double h, Vector3__double pos, Quaternion rot);

// Depth 500
SDF SDF_init_MINUS_plane(Plane pl, Vector3__double pos, Quaternion rot);

// Depth 500
SDF SDF_init_MINUS_sphere(double r, Vector3__double pos, Quaternion rot);

// Depth 500
Vector3__double SDF_normal_MINUS_at(SDF* sdf, Vector3__double* p_MINUS_world);

// Depth 500
Vector3__double SDF_normal_MINUS_local(SDF* sdf, Vector3__double* p);

// Depth 500
Vector3__double SDF_normal_MINUS_world(SDF* sdf, Vector3__double* p_MINUS_world);

// Depth 500
Vector3__double* SDF_position(SDF* p);

// Depth 500
String SDF_prn(SDF *p);

// Depth 500
Quaternion* SDF_rotation(SDF* p);

// Depth 500
SDF SDF_set_MINUS_base(SDF p, BaseShape newValue);

// Depth 500
void SDF_set_MINUS_base_BANG_(SDF* pRef, BaseShape newValue);

// Depth 500
SDF SDF_set_MINUS_craters(SDF p, Array__LocalCrater newValue);

// Depth 500
void SDF_set_MINUS_craters_BANG_(SDF* pRef, Array__LocalCrater newValue);

// Depth 500
SDF SDF_set_MINUS_position(SDF p, Vector3__double newValue);

// Depth 500
void SDF_set_MINUS_position_BANG_(SDF* pRef, Vector3__double newValue);

// Depth 500
SDF SDF_set_MINUS_rotation(SDF p, Quaternion newValue);

// Depth 500
void SDF_set_MINUS_rotation_BANG_(SDF* pRef, Quaternion newValue);

// Depth 500
String SDF_str(SDF *p);

// Depth 500
SDF SDF_update_MINUS_base(SDF p, Lambda *updater);

// Depth 500
SDF SDF_update_MINUS_craters(SDF p, Lambda *updater);

// Depth 500
SDF SDF_update_MINUS_position(SDF p, Lambda *updater);

// Depth 500
SDF SDF_update_MINUS_rotation(SDF p, Lambda *updater);

// Depth 1000

// Depth 500
Segment Segment_copy(Segment* pRef);

// Depth 500
void Segment_delete(Segment p);

// Depth 500
Vector3__double* Segment_end(Segment* p);

// Depth 500
Segment Segment_init(Vector3__double start, Vector3__double end);

// Depth 500
String Segment_prn(Segment *p);

// Depth 500
Segment Segment_set_MINUS_end(Segment p, Vector3__double newValue);

// Depth 500
void Segment_set_MINUS_end_BANG_(Segment* pRef, Vector3__double newValue);

// Depth 500
Segment Segment_set_MINUS_start(Segment p, Vector3__double newValue);

// Depth 500
void Segment_set_MINUS_start_BANG_(Segment* pRef, Vector3__double newValue);

// Depth 500
Vector3__double* Segment_start(Segment* p);

// Depth 500
String Segment_str(Segment *p);

// Depth 500
Segment Segment_update_MINUS_end(Segment p, Lambda *updater);

// Depth 500
Segment Segment_update_MINUS_start(Segment p, Lambda *updater);

// Depth 1000

// Depth 500
int Set_dflt_MINUS_len;

// Depth 500
int Set_max_MINUS_load;

// Depth 500
int Set_min_MINUS_load;

// Depth 1000

// Depth 500
void Solver_solve_BANG_(RigidBody* rb_MINUS_a, RigidBody* rb_MINUS_b, ContactSet* contact_MINUS_set);

// Depth 1000

// Depth 500
Array__Array__Uint64* SpatialGrid_buckets__Uint64(SpatialGrid__Uint64* p);

// Depth 500
double* SpatialGrid_cell_MINUS_size__Uint64(SpatialGrid__Uint64* p);

// Depth 500
int* SpatialGrid_cols__Uint64(SpatialGrid__Uint64* p);

// Depth 500
CellRange SpatialGrid_get_MINUS_range__Uint64(SpatialGrid__Uint64* grid, AABB* aabb);

// Depth 500
int* SpatialGrid_layers__Uint64(SpatialGrid__Uint64* p);

// Depth 500
Vector3__double* SpatialGrid_origin__Uint64(SpatialGrid__Uint64* p);

// Depth 500
Array__Uint64* SpatialGrid_overflow__Uint64(SpatialGrid__Uint64* p);

// Depth 500
Vector3__double SpatialGrid_pos_MINUS_to_MINUS_coord__Uint64(SpatialGrid__Uint64* grid, Vector3__double* p);

// Depth 500
Array__Uint64 SpatialGrid_query_MINUS_unique__Uint64(SpatialGrid__Uint64* grid, AABB* aabb);

// Depth 500
Array__Uint64 SpatialGrid_query__Uint64(SpatialGrid__Uint64* grid, AABB* aabb);

// Depth 500
int* SpatialGrid_rows__Uint64(SpatialGrid__Uint64* p);

// Depth 500
Array__Uint64 SpatialGrid_unique_MINUS_results__Uint64(Array__Uint64 ids);

// Depth 1000

// Depth 500
Vector3__double* Sphere_center(Sphere* p);

// Depth 500
Sphere Sphere_copy(Sphere* pRef);

// Depth 500
void Sphere_delete(Sphere p);

// Depth 500
Sphere Sphere_init(Vector3__double center, double radius);

// Depth 500
String Sphere_prn(Sphere *p);

// Depth 500
double* Sphere_radius(Sphere* p);

// Depth 500
Sphere Sphere_set_MINUS_center(Sphere p, Vector3__double newValue);

// Depth 500
void Sphere_set_MINUS_center_BANG_(Sphere* pRef, Vector3__double newValue);

// Depth 500
Sphere Sphere_set_MINUS_radius(Sphere p, double newValue);

// Depth 500
void Sphere_set_MINUS_radius_BANG_(Sphere* pRef, double newValue);

// Depth 500
String Sphere_str(Sphere *p);

// Depth 500
Sphere Sphere_update_MINUS_center(Sphere p, Lambda *updater);

// Depth 500
Sphere Sphere_update_MINUS_radius(Sphere p, Lambda *updater);

// Depth 1000

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c);

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c);

// Depth 500
bool String__Lambda_words_14_env(String* s);

// Depth 500
bool String_allocated_QMARK_(String* s);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_lower(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_upper(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
String String_concat(Array__String* strings);

// Depth 500
bool String_contains_MINUS_string_QMARK_(String* s, String* needle);

// Depth 500
bool String_contains_QMARK_(String* s, Char c);

// Depth 500
int String_count_MINUS_char(String* s, Char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
int String_hash(String* k);

// Depth 500
Char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
int String_index_MINUS_of(String* s, Char c);

// Depth 500
int String_index_MINUS_of_MINUS_from(String* s, Char c, int i);

// Depth 500
String String_join(String* sep, Array__String* strings);

// Depth 500
String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, Char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, Char pad, String* s);

// Depth 500
String String_prefix(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
String String_slice(String* s, int a, int b);

// Depth 500
Array__String String_split_MINUS_by(String* s, Array__Char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_suffix(String* s, int b);

// Depth 500
int String_sum_MINUS_length(Array__String* strings);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__LT_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 500
bool StringCopy__GT_(String a, String b);

// Depth 500
String StringCopy_prn(String s);

// Depth 500
String StringCopy_str(String s);

// Depth 1000

// Depth 500
String System_error_MINUS_text();

// Depth 500
void System_exit__void(int code);

// Depth 500
String System_strerror(int error_MINUS_no);

// Depth 1000

// Depth 500
TestState Test_assert_MINUS_equal__bool_String(TestState* state, bool x, bool y, String* descr);

// Depth 500
TestState Test_assert_MINUS_true__String(TestState* state, bool x, String* descr);

// Depth 500
TestState Test_display_MINUS_test__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
void Test_handle_MINUS_signal__void(int x);

// Depth 500
TestState Test_handler__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, Lambda op);

// Depth 500
void Test_print_MINUS_test_MINUS_results(TestState* state);

// Depth 500
TestState Test_reset(TestState state);

// Depth 500
int Test_run_MINUS_child(Lambda x);

// Depth 500
int Test_run_MINUS_child_MINUS_signals(Lambda x);

// Depth 1000

// Depth 500
TestState Test_State_copy(TestState* pRef);

// Depth 500
void Test_State_delete(TestState p);

// Depth 500
int* Test_State_failed(TestState* p);

// Depth 500
TestState Test_State_init(int passed, int failed);

// Depth 500
int* Test_State_passed(TestState* p);

// Depth 500
String Test_State_prn(TestState *p);

// Depth 500
TestState Test_State_set_MINUS_failed(TestState p, int newValue);

// Depth 500
void Test_State_set_MINUS_failed_BANG_(TestState* pRef, int newValue);

// Depth 500
TestState Test_State_set_MINUS_passed(TestState p, int newValue);

// Depth 500
void Test_State_set_MINUS_passed_BANG_(TestState* pRef, int newValue);

// Depth 500
String Test_State_str(TestState *p);

// Depth 500
TestState Test_State_update_MINUS_failed(TestState p, Lambda *updater);

// Depth 500
TestState Test_State_update_MINUS_passed(TestState p, Lambda *updater);

// Depth 1000

// Depth 500
Transform Transform_copy(Transform* pRef);

// Depth 500
void Transform_delete(Transform p);

// Depth 500
Vector3__double Transform_forward(Transform* t);

// Depth 500
Vector3__double Transform_forward_MINUS_quat(Quaternion* q);

// Depth 500
Transform Transform_identity();

// Depth 500
Transform Transform_init(Vector3__double position, Quaternion rotation, Vector3__double scale);

// Depth 500
Transform Transform_new(Vector3__double p, Quaternion r, Vector3__double s);

// Depth 500
Vector3__double* Transform_position(Transform* p);

// Depth 500
String Transform_prn(Transform *p);

// Depth 500
Vector3__double Transform_right(Transform* t);

// Depth 500
Vector3__double Transform_right_MINUS_quat(Quaternion* q);

// Depth 500
Quaternion* Transform_rotation(Transform* p);

// Depth 500
Vector3__double* Transform_scale(Transform* p);

// Depth 500
Transform Transform_set_MINUS_position(Transform p, Vector3__double newValue);

// Depth 500
void Transform_set_MINUS_position_BANG_(Transform* pRef, Vector3__double newValue);

// Depth 500
Transform Transform_set_MINUS_rotation(Transform p, Quaternion newValue);

// Depth 500
void Transform_set_MINUS_rotation_BANG_(Transform* pRef, Quaternion newValue);

// Depth 500
Transform Transform_set_MINUS_rotation_MINUS_val_BANG_(Transform t, Quaternion r);

// Depth 500
Transform Transform_set_MINUS_scale(Transform p, Vector3__double newValue);

// Depth 500
void Transform_set_MINUS_scale_BANG_(Transform* pRef, Vector3__double newValue);

// Depth 500
String Transform_str(Transform *p);

// Depth 500
TransformMat4 Transform_to_MINUS_inverse_MINUS_matrix(Transform* t);

// Depth 500
TransformMat4 Transform_to_MINUS_matrix(Transform* t);

// Depth 500
Vector3__double Transform_up(Transform* t);

// Depth 500
Vector3__double Transform_up_MINUS_quat(Quaternion* q);

// Depth 500
Transform Transform_update_MINUS_position(Transform p, Lambda *updater);

// Depth 500
Transform Transform_update_MINUS_rotation(Transform p, Lambda *updater);

// Depth 500
Transform Transform_update_MINUS_scale(Transform p, Lambda *updater);

// Depth 1000

// Depth 500
TransformMat4 TransformMat4_copy(TransformMat4* pRef);

// Depth 500
Array__float* TransformMat4_data(TransformMat4* p);

// Depth 500
void TransformMat4_delete(TransformMat4 p);

// Depth 500
TransformMat4 TransformMat4_from_MINUS_trs(Vector3__double* pos, Quaternion* rot, Vector3__double* scale);

// Depth 500
Vector3__double TransformMat4_get_MINUS_column(TransformMat4* m, int col);

// Depth 500
TransformMat4 TransformMat4_identity();

// Depth 500
TransformMat4 TransformMat4_init(Array__float data);

// Depth 500
String TransformMat4_prn(TransformMat4 *p);

// Depth 500
TransformMat4 TransformMat4_set_MINUS_data(TransformMat4 p, Array__float newValue);

// Depth 500
void TransformMat4_set_MINUS_data_BANG_(TransformMat4* pRef, Array__float newValue);

// Depth 500
String TransformMat4_str(TransformMat4 *p);

// Depth 500
TransformMat4 TransformMat4_update_MINUS_data(TransformMat4 p, Lambda *updater);

// Depth 1000

// Depth 500
Handle__void* Trigger_a(Trigger* p);

// Depth 500
Handle__void* Trigger_b(Trigger* p);

// Depth 500
Trigger Trigger_copy(Trigger* pRef);

// Depth 500
void Trigger_delete(Trigger p);

// Depth 500
Trigger Trigger_init(Handle__void a, Handle__void b);

// Depth 500
String Trigger_prn(Trigger *p);

// Depth 500
Trigger Trigger_set_MINUS_a(Trigger p, Handle__void newValue);

// Depth 500
void Trigger_set_MINUS_a_BANG_(Trigger* pRef, Handle__void newValue);

// Depth 500
Trigger Trigger_set_MINUS_b(Trigger p, Handle__void newValue);

// Depth 500
void Trigger_set_MINUS_b_BANG_(Trigger* pRef, Handle__void newValue);

// Depth 500
String Trigger_str(Trigger *p);

// Depth 500
Trigger Trigger_update_MINUS_a(Trigger p, Lambda *updater);

// Depth 500
Trigger Trigger_update_MINUS_b(Trigger p, Lambda *updater);

// Depth 1000

// Depth 500
Uint16 Uint16_blit(Uint16 x);

// Depth 500
int Uint16_hash(Uint16* k);

// Depth 500
String Uint16_prn(Uint16 a);

// Depth 500
Uint16 Uint16_zero();

// Depth 1000

// Depth 500
bool Uint16Extra__EQ_(Uint16* a, Uint16* b);

// Depth 500
String Uint16Extra_prn(Uint16* a);

// Depth 500
String Uint16Extra_str(Uint16* a);

// Depth 1000

// Depth 500
Uint32 Uint32_blit(Uint32 x);

// Depth 500
int Uint32_hash(Uint32* k);

// Depth 500
String Uint32_prn(Uint32 a);

// Depth 500
Uint32 Uint32_zero();

// Depth 1000

// Depth 500
bool Uint32Extra__EQ_(Uint32* a, Uint32* b);

// Depth 500
String Uint32Extra_prn(Uint32* a);

// Depth 500
String Uint32Extra_str(Uint32* a);

// Depth 1000

// Depth 500
Uint64 Uint64_blit(Uint64 x);

// Depth 500
int Uint64_hash(Uint64* k);

// Depth 500
String Uint64_prn(Uint64 a);

// Depth 500
Uint64 Uint64_zero();

// Depth 1000

// Depth 500
bool Uint64Extra__EQ_(Uint64* a, Uint64* b);

// Depth 500
String Uint64Extra_prn(Uint64* a);

// Depth 500
String Uint64Extra_str(Uint64* a);

// Depth 1000

// Depth 500
Uint8 Uint8_blit(Uint8 x);

// Depth 500
int Uint8_hash(Uint8* k);

// Depth 500
String Uint8_prn(Uint8 a);

// Depth 500
Uint8 Uint8_zero();

// Depth 1000

// Depth 500
bool Uint8Extra__EQ_(Uint8* a, Uint8* b);

// Depth 500
String Uint8Extra_prn(Uint8* a);

// Depth 500
String Uint8Extra_str(Uint8* a);

// Depth 1000

// Depth 500
bool Unit__EQ_();

// Depth 500
void Unit_copy();

// Depth 500
String Unit_prn();

// Depth 500
void Unit_zero();

// Depth 1000

// Depth 500
bool UnitRef__EQ_();

// Depth 1000

// Depth 500
bool Vector2__Lambda_vapprox_19_env(bool i, bool v);

// Depth 500
void Vector2_delete__bool(Vector2__bool p);

// Depth 500
bool Vector2_vreduce__bool_bool(Lambda f, bool i, Vector2__bool* v);

// Depth 500
bool* Vector2_x__bool(Vector2__bool* p);

// Depth 500
bool* Vector2_y__bool(Vector2__bool* p);

// Depth 1000

// Depth 500
double Vector3__Lambda_div__double_13_env(Vector3__Lambda_div__double_13_env_ty* _env, double c);

// Depth 500
double Vector3__Lambda_mul__double_13_env(Vector3__Lambda_mul__double_13_env_ty* _env, double c);

// Depth 500
bool Vector3__Lambda_vapprox_19_env(bool i, bool v);

// Depth 500
Vector3__double Vector3_add__double(Vector3__double* a, Vector3__double* b);

// Depth 500
Vector3__double Vector3_copy__double(Vector3__double* pRef);

// Depth 500
Vector3__double Vector3_cross__double(Vector3__double* a, Vector3__double* b);

// Depth 500
void Vector3_delete__bool(Vector3__bool p);

// Depth 500
void Vector3_delete__double(Vector3__double p);

// Depth 500
double Vector3_dist__double(Vector3__double* a, Vector3__double* b);

// Depth 500
Vector3__double Vector3_div__double(Vector3__double* v, double n);

// Depth 500
double Vector3_dot__double(Vector3__double* a, Vector3__double* b);

// Depth 500
Vector3__double Vector3_init__double(double x, double y, double z);

// Depth 500
double Vector3_mag_MINUS_sq__double(Vector3__double* o);

// Depth 500
double Vector3_mag__double(Vector3__double* o);

// Depth 500
Vector3__double Vector3_map__double_double(Lambda f, Vector3__double* v);

// Depth 500
Vector3__double Vector3_mul__double(Vector3__double* v, double n);

// Depth 500
Vector3__double Vector3_normalize__double(Vector3__double* o);

// Depth 500
String Vector3_prn__double(Vector3__double *p);

// Depth 500
Vector3__double Vector3_sub__double(Vector3__double* a, Vector3__double* b);

// Depth 500
double Vector3_sum__double(Vector3__double* o);

// Depth 500
bool Vector3_vreduce__bool_bool(Lambda f, bool i, Vector3__bool* v);

// Depth 500
double Vector3_vreduce__double_double(Lambda f, double i, Vector3__double* v);

// Depth 500
bool* Vector3_x__bool(Vector3__bool* p);

// Depth 500
double* Vector3_x__double(Vector3__double* p);

// Depth 500
bool* Vector3_y__bool(Vector3__bool* p);

// Depth 500
double* Vector3_y__double(Vector3__double* p);

// Depth 500
bool* Vector3_z__bool(Vector3__bool* p);

// Depth 500
double* Vector3_z__double(Vector3__double* p);

// Depth 500
Vector3__double Vector3_zip__double_double_double(Lambda f, Vector3__double* a, Vector3__double* b);

// Depth 1000

// Depth 500
Volume Volume_Ball(Sphere member0);

// Depth 500
Volume Volume_Box(AABB member0);

// Depth 500
Volume Volume_Sdf(SDF member0);

// Depth 500
Volume Volume_Surface(Plane member0);

// Depth 500
Volume Volume_copy(Volume* pRef);

// Depth 500
void Volume_delete(Volume p);

// Depth 500
int Volume_get_MINUS_tag(Volume *p);

// Depth 500
String Volume_prn(Volume *p);

// Depth 500
String Volume_str(Volume *p);


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;
#if defined _WIN32
  SetConsoleOutputCP(CP_UTF8);
#endif
    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }

    // Depth 0
    {
        Geometry_EPSILON = 1.0e-6;
    }

    // Depth 0
    {
        Map_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Map_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Map_dflt_MINUS_len = 16;
    }

    // Depth 0
    {
        Random_s = 1.938011e7;
    }

    // Depth 0
    {
        Random_m = 4.294967296e9;
    }

    // Depth 0
    {
        Random_c = 1.0;
    }

    // Depth 0
    {
        Random_a = 69069.0;
    }

    // Depth 0
    {
        Set_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Set_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Set_dflt_MINUS_len = 16;
    }

    // Depth 2
    {
        Random_seed();
        bool _6 = true;
        Random__ = _6;
    }

    // Depth 3
    {
        Array__Vector3__double _4 = Geometry_Ray_fibonacci_MINUS_sphere(32);
        Geometry_Ray_fibonacci_MINUS_samples = _4;
    }

    // Depth 8
    {
        Array _164 = { .len = 23, .capacity = 23, .data = CARP_MALLOC(sizeof(Pair__ColorId_String) * 23) };
        ColorId _5 = Color_Id_Black();
        static String _7 = "30";
        String *_7_ref = &_7;
        String _8 = String_copy(_7_ref);
        Pair__ColorId_String _9 = Pair_init__ColorId_String(_5, _8);
        ((Pair__ColorId_String*)_164.data)[0] = _9;
        ColorId _12 = Color_Id_Red();
        static String _14 = "31";
        String *_14_ref = &_14;
        String _15 = String_copy(_14_ref);
        Pair__ColorId_String _16 = Pair_init__ColorId_String(_12, _15);
        ((Pair__ColorId_String*)_164.data)[1] = _16;
        ColorId _19 = Color_Id_Green();
        static String _21 = "32";
        String *_21_ref = &_21;
        String _22 = String_copy(_21_ref);
        Pair__ColorId_String _23 = Pair_init__ColorId_String(_19, _22);
        ((Pair__ColorId_String*)_164.data)[2] = _23;
        ColorId _26 = Color_Id_Yellow();
        static String _28 = "33";
        String *_28_ref = &_28;
        String _29 = String_copy(_28_ref);
        Pair__ColorId_String _30 = Pair_init__ColorId_String(_26, _29);
        ((Pair__ColorId_String*)_164.data)[3] = _30;
        ColorId _33 = Color_Id_Blue();
        static String _35 = "34";
        String *_35_ref = &_35;
        String _36 = String_copy(_35_ref);
        Pair__ColorId_String _37 = Pair_init__ColorId_String(_33, _36);
        ((Pair__ColorId_String*)_164.data)[4] = _37;
        ColorId _40 = Color_Id_Magenta();
        static String _42 = "35";
        String *_42_ref = &_42;
        String _43 = String_copy(_42_ref);
        Pair__ColorId_String _44 = Pair_init__ColorId_String(_40, _43);
        ((Pair__ColorId_String*)_164.data)[5] = _44;
        ColorId _47 = Color_Id_Cyan();
        static String _49 = "36";
        String *_49_ref = &_49;
        String _50 = String_copy(_49_ref);
        Pair__ColorId_String _51 = Pair_init__ColorId_String(_47, _50);
        ((Pair__ColorId_String*)_164.data)[6] = _51;
        ColorId _54 = Color_Id_White();
        static String _56 = "37";
        String *_56_ref = &_56;
        String _57 = String_copy(_56_ref);
        Pair__ColorId_String _58 = Pair_init__ColorId_String(_54, _57);
        ((Pair__ColorId_String*)_164.data)[7] = _58;
        ColorId _61 = Color_Id_Reset();
        static String _63 = "0";
        String *_63_ref = &_63;
        String _64 = String_copy(_63_ref);
        Pair__ColorId_String _65 = Pair_init__ColorId_String(_61, _64);
        ((Pair__ColorId_String*)_164.data)[8] = _65;
        ColorId _68 = Color_Id_None();
        static String _70 = "0";
        String *_70_ref = &_70;
        String _71 = String_copy(_70_ref);
        Pair__ColorId_String _72 = Pair_init__ColorId_String(_68, _71);
        ((Pair__ColorId_String*)_164.data)[9] = _72;
        ColorId _75 = Color_Id_Bold();
        static String _77 = "1";
        String *_77_ref = &_77;
        String _78 = String_copy(_77_ref);
        Pair__ColorId_String _79 = Pair_init__ColorId_String(_75, _78);
        ((Pair__ColorId_String*)_164.data)[10] = _79;
        ColorId _82 = Color_Id_Italic();
        static String _84 = "3";
        String *_84_ref = &_84;
        String _85 = String_copy(_84_ref);
        Pair__ColorId_String _86 = Pair_init__ColorId_String(_82, _85);
        ((Pair__ColorId_String*)_164.data)[11] = _86;
        ColorId _89 = Color_Id_Underline();
        static String _91 = "4";
        String *_91_ref = &_91;
        String _92 = String_copy(_91_ref);
        Pair__ColorId_String _93 = Pair_init__ColorId_String(_89, _92);
        ((Pair__ColorId_String*)_164.data)[12] = _93;
        ColorId _96 = Color_Id_BlinkSlow();
        static String _98 = "5";
        String *_98_ref = &_98;
        String _99 = String_copy(_98_ref);
        Pair__ColorId_String _100 = Pair_init__ColorId_String(_96, _99);
        ((Pair__ColorId_String*)_164.data)[13] = _100;
        ColorId _103 = Color_Id_BlinkRapid();
        static String _105 = "6";
        String *_105_ref = &_105;
        String _106 = String_copy(_105_ref);
        Pair__ColorId_String _107 = Pair_init__ColorId_String(_103, _106);
        ((Pair__ColorId_String*)_164.data)[14] = _107;
        ColorId _110 = Color_Id_BgBlack();
        static String _112 = "40";
        String *_112_ref = &_112;
        String _113 = String_copy(_112_ref);
        Pair__ColorId_String _114 = Pair_init__ColorId_String(_110, _113);
        ((Pair__ColorId_String*)_164.data)[15] = _114;
        ColorId _117 = Color_Id_BgRed();
        static String _119 = "41";
        String *_119_ref = &_119;
        String _120 = String_copy(_119_ref);
        Pair__ColorId_String _121 = Pair_init__ColorId_String(_117, _120);
        ((Pair__ColorId_String*)_164.data)[16] = _121;
        ColorId _124 = Color_Id_BgGreen();
        static String _126 = "42";
        String *_126_ref = &_126;
        String _127 = String_copy(_126_ref);
        Pair__ColorId_String _128 = Pair_init__ColorId_String(_124, _127);
        ((Pair__ColorId_String*)_164.data)[17] = _128;
        ColorId _131 = Color_Id_BgYellow();
        static String _133 = "43";
        String *_133_ref = &_133;
        String _134 = String_copy(_133_ref);
        Pair__ColorId_String _135 = Pair_init__ColorId_String(_131, _134);
        ((Pair__ColorId_String*)_164.data)[18] = _135;
        ColorId _138 = Color_Id_BgBlue();
        static String _140 = "44";
        String *_140_ref = &_140;
        String _141 = String_copy(_140_ref);
        Pair__ColorId_String _142 = Pair_init__ColorId_String(_138, _141);
        ((Pair__ColorId_String*)_164.data)[19] = _142;
        ColorId _145 = Color_Id_BgMagenta();
        static String _147 = "45";
        String *_147_ref = &_147;
        String _148 = String_copy(_147_ref);
        Pair__ColorId_String _149 = Pair_init__ColorId_String(_145, _148);
        ((Pair__ColorId_String*)_164.data)[20] = _149;
        ColorId _152 = Color_Id_BgCyan();
        static String _154 = "46";
        String *_154_ref = &_154;
        String _155 = String_copy(_154_ref);
        Pair__ColorId_String _156 = Pair_init__ColorId_String(_152, _155);
        ((Pair__ColorId_String*)_164.data)[21] = _156;
        ColorId _159 = Color_Id_BgWhite();
        static String _161 = "47";
        String *_161_ref = &_161;
        String _162 = String_copy(_161_ref);
        Pair__ColorId_String _163 = Pair_init__ColorId_String(_159, _162);
        ((Pair__ColorId_String*)_164.data)[22] = _163;
        Map__ColorId_String _165 = Map_from_MINUS_array__ColorId_String(_164);
        Color_table = _165;
    }
}

//Definitions:
bool _DIV__EQ___int(int a, int b) {
    bool _9 = Int__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b) {
    bool _9 = Byte__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _LT__EQ___Char(Char a, Char b) {
    bool _19;
    bool _9 = Char__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Char__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _LT__EQ___double(double a, double b) {
    bool _19;
    bool _9 = Double__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Double__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _LT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___double(double a, double b) {
    bool _19;
    bool _9 = Double__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Double__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

AABB AABB_copy(AABB* pRef) {
    AABB copy = *pRef;
    copy.min = Vector3_copy__double(&(pRef->min));
    copy.max = Vector3_copy__double(&(pRef->max));
    return copy;
}

void AABB_delete(AABB p) {
    Vector3_delete__double(p.min);
    Vector3_delete__double(p.max);
}

AABB AABB_init(Vector3__double min, Vector3__double max) {
    AABB instance;
    instance.min = min;
    instance.max = max;
    return instance;
}

Vector3__double* AABB_max(AABB* p) { return (&(p->max)); }

Vector3__double* AABB_min(AABB* p) { return (&(p->min)); }

String AABB_prn(AABB *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "AABB");
  temp = Vector3_prn__double(&p->min); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->max); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "AABB");
  temp = Vector3_prn__double(&p->min);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->max);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

AABB AABB_set_MINUS_max(AABB p, Vector3__double newValue) {
    Vector3_delete__double(p.max);
    p.max = newValue;
    return p;
}


void AABB_set_MINUS_max_BANG_(AABB* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->max);
    pRef->max = newValue;
}


AABB AABB_set_MINUS_min(AABB p, Vector3__double newValue) {
    Vector3_delete__double(p.min);
    p.min = newValue;
    return p;
}


void AABB_set_MINUS_min_BANG_(AABB* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->min);
    pRef->min = newValue;
}


String AABB_str(AABB *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "AABB");
  temp = Vector3_prn__double(&p->min); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->max); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "AABB");
  temp = Vector3_prn__double(&p->min);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->max);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

AABB AABB_update_MINUS_max(AABB p, Lambda *updater) {
    p.max = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.max) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.max);
    return p;
}


AABB AABB_update_MINUS_min(AABB p, Lambda *updater) {
    p.min = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.min) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.min);
    return p;
}


Array Array_allocate__Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Array__uint8_t));
    return a;
}

Array Array_allocate__Bucket__ColorId_String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Bucket__ColorId_String));
    return a;
}

Array Array_allocate__Char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Char));
    return a;
}

Array Array_allocate__Result__Uint16_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint16_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint32_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint32_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint64_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint64_Array__uint8_t));
    return a;
}

Array Array_allocate__String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(String));
    return a;
}

Array Array_allocate__Uint16 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint16));
    return a;
}

Array Array_allocate__Uint32 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint32));
    return a;
}

Array Array_allocate__Uint64 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint64));
    return a;
}

Array Array_allocate__float (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(float));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

Array Array_allocate__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(uint8_t));
    return a;
}

void Array_aset_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Char' */

    ((Char*)a.data)[n] = newValue;
}

void Array_aset_BANG___float (Array *aRef, int n, float newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Float' */

    ((float*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String (Array *aRef, int n, Bucket__ColorId_String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Bucket__ColorId_String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Char*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String (Array *aRef, int n, Pair__ColorId_String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Pair__ColorId_String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint16_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint32_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint64_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint16*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint32*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint64*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___float (Array *aRef, int n, float newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((float*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((uint8_t*)a.data)[n] = newValue;
}

void Array_aupdate_BANG___Pair__ColorId_String(Array__Pair__ColorId_String* a, int i, Lambda* f) {
    Pair__ColorId_String _15 = Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(a, i);
    Pair__ColorId_String _16 = (*f).env ? ((Pair__ColorId_String(*)(LambdaEnv, Pair__ColorId_String))(*f).callback)((*f).env, _15) : ((Pair__ColorId_String(*)(Pair__ColorId_String))(*f).callback)(_15);
    Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String(a, i, _16);
}

bool Array_contains_QMARK___Uint64(Array__Uint64* arr, Uint64* el) {
    bool _54;
    /* let */ {
        bool result = false;
        /* let */ {
            int i = 0;
            int _19 = Array_length__Uint64(arr);
            bool _1000008 = Int__LT_(i, _19);
            bool _1000006 = _1000008;
            while (_1000006) {
                Uint64* _28 = Array_unsafe_MINUS_nth__Uint64(arr, i);
                bool _29 = Uint64Extra__EQ_(el, _28);
                if (_29) {
                    result = true;  // Bool = Bool
                    break;
                    // Unreachable:
                } else {
                    /* () */
                }
                int _1000018 = Int__PLUS_(i, 1);
                i = _1000018;  // Int = Int
                int _19 = Array_length__Uint64(arr);
                bool _1000008 = Int__LT_(i, _19);
                _1000006 = _1000008;
            }
        }
        bool _53 = result;
        _54 = _53;
    }
    return _54;
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _9 = Array_copy__Result__Uint16_Array__uint8_t(a);
    Array__Result__Uint16_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _9 = Array_copy__Result__Uint32_Array__uint8_t(a);
    Array__Result__Uint32_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _9 = Array_copy__Result__Uint64_Array__uint8_t(a);
    Array__Result__Uint64_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint16_Array__uint8_t _11 = Array_allocate__Result__Uint16_Array__uint8_t(_10);
        Array__Result__Uint16_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint16_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint16_Array__uint8_t _38 = (*f).env ? ((Result__Uint16_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint16_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint16_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint32_Array__uint8_t _11 = Array_allocate__Result__Uint32_Array__uint8_t(_10);
        Array__Result__Uint32_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint32_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint32_Array__uint8_t _38 = (*f).env ? ((Result__Uint32_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint32_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint32_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint64_Array__uint8_t _11 = Array_allocate__Result__Uint64_Array__uint8_t(_10);
        Array__Result__Uint64_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint64_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint64_Array__uint8_t _38 = (*f).env ? ((Result__Uint64_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint64_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint64_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint16* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint32* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint64* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__int* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((int(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((String(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__int* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((int(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint16* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint32* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint64* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__uint8_t(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _29 = &na; // ref
                uint8_t* _37 = Array_unsafe_MINUS_nth__uint8_t(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, uint8_t*))(*f).callback)((*f).env, _37) : ((String(*)(uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array Array_copy__Contact (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Contact) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Contact*)(copy.data))[i] = Contact_copy(&(((Contact*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__LocalCrater (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(LocalCrater) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((LocalCrater*)(copy.data))[i] = LocalCrater_copy(&(((LocalCrater*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint16_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint16_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint16_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint16_Array__uint8_t(&(((Result__Uint16_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint32_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint32_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint32_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint32_Array__uint8_t(&(((Result__Uint32_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint64_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint64_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint64_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint64_Array__uint8_t(&(((Result__Uint64_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Uint16 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint16) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint16) * a->len);
    return copy;
}

Array Array_copy__Uint32 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint32) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint32) * a->len);
    return copy;
}

Array Array_copy__Uint64 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint64) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint64) * a->len);
    return copy;
}

Array Array_copy__float (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(float) * a->capacity);
    memcpy(copy.data, a->data, sizeof(float) * a->len);
    return copy;
}

Array Array_copy__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(uint8_t) * a->capacity);
    memcpy(copy.data, a->data, sizeof(uint8_t) * a->len);
    return copy;
}

void Array_delete__Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Array_delete__uint8_t(((Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Bucket__ColorId_String (Array a){
    for(int i = 0; i < a.len; i++) {
        Bucket_delete__ColorId_String(((Bucket__ColorId_String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Collidable (Array a){
    for(int i = 0; i < a.len; i++) {
        Collidable_delete(((Collidable*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__CollisionResult (Array a){
    for(int i = 0; i < a.len; i++) {
        CollisionResult_delete(((CollisionResult*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Contact (Array a){
    for(int i = 0; i < a.len; i++) {
        Contact_delete(((Contact*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__LocalCrater (Array a){
    for(int i = 0; i < a.len; i++) {
        LocalCrater_delete(((LocalCrater*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Pair__ColorId_String (Array a){
    for(int i = 0; i < a.len; i++) {
        Pair_delete__ColorId_String(((Pair__ColorId_String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__PatternMatchResult (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Pattern.MatchResult' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint16_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint32_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint64_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint16 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint16' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint32 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint32' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint64 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint64' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Vector3__double (Array a){
    for(int i = 0; i < a.len; i++) {
        Vector3_delete__double(((Vector3__double*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__float (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Float' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

void Array_delete__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Byte' */
    }
    CARP_FREE(a.data);
}

Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint16_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint16_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint16_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint16_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint16_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint32_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint32_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint32_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint32_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint32_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint64_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint64_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint64_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint64_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint64_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_String_MUL__bool)(*predicate).callback)((*predicate).env, &(((String*)a.data)[i])) : ((Fn__String_MUL__bool)(*predicate).callback)(&(((String*)a.data)[i]))) {
            (((String*)a.data)[insertIndex++]) = ((String*)a.data)[i];
        } else {
            String_delete(((String*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a) { 
    for(int i = 0; i < a.len; ++i) {
        ((uint8_t*)a.data)[i] = (*f).env ? ((Fn__LambdaEnv_uint8_t_uint8_t)(*f).callback)((*f).env, (((uint8_t*)a.data)[i])) : ((Fn__uint8_t_uint8_t)(*f).callback)((((uint8_t*)a.data)[i]));
    }
    return a;
}

int Array_length__Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Char (Array *a) { return (*a).len; }
int Array_length__Collidable (Array *a) { return (*a).len; }
int Array_length__Contact (Array *a) { return (*a).len; }
int Array_length__LocalCrater (Array *a) { return (*a).len; }
int Array_length__Pair__ColorId_String (Array *a) { return (*a).len; }
int Array_length__PatternMatchResult (Array *a) { return (*a).len; }
int Array_length__Result__Uint16_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint32_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint64_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__String (Array *a) { return (*a).len; }
int Array_length__Uint16 (Array *a) { return (*a).len; }
int Array_length__Uint32 (Array *a) { return (*a).len; }
int Array_length__Uint64 (Array *a) { return (*a).len; }
int Array_length__int (Array *a) { return (*a).len; }
int Array_length__uint8_t (Array *a) { return (*a).len; }
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index) {
    Maybe__uint8_t _37;
    bool _22;
    bool _10 = _GT__EQ___int(index, 0);
    if (_10) {
        int _16 = Array_length__uint8_t(xs);
        bool _17 = Int__LT_(index, _16);
        bool _18 = _17;
        _22 = _18;
    } else {
        bool _21 = false;
        _22 = _21;
    }
    if (_22) {
        uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, index);
        uint8_t _30 = Byte_copy(_29);
        Maybe__uint8_t _31 = Maybe_Just__uint8_t(_30);
        Maybe__uint8_t _32 = _31;
        _37 = _32;
    } else {
        Maybe__uint8_t _35 = Maybe_Nothing__uint8_t();
        Maybe__uint8_t _36 = _35;
        _37 = _36;
    }
    return _37;
}

Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n) {
    Array__Array__uint8_t _67;
    /* let */ {
        int x = 0;
        int y = 0;
        Array _11 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Array__uint8_t) * 0) };
        Array__Array__uint8_t a = _11;
        int _19 = Array_length__uint8_t(arr);
        bool _20 = Int__LT_(x, _19);
        bool _64 = _20;
        while (_64) {
            int _27 = Int__PLUS_(x, n);
            y = _27;  // Int = Int
            int _34 = Array_length__uint8_t(arr);
            bool _35 = Int__GT_(y, _34);
            if (_35) {
                int _41 = Array_length__uint8_t(arr);
                y = _41;  // Int = Int
            } else {
                /* () */
            }
            Array__uint8_t _56 = Array_slice__uint8_t(arr, x, y);
            Array__Array__uint8_t _57 = Array_push_MINUS_back__Array__uint8_t(a, _56);
            a = _57;  // (Array (Array Byte)) = (Array (Array Byte))
            x = y;  // Int = Int
            int _19 = Array_length__uint8_t(arr);
            bool _20 = Int__LT_(x, _19);
            _64 = _20;
        }
        Array__Array__uint8_t _66 = a;
        _67 = _66;
    }
    return _67;
}

Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index) {
    Array__Char _9 = Array_slice__Char(xs, 0, end_MINUS_index);
    return _9;
}

String Array_prn__Contact(Array__Contact* x) {
    String _6 = Array_str__Contact(x);
    return _6;
}

String Array_prn__LocalCrater(Array__LocalCrater* x) {
    String _6 = Array_str__LocalCrater(x);
    return _6;
}

String Array_prn__float(Array__float* x) {
    String _6 = Array_str__float(x);
    return _6;
}

void Array_push_MINUS_back_BANG___CollisionResult(Array *aRef, CollisionResult value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(CollisionResult) * aRef->capacity);
    }
    ((CollisionResult*)aRef->data)[aRef->len - 1] = value;
}

void Array_push_MINUS_back_BANG___Contact(Array *aRef, Contact value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(Contact) * aRef->capacity);
    }
    ((Contact*)aRef->data)[aRef->len - 1] = value;
}

void Array_push_MINUS_back_BANG___LocalCrater(Array *aRef, LocalCrater value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(LocalCrater) * aRef->capacity);
    }
    ((LocalCrater*)aRef->data)[aRef->len - 1] = value;
}

void Array_push_MINUS_back_BANG___Pair__ColorId_String(Array *aRef, Pair__ColorId_String value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(Pair__ColorId_String) * aRef->capacity);
    }
    ((Pair__ColorId_String*)aRef->data)[aRef->len - 1] = value;
}

void Array_push_MINUS_back_BANG___Uint64(Array *aRef, Uint64 value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(Uint64) * aRef->capacity);
    }
    ((Uint64*)aRef->data)[aRef->len - 1] = value;
}

void Array_push_MINUS_back_BANG___Vector3__double(Array *aRef, Vector3__double value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(Vector3__double) * aRef->capacity);
    }
    ((Vector3__double*)aRef->data)[aRef->len - 1] = value;
}

Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Array__uint8_t) * a.capacity);
    }
    ((Array__uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__Char(Array a, Char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Char) * a.capacity);
    }
    ((Char*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(PatternMatchResult) * a.capacity);
    }
    ((PatternMatchResult*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__String(Array a, String value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a.capacity);
    }
    ((String*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(uint8_t) * a.capacity);
    }
    ((uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

int Array_reduce__int_int(Lambda* f, int x, Array__int* xs) {
    int _47;
    /* let */ {
        int total = x;
        /* let */ {
            int i = 0;
            int _20 = Array_length__int(xs);
            bool _1000008 = Int__LT_(i, _20);
            bool _1000006 = _1000008;
            while (_1000006) {
                int* _32 = Array_unsafe_MINUS_nth__int(xs, i);
                int _33 = (*f).env ? ((int(*)(LambdaEnv, int, int*))(*f).callback)((*f).env, total, _32) : ((int(*)(int, int*))(*f).callback)(total, _32);
                total = _33;  // Int = Int
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                int _20 = Array_length__int(xs);
                bool _1000008 = Int__LT_(i, _20);
                _1000006 = _1000008;
            }
        }
        int _46 = total;
        _47 = _46;
    }
    return _47;
}

Array__Bucket__ColorId_String Array_repeat__Bucket__ColorId_String(int n, Lambda* f) {
    Array__Bucket__ColorId_String _44;
    /* let */ {
        Array__Bucket__ColorId_String _9 = Array_allocate__Bucket__ColorId_String(n);
        Array__Bucket__ColorId_String a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Bucket__ColorId_String* _25 = &a; // ref
                Bucket__ColorId_String _30 = (*f).env ? ((Bucket__ColorId_String(*)(LambdaEnv))(*f).callback)((*f).env) : ((Bucket__ColorId_String(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String(_25, i, _30);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Bucket__ColorId_String _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_repeat__Char(int n, Lambda* f) {
    Array__Char _44;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Char* _25 = &a; // ref
                Char _30 = (*f).env ? ((Char(*)(LambdaEnv))(*f).callback)((*f).env) : ((Char(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _30);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Char _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_replicate__Char(int n, Char* e) {
    Array__Char _43;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Char* _25 = &a; // ref
                Char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _29);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__float Array_replicate__float(int n, float* e) {
    Array__float _43;
    /* let */ {
        Array__float _9 = Array_allocate__float(n);
        Array__float a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__float* _25 = &a; // ref
                float _29 = Float_copy(e);
                Array_aset_MINUS_uninitialized_BANG___float(_25, i, _29);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__float _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__Char Array_reverse__Char(Array__Char a) {
    Array__Char _72;
    /* let */ {
        int i = 0;
        Array__Char* _12 = &a; // ref
        int _13 = Array_length__Char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__Char* _28 = &a; // ref
                Char* _30 = Array_unsafe_MINUS_nth__Char(_28, i);
                Char _31 = Char_copy(_30);
                Char tmp = _31;
                Array__Char* _37 = &a; // ref
                Array__Char* _43 = &a; // ref
                Char* _45 = Array_unsafe_MINUS_nth__Char(_43, j);
                Char _46 = Char_copy(_45);
                Array_aset_BANG___Char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__Char* _57 = &a; // ref
                Array_aset_BANG___Char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__Char _71 = a;
        _72 = _71;
    }
    return _72;
}

Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__Char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Char) * 0) };
        Array__Char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _1000008 = Int__LT_(i, end_MINUS_index);
            bool _1000006 = _1000008;
            while (_1000006) {
                Char* _29 = Array_unsafe_MINUS_nth__Char(xs, i);
                Char _30 = Char_copy(_29);
                Array__Char _31 = Array_push_MINUS_back__Char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, end_MINUS_index);
                _1000006 = _1000008;
            }
        }
        Array__Char _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__uint8_t _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
        Array__uint8_t result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _1000008 = Int__LT_(i, end_MINUS_index);
            bool _1000006 = _1000008;
            while (_1000006) {
                uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, i);
                uint8_t _30 = Byte_copy(_29);
                Array__uint8_t _31 = Array_push_MINUS_back__uint8_t(result, _30);
                result = _31;  // (Array Byte) = (Array Byte)
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, end_MINUS_index);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _44 = result;
        _45 = _44;
    }
    return _45;
}

String Array_str__Contact (Array* a) {
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize;
  int size = 3; // opening and closing brackets and terminator
  for(int i = 0; i < a->len; i++) {
    temp = Contact_prn(&((Contact*)a->data)[i]);
    size += snprintf(NULL, 0, "%s ", temp);
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(buffer, size, "[");
  bufferPtr += 1;

  for(int i = 0; i < a->len; i++) {
    temp = Contact_prn(&((Contact*)a->data)[i]);
    tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
    bufferPtr += tempsize;
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  if(a->len > 0) { bufferPtr -= 1; }
  snprintf(bufferPtr, size - (bufferPtr - buffer), "]");
  return buffer;
}

String Array_str__LocalCrater (Array* a) {
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize;
  int size = 3; // opening and closing brackets and terminator
  for(int i = 0; i < a->len; i++) {
    temp = LocalCrater_prn(&((LocalCrater*)a->data)[i]);
    size += snprintf(NULL, 0, "%s ", temp);
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(buffer, size, "[");
  bufferPtr += 1;

  for(int i = 0; i < a->len; i++) {
    temp = LocalCrater_prn(&((LocalCrater*)a->data)[i]);
    tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
    bufferPtr += tempsize;
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  if(a->len > 0) { bufferPtr -= 1; }
  snprintf(bufferPtr, size - (bufferPtr - buffer), "]");
  return buffer;
}

String Array_str__float (Array* a) {
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize;
  int size = 3; // opening and closing brackets and terminator
  for(int i = 0; i < a->len; i++) {
    temp = Float_prn(((float*)a->data)[i]);
    size += snprintf(NULL, 0, "%s ", temp);
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(buffer, size, "[");
  bufferPtr += 1;

  for(int i = 0; i < a->len; i++) {
    temp = Float_prn(((float*)a->data)[i]);
    tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
    bufferPtr += tempsize;
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  if(a->len > 0) { bufferPtr -= 1; }
  snprintf(bufferPtr, size - (bufferPtr - buffer), "]");
  return buffer;
}

Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index) {
    int _10 = Array_length__Char(xs);
    Array__Char _11 = Array_slice__Char(xs, start_MINUS_index, _10);
    return _11;
}

Pair__ColorId_String Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(Array *a, int i) { return ((Pair__ColorId_String*)a->data)[i]; }
Array__Uint64* Array_unsafe_MINUS_nth__Array__Uint64 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Array__Uint64*)a.data)[n]);
}

Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Array__uint8_t*)a.data)[n]);
}

Bucket__ColorId_String* Array_unsafe_MINUS_nth__Bucket__ColorId_String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Bucket__ColorId_String*)a.data)[n]);
}

Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Char*)a.data)[n]);
}

Collidable* Array_unsafe_MINUS_nth__Collidable (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Collidable*)a.data)[n]);
}

Contact* Array_unsafe_MINUS_nth__Contact (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Contact*)a.data)[n]);
}

LocalCrater* Array_unsafe_MINUS_nth__LocalCrater (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((LocalCrater*)a.data)[n]);
}

Pair__ColorId_String* Array_unsafe_MINUS_nth__Pair__ColorId_String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Pair__ColorId_String*)a.data)[n]);
}

PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((PatternMatchResult*)a.data)[n]);
}

Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint16_Array__uint8_t*)a.data)[n]);
}

Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint32_Array__uint8_t*)a.data)[n]);
}

Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint64_Array__uint8_t*)a.data)[n]);
}

String* Array_unsafe_MINUS_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((String*)a.data)[n]);
}

Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint16*)a.data)[n]);
}

Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint32*)a.data)[n]);
}

Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint64*)a.data)[n]);
}

float* Array_unsafe_MINUS_nth__float (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((float*)a.data)[n]);
}

int* Array_unsafe_MINUS_nth__int (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((int*)a.data)[n]);
}

uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((uint8_t*)a.data)[n]);
}

Array__uint8_t Array_zero__uint8_t() {
    Array _3 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
    return _3;
}

BaseShape BaseShape_Ball(double member0) {
  BaseShape instance;
    instance.u.Ball.member0 = member0;
    instance._tag = BaseShape_Ball_tag;
    return instance;
}

BaseShape BaseShape_Box(Vector3__double member0) {
  BaseShape instance;
    instance.u.Box.member0 = member0;
    instance._tag = BaseShape_Box_tag;
    return instance;
}

BaseShape BaseShape_Cylinder(double member0, double member1) {
  BaseShape instance;
    instance.u.Cylinder.member0 = member0;
    instance.u.Cylinder.member1 = member1;
    instance._tag = BaseShape_Cylinder_tag;
    return instance;
}

BaseShape BaseShape_Surface(Plane member0) {
  BaseShape instance;
    instance.u.Surface.member0 = member0;
    instance._tag = BaseShape_Surface_tag;
    return instance;
}

BaseShape BaseShape_copy(BaseShape* pRef) {
    BaseShape copy = *pRef;
    if(pRef->_tag == BaseShape_Ball_tag) {
    /* Ignore non-managed member 'u.Ball.member0' : Double */
    }

    else if(pRef->_tag == BaseShape_Surface_tag) {
    copy.u.Surface.member0 = Plane_copy(&(pRef->u.Surface.member0));
    }

    else if(pRef->_tag == BaseShape_Box_tag) {
    copy.u.Box.member0 = Vector3_copy__double(&(pRef->u.Box.member0));
    }

    else if(pRef->_tag == BaseShape_Cylinder_tag) {
    /* Ignore non-managed member 'u.Cylinder.member0' : Double */
    /* Ignore non-managed member 'u.Cylinder.member1' : Double */
    }

    return copy;
}

void BaseShape_delete(BaseShape p) {
  if(p._tag == BaseShape_Ball_tag) {
    /* Ignore non-managed member 'u.Ball.member0' : Double */
  }
  else if(p._tag == BaseShape_Surface_tag) {
    Plane_delete(p.u.Surface.member0);
  }
  else if(p._tag == BaseShape_Box_tag) {
    Vector3_delete__double(p.u.Box.member0);
  }
  else if(p._tag == BaseShape_Cylinder_tag) {
    /* Ignore non-managed member 'u.Cylinder.member0' : Double */
    /* Ignore non-managed member 'u.Cylinder.member1' : Double */
  }

}

int BaseShape_get_MINUS_tag(BaseShape *p) { return p->_tag; }
String BaseShape_prn(BaseShape *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == BaseShape_Ball_tag) {
    size += snprintf(NULL, 0, "(%s ", "Ball");
  temp = Double_prn(p->u.Ball.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == BaseShape_Surface_tag) {
    size += snprintf(NULL, 0, "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == BaseShape_Box_tag) {
    size += snprintf(NULL, 0, "(%s ", "Box");
  temp = Vector3_prn__double(&p->u.Box.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == BaseShape_Cylinder_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cylinder");
  temp = Double_prn(p->u.Cylinder.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->u.Cylinder.member1); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == BaseShape_Ball_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Ball");
  temp = Double_prn(p->u.Ball.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BaseShape_Surface_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BaseShape_Box_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Box");
  temp = Vector3_prn__double(&p->u.Box.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BaseShape_Cylinder_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Cylinder");
  temp = Double_prn(p->u.Cylinder.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->u.Cylinder.member1);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String BaseShape_str(BaseShape *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == BaseShape_Ball_tag) {
    size += snprintf(NULL, 0, "(%s ", "Ball");
  temp = Double_prn(p->u.Ball.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == BaseShape_Surface_tag) {
    size += snprintf(NULL, 0, "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == BaseShape_Box_tag) {
    size += snprintf(NULL, 0, "(%s ", "Box");
  temp = Vector3_prn__double(&p->u.Box.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == BaseShape_Cylinder_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cylinder");
  temp = Double_prn(p->u.Cylinder.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->u.Cylinder.member1); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == BaseShape_Ball_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Ball");
  temp = Double_prn(p->u.Ball.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BaseShape_Surface_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BaseShape_Box_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Box");
  temp = Vector3_prn__double(&p->u.Box.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BaseShape_Cylinder_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Cylinder");
  temp = Double_prn(p->u.Cylinder.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->u.Cylinder.member1);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint16 _14 = (*_env->f).env ? ((Maybe__Uint16(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint16(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint16_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint16_Nothing_tag) {
        Maybe__Uint16 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint16_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint16(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint16_Just_tag) {
        Maybe__Uint16 _14_temp = _14;
        Uint16 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint16_Array__uint8_t _27 = Result_Success__Uint16_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint32 _14 = (*_env->f).env ? ((Maybe__Uint32(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint32(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint32_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint32_Nothing_tag) {
        Maybe__Uint32 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint32_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint32(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint32_Just_tag) {
        Maybe__Uint32 _14_temp = _14;
        Uint32 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint32_Array__uint8_t _27 = Result_Success__Uint32_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint64 _14 = (*_env->f).env ? ((Maybe__Uint64(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint64(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint64_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint64_Nothing_tag) {
        Maybe__Uint64 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint64_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint64(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint64_Just_tag) {
        Maybe__Uint64 _14_temp = _14;
        Uint64 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint64_Array__uint8_t _27 = Result_Success__Uint64_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b) {
    uint8_t _12 = Byte_copy(b);
    String _13 = Binary_to_MINUS_hex_MINUS_str(_12);
    return _13;
}

Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i) {
    Uint16 _14 = Uint16_copy(i);
    Array__uint8_t _15 = Binary_int16_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint32 _14 = Uint32_from_MINUS_long(lng);
    Uint32 _15 = Uint32_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i) {
    Uint32 _14 = Uint32_copy(i);
    Array__uint8_t _15 = Binary_int32_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint64 _14 = Uint64_from_MINUS_long(lng);
    Uint64 _15 = Uint64_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i) {
    Uint64 _14 = Uint64_copy(i);
    Array__uint8_t _15 = Binary_int64_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint16 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int16(_env->order, b);
    return _18;
}

Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint32 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int32(_env->order, b);
    return _18;
}

Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint64 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int64(_env->order, b);
    return _18;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy
    };
    return _29;
}

String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs) {
    String _27;
    /* let */ {
        // This lambda captures 0 variables: 
        Lambda _14 = {
          .callback = (void*)Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env,
          .env = NULL,
          .delete = (void*)NULL,
          .copy = (void*)NULL
        };
        Lambda f = _14;
        static String _17 = " ";
        String *_17_ref = &_17;
        Lambda* _22 = &f; // ref
        Array__String _24 = Array_copy_MINUS_map__uint8_t_String(_22, bs);
        Array__String* _25 = &_24; // ref
        String _26 = String_join(_17_ref, _25);
        _27 = _26;
        Array_delete__String(_24);
        Function_delete__uint8_t_MUL__String(f);
    }
    return _27;
}

Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes) {
    Maybe__Uint16 _83;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bytes, 0);
        Maybe__Uint16 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint16 _1000006 = Maybe_Nothing__Uint16();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1009 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bytes, 1);
            Maybe__Uint16 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint16 _1000011 = Maybe_Nothing__Uint16();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1010 = _25_temp.u.Just.member0;
                // Case expr:
                Lambda _36 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _37 = &_36; // ref
                Uint16 _1000014 = (*_37).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_37).callback)((*_37).env, zip1009, zip1010) : ((Uint16(*)(uint8_t, uint8_t))(*_37).callback)(zip1009, zip1010);
                Maybe__Uint16 _1000013 = Maybe_Just__Uint16(_1000014);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 112);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 112);
        _83 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _51 = Array_nth__uint8_t(bytes, 1);
        Maybe__Uint16 _1000016;
        if(_51._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _51_temp = _51;
            // Case expr:
            Maybe__Uint16 _1000019 = Maybe_Nothing__Uint16();
            _1000016 = _1000019;
        }
        else if(_51._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _51_temp = _51;
            uint8_t zip1011 = _51_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _63 = Array_nth__uint8_t(bytes, 0);
            Maybe__Uint16 _1000021;
            if(_63._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _63_temp = _63;
                // Case expr:
                Maybe__Uint16 _1000024 = Maybe_Nothing__Uint16();
                _1000021 = _1000024;
            }
            else if(_63._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _63_temp = _63;
                uint8_t zip1012 = _63_temp.u.Just.member0;
                // Case expr:
                Lambda _74 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _75 = &_74; // ref
                Uint16 _1000027 = (*_75).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_75).callback)((*_75).env, zip1011, zip1012) : ((Uint16(*)(uint8_t, uint8_t))(*_75).callback)(zip1011, zip1012);
                Maybe__Uint16 _1000026 = Maybe_Just__Uint16(_1000027);
                _1000021 = _1000026;
            }
            else UNHANDLED("Binary.carp", 112);
            _1000016 = _1000021;
        }
        else UNHANDLED("Binary.carp", 112);
        _83 = _1000016;
    }
    else UNHANDLED("Binary.carp", 112);
    return _83;
}

Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint16_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int16 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(_15, order);
        Lambda f = _17;
        Pair__Array__Uint16_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint16_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(_24, _27);
            Array__Result__Uint16_Array__uint8_t results = _28;
            Array__Result__Uint16_Array__uint8_t* _34 = &results; // ref
            Array__Uint16 _35 = Binary_interpreted__Uint16_Array__uint8_t(_34);
            Array__Result__Uint16_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint16_uint8_t(_39);
            Pair__Array__Uint16_int _41 = Pair_init__Array__Uint16_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint16_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint16_int _46;
    /* let */ {
        Pair__Array__Uint16_int _10 = Binary_bytes_MINUS__GT_int16_MINUS_seq(order, bs);
        Pair__Array__Uint16_int r = _10;
        Result__Array__Uint16_int _45;
        Pair__Array__Uint16_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint16_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint16_int* _29 = &r; // ref
            Array__Uint16* _30 = Pair_a__Array__Uint16_int(_29);
            Array__Uint16 _31 = Array_copy__Uint16(_30);
            Result__Array__Uint16_int _32 = Result_Success__Array__Uint16_int(_31);
            Result__Array__Uint16_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint16_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint16_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint16_int _43 = Result_Error__int_Array__Uint16(_42);
            Result__Array__Uint16_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint16_int(r);
    }
    return _46;
}

Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint32 _139;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint32 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint32 _1000006 = Maybe_Nothing__Uint32();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1013 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint32 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint32 _1000011 = Maybe_Nothing__Uint32();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1014 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint32 _1000013;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint32 _1000016 = Maybe_Nothing__Uint32();
                    _1000013 = _1000016;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1015 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint32 _1000018;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint32 _1000021 = Maybe_Nothing__Uint32();
                        _1000018 = _1000021;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1016 = _49_temp.u.Just.member0;
                        // Case expr:
                        Lambda _60 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _61 = &_60; // ref
                        Uint32 _1000024 = (*_61).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)((*_61).env, zip1013, zip1014, zip1015, zip1016) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)(zip1013, zip1014, zip1015, zip1016);
                        Maybe__Uint32 _1000023 = Maybe_Just__Uint32(_1000024);
                        _1000018 = _1000023;
                    }
                    else UNHANDLED("Binary.carp", 186);
                    _1000013 = _1000018;
                }
                else UNHANDLED("Binary.carp", 186);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 186);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 186);
        _139 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _79 = Array_nth__uint8_t(bs, 3);
        Maybe__Uint32 _1000026;
        if(_79._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _79_temp = _79;
            // Case expr:
            Maybe__Uint32 _1000029 = Maybe_Nothing__Uint32();
            _1000026 = _1000029;
        }
        else if(_79._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _79_temp = _79;
            uint8_t zip1017 = _79_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _91 = Array_nth__uint8_t(bs, 2);
            Maybe__Uint32 _1000031;
            if(_91._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _91_temp = _91;
                // Case expr:
                Maybe__Uint32 _1000034 = Maybe_Nothing__Uint32();
                _1000031 = _1000034;
            }
            else if(_91._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _91_temp = _91;
                uint8_t zip1018 = _91_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _103 = Array_nth__uint8_t(bs, 1);
                Maybe__Uint32 _1000036;
                if(_103._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    // Case expr:
                    Maybe__Uint32 _1000039 = Maybe_Nothing__Uint32();
                    _1000036 = _1000039;
                }
                else if(_103._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    uint8_t zip1019 = _103_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _115 = Array_nth__uint8_t(bs, 0);
                    Maybe__Uint32 _1000041;
                    if(_115._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        // Case expr:
                        Maybe__Uint32 _1000044 = Maybe_Nothing__Uint32();
                        _1000041 = _1000044;
                    }
                    else if(_115._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        uint8_t zip1020 = _115_temp.u.Just.member0;
                        // Case expr:
                        Lambda _126 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _127 = &_126; // ref
                        Uint32 _1000047 = (*_127).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)((*_127).env, zip1017, zip1018, zip1019, zip1020) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)(zip1017, zip1018, zip1019, zip1020);
                        Maybe__Uint32 _1000046 = Maybe_Just__Uint32(_1000047);
                        _1000041 = _1000046;
                    }
                    else UNHANDLED("Binary.carp", 186);
                    _1000036 = _1000041;
                }
                else UNHANDLED("Binary.carp", 186);
                _1000031 = _1000036;
            }
            else UNHANDLED("Binary.carp", 186);
            _1000026 = _1000031;
        }
        else UNHANDLED("Binary.carp", 186);
        _139 = _1000026;
    }
    else UNHANDLED("Binary.carp", 186);
    return _139;
}

Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint32_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int32 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(_15, order);
        Lambda f = _17;
        Pair__Array__Uint32_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint32_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(_24, _27);
            Array__Result__Uint32_Array__uint8_t results = _28;
            Array__Result__Uint32_Array__uint8_t* _34 = &results; // ref
            Array__Uint32 _35 = Binary_interpreted__Uint32_Array__uint8_t(_34);
            Array__Result__Uint32_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint32_uint8_t(_39);
            Pair__Array__Uint32_int _41 = Pair_init__Array__Uint32_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint32_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint32_int _46;
    /* let */ {
        Pair__Array__Uint32_int _10 = Binary_bytes_MINUS__GT_int32_MINUS_seq(order, bs);
        Pair__Array__Uint32_int r = _10;
        Result__Array__Uint32_int _45;
        Pair__Array__Uint32_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint32_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint32_int* _29 = &r; // ref
            Array__Uint32* _30 = Pair_a__Array__Uint32_int(_29);
            Array__Uint32 _31 = Array_copy__Uint32(_30);
            Result__Array__Uint32_int _32 = Result_Success__Array__Uint32_int(_31);
            Result__Array__Uint32_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint32_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint32_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint32_int _43 = Result_Error__int_Array__Uint32(_42);
            Result__Array__Uint32_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint32_int(r);
    }
    return _46;
}

Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint64 _251;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint64 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint64 _1000006 = Maybe_Nothing__Uint64();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1021 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint64 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint64 _1000011 = Maybe_Nothing__Uint64();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1022 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint64 _1000013;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint64 _1000016 = Maybe_Nothing__Uint64();
                    _1000013 = _1000016;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1023 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint64 _1000018;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint64 _1000021 = Maybe_Nothing__Uint64();
                        _1000018 = _1000021;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1024 = _49_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _61 = Array_nth__uint8_t(bs, 4);
                        Maybe__Uint64 _1000023;
                        if(_61._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            // Case expr:
                            Maybe__Uint64 _1000026 = Maybe_Nothing__Uint64();
                            _1000023 = _1000026;
                        }
                        else if(_61._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            uint8_t zip1025 = _61_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _73 = Array_nth__uint8_t(bs, 5);
                            Maybe__Uint64 _1000028;
                            if(_73._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                // Case expr:
                                Maybe__Uint64 _1000031 = Maybe_Nothing__Uint64();
                                _1000028 = _1000031;
                            }
                            else if(_73._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                uint8_t zip1026 = _73_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _85 = Array_nth__uint8_t(bs, 6);
                                Maybe__Uint64 _1000033;
                                if(_85._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    // Case expr:
                                    Maybe__Uint64 _1000036 = Maybe_Nothing__Uint64();
                                    _1000033 = _1000036;
                                }
                                else if(_85._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    uint8_t zip1027 = _85_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _97 = Array_nth__uint8_t(bs, 7);
                                    Maybe__Uint64 _1000038;
                                    if(_97._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        // Case expr:
                                        Maybe__Uint64 _1000041 = Maybe_Nothing__Uint64();
                                        _1000038 = _1000041;
                                    }
                                    else if(_97._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        uint8_t zip1028 = _97_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _108 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _109 = &_108; // ref
                                        Uint64 _1000044 = (*_109).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)((*_109).env, zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)(zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028);
                                        Maybe__Uint64 _1000043 = Maybe_Just__Uint64(_1000044);
                                        _1000038 = _1000043;
                                    }
                                    else UNHANDLED("Binary.carp", 269);
                                    _1000033 = _1000038;
                                }
                                else UNHANDLED("Binary.carp", 269);
                                _1000028 = _1000033;
                            }
                            else UNHANDLED("Binary.carp", 269);
                            _1000023 = _1000028;
                        }
                        else UNHANDLED("Binary.carp", 269);
                        _1000018 = _1000023;
                    }
                    else UNHANDLED("Binary.carp", 269);
                    _1000013 = _1000018;
                }
                else UNHANDLED("Binary.carp", 269);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 269);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 269);
        _251 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _135 = Array_nth__uint8_t(bs, 7);
        Maybe__Uint64 _1000046;
        if(_135._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _135_temp = _135;
            // Case expr:
            Maybe__Uint64 _1000049 = Maybe_Nothing__Uint64();
            _1000046 = _1000049;
        }
        else if(_135._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _135_temp = _135;
            uint8_t zip1029 = _135_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _147 = Array_nth__uint8_t(bs, 6);
            Maybe__Uint64 _1000051;
            if(_147._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _147_temp = _147;
                // Case expr:
                Maybe__Uint64 _1000054 = Maybe_Nothing__Uint64();
                _1000051 = _1000054;
            }
            else if(_147._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _147_temp = _147;
                uint8_t zip1030 = _147_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _159 = Array_nth__uint8_t(bs, 5);
                Maybe__Uint64 _1000056;
                if(_159._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    // Case expr:
                    Maybe__Uint64 _1000059 = Maybe_Nothing__Uint64();
                    _1000056 = _1000059;
                }
                else if(_159._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    uint8_t zip1031 = _159_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _171 = Array_nth__uint8_t(bs, 4);
                    Maybe__Uint64 _1000061;
                    if(_171._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        // Case expr:
                        Maybe__Uint64 _1000064 = Maybe_Nothing__Uint64();
                        _1000061 = _1000064;
                    }
                    else if(_171._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        uint8_t zip1032 = _171_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _183 = Array_nth__uint8_t(bs, 3);
                        Maybe__Uint64 _1000066;
                        if(_183._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            // Case expr:
                            Maybe__Uint64 _1000069 = Maybe_Nothing__Uint64();
                            _1000066 = _1000069;
                        }
                        else if(_183._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            uint8_t zip1033 = _183_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _195 = Array_nth__uint8_t(bs, 2);
                            Maybe__Uint64 _1000071;
                            if(_195._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                // Case expr:
                                Maybe__Uint64 _1000074 = Maybe_Nothing__Uint64();
                                _1000071 = _1000074;
                            }
                            else if(_195._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                uint8_t zip1034 = _195_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _207 = Array_nth__uint8_t(bs, 1);
                                Maybe__Uint64 _1000076;
                                if(_207._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    // Case expr:
                                    Maybe__Uint64 _1000079 = Maybe_Nothing__Uint64();
                                    _1000076 = _1000079;
                                }
                                else if(_207._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    uint8_t zip1035 = _207_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _219 = Array_nth__uint8_t(bs, 0);
                                    Maybe__Uint64 _1000081;
                                    if(_219._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        // Case expr:
                                        Maybe__Uint64 _1000084 = Maybe_Nothing__Uint64();
                                        _1000081 = _1000084;
                                    }
                                    else if(_219._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        uint8_t zip1036 = _219_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _230 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _231 = &_230; // ref
                                        Uint64 _1000087 = (*_231).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)((*_231).env, zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)(zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036);
                                        Maybe__Uint64 _1000086 = Maybe_Just__Uint64(_1000087);
                                        _1000081 = _1000086;
                                    }
                                    else UNHANDLED("Binary.carp", 269);
                                    _1000076 = _1000081;
                                }
                                else UNHANDLED("Binary.carp", 269);
                                _1000071 = _1000076;
                            }
                            else UNHANDLED("Binary.carp", 269);
                            _1000066 = _1000071;
                        }
                        else UNHANDLED("Binary.carp", 269);
                        _1000061 = _1000066;
                    }
                    else UNHANDLED("Binary.carp", 269);
                    _1000056 = _1000061;
                }
                else UNHANDLED("Binary.carp", 269);
                _1000051 = _1000056;
            }
            else UNHANDLED("Binary.carp", 269);
            _1000046 = _1000051;
        }
        else UNHANDLED("Binary.carp", 269);
        _251 = _1000046;
    }
    else UNHANDLED("Binary.carp", 269);
    return _251;
}

Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint64_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int64 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(_15, order);
        Lambda f = _17;
        Pair__Array__Uint64_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint64_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(_24, _27);
            Array__Result__Uint64_Array__uint8_t results = _28;
            Array__Result__Uint64_Array__uint8_t* _34 = &results; // ref
            Array__Uint64 _35 = Binary_interpreted__Uint64_Array__uint8_t(_34);
            Array__Result__Uint64_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint64_uint8_t(_39);
            Pair__Array__Uint64_int _41 = Pair_init__Array__Uint64_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint64_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint64_int _46;
    /* let */ {
        Pair__Array__Uint64_int _10 = Binary_bytes_MINUS__GT_int64_MINUS_seq(order, bs);
        Pair__Array__Uint64_int r = _10;
        Result__Array__Uint64_int _45;
        Pair__Array__Uint64_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint64_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint64_int* _29 = &r; // ref
            Array__Uint64* _30 = Pair_a__Array__Uint64_int(_29);
            Array__Uint64 _31 = Array_copy__Uint64(_30);
            Result__Array__Uint64_int _32 = Result_Success__Array__Uint64_int(_31);
            Result__Array__Uint64_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint64_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint64_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint64_int _43 = Result_Error__int_Array__Uint64(_42);
            Result__Array__Uint64_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint64_int(r);
    }
    return _46;
}

Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i) {
    Array__uint8_t _41;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _11 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _12 = &_11; // ref
        Array _21 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        ((Uint16*)_21.data)[0] = i;
        Uint16 _19 = Uint16_from_MINUS_long(8l);
        Uint16 _20 = Uint16_bit_MINUS_shift_MINUS_right(i, _19);
        ((Uint16*)_21.data)[1] = _20;
        Array__Uint16* _22 = &_21; // ref
        Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_uint8_t(_12, _22);
        _41 = _23;
        Array_delete__Uint16(_21);
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _28 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _29 = &_28; // ref
        Array _38 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        Uint16 _35 = Uint16_from_MINUS_long(8l);
        Uint16 _36 = Uint16_bit_MINUS_shift_MINUS_right(i, _35);
        ((Uint16*)_38.data)[0] = _36;
        ((Uint16*)_38.data)[1] = i;
        Array__Uint16* _39 = &_38; // ref
        Array__uint8_t _40 = Array_copy_MINUS_map__Uint16_uint8_t(_29, _39);
        _41 = _40;
        Array_delete__Uint16(_38);
    }
    else UNHANDLED("Binary.carp", 122);
    return _41;
}

Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint16_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i) {
    Array__uint8_t _61;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _60;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _37 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            ((Uint32*)_37.data)[0] = i;
            Uint32 _30 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_37.data)[1] = _30;
            Uint32 _33 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_37.data)[2] = _33;
            Uint32 _36 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_37.data)[3] = _36;
            Array__Uint32* _38 = &_37; // ref
            Array__uint8_t _39 = Array_copy_MINUS_map__Uint32_uint8_t(_25, _38);
            _60 = _39;
            Array_delete__Uint32(_37);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _44 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _45 = &_44; // ref
            Array _57 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            Uint32 _49 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_57.data)[0] = _49;
            Uint32 _52 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_57.data)[1] = _52;
            Uint32 _55 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_57.data)[2] = _55;
            ((Uint32*)_57.data)[3] = i;
            Array__Uint32* _58 = &_57; // ref
            Array__uint8_t _59 = Array_copy_MINUS_map__Uint32_uint8_t(_45, _58);
            _60 = _59;
            Array_delete__Uint32(_57);
        }
        else UNHANDLED("Binary.carp", 199);
        _61 = _60;
        Function_delete__Long_Uint32(shift);
    }
    return _61;
}

Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint32_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint32_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i) {
    Array__uint8_t _85;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _84;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _49 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            ((Uint64*)_49.data)[0] = i;
            Uint64 _30 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_49.data)[1] = _30;
            Uint64 _33 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_49.data)[2] = _33;
            Uint64 _36 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_49.data)[3] = _36;
            Uint64 _39 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_49.data)[4] = _39;
            Uint64 _42 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_49.data)[5] = _42;
            Uint64 _45 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_49.data)[6] = _45;
            Uint64 _48 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_49.data)[7] = _48;
            Array__Uint64* _50 = &_49; // ref
            Array__uint8_t _51 = Array_copy_MINUS_map__Uint64_uint8_t(_25, _50);
            _84 = _51;
            Array_delete__Uint64(_49);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _56 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _57 = &_56; // ref
            Array _81 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            Uint64 _61 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_81.data)[0] = _61;
            Uint64 _64 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_81.data)[1] = _64;
            Uint64 _67 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_81.data)[2] = _67;
            Uint64 _70 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_81.data)[3] = _70;
            Uint64 _73 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_81.data)[4] = _73;
            Uint64 _76 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_81.data)[5] = _76;
            Uint64 _79 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_81.data)[6] = _79;
            ((Uint64*)_81.data)[7] = i;
            Array__Uint64* _82 = &_81; // ref
            Array__uint8_t _83 = Array_copy_MINUS_map__Uint64_uint8_t(_57, _82);
            _84 = _83;
            Array_delete__Uint64(_81);
        }
        else UNHANDLED("Binary.carp", 285);
        _85 = _84;
        Function_delete__Long_Uint64(shift);
    }
    return _85;
}

Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint64_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint64_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint16_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_12, results);
    Array__Result__Uint16_Array__uint8_t* _15 = &_14; // ref
    Array__Uint16 _16 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(_7, _15);
    Array_delete__Result__Uint16_Array__uint8_t(_14);
    return _16;
}

Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint32_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_12, results);
    Array__Result__Uint32_Array__uint8_t* _15 = &_14; // ref
    Array__Uint32 _16 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(_7, _15);
    Array_delete__Result__Uint32_Array__uint8_t(_14);
    return _16;
}

Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint64_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_12, results);
    Array__Result__Uint64_Array__uint8_t* _15 = &_14; // ref
    Array__Uint64 _16 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(_7, _15);
    Array_delete__Result__Uint64_Array__uint8_t(_14);
    return _16;
}

int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint16_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_33, results);
    Array__Result__Uint16_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint16_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint32_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_33, results);
    Array__Result__Uint32_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint32_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint64_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_33, results);
    Array__Result__Uint64_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint64_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

ByteOrder Binary_system_MINUS_endianness() {
    ByteOrder _17;
    int _6 = Binary_system_MINUS_endianness_MINUS_internal();
    bool _8 = Int__EQ_(_6, 1);
    if (_8) {
        ByteOrder _11 = ByteOrder_LittleEndian();
        ByteOrder _12 = _11;
        _17 = _12;
    } else {
        ByteOrder _15 = ByteOrder_BigEndian();
        ByteOrder _16 = _15;
        _17 = _16;
    }
    return _17;
}

String Binary_to_MINUS_hex_MINUS_str(uint8_t b) {
    String _525;
    /* let */ {
        uint8_t _10 = Byte_from_MINUS_int(240);
        uint8_t _11 = Byte_bit_MINUS_and(b, _10);
        uint8_t hi = _11;
        uint8_t _17 = Byte_from_MINUS_int(4);
        uint8_t _18 = Byte_bit_MINUS_shift_MINUS_left(b, _17);
        uint8_t lo = _18;
        String _267;
        /* let */ {
            uint8_t gensym_MINUS_generated1037 = hi;
            String _266;
            uint8_t _29 = Byte_from_MINUS_int(0);
            bool _30 = Byte__EQ_(gensym_MINUS_generated1037, _29);
            if (_30) {
                static String _33 = "0";
                String *_33_ref = &_33;
                String _34 = String_copy(_33_ref);
                String _35 = _34;
                _266 = _35;
            } else {
                String _264;
                uint8_t _42 = Byte_from_MINUS_int(16);
                bool _43 = Byte__EQ_(gensym_MINUS_generated1037, _42);
                if (_43) {
                    static String _46 = "1";
                    String *_46_ref = &_46;
                    String _47 = String_copy(_46_ref);
                    String _48 = _47;
                    _264 = _48;
                } else {
                    String _262;
                    uint8_t _55 = Byte_from_MINUS_int(32);
                    bool _56 = Byte__EQ_(gensym_MINUS_generated1037, _55);
                    if (_56) {
                        static String _59 = "2";
                        String *_59_ref = &_59;
                        String _60 = String_copy(_59_ref);
                        String _61 = _60;
                        _262 = _61;
                    } else {
                        String _260;
                        uint8_t _68 = Byte_from_MINUS_int(48);
                        bool _69 = Byte__EQ_(gensym_MINUS_generated1037, _68);
                        if (_69) {
                            static String _72 = "3";
                            String *_72_ref = &_72;
                            String _73 = String_copy(_72_ref);
                            String _74 = _73;
                            _260 = _74;
                        } else {
                            String _258;
                            uint8_t _81 = Byte_from_MINUS_int(64);
                            bool _82 = Byte__EQ_(gensym_MINUS_generated1037, _81);
                            if (_82) {
                                static String _85 = "4";
                                String *_85_ref = &_85;
                                String _86 = String_copy(_85_ref);
                                String _87 = _86;
                                _258 = _87;
                            } else {
                                String _256;
                                uint8_t _94 = Byte_from_MINUS_int(80);
                                bool _95 = Byte__EQ_(gensym_MINUS_generated1037, _94);
                                if (_95) {
                                    static String _98 = "5";
                                    String *_98_ref = &_98;
                                    String _99 = String_copy(_98_ref);
                                    String _100 = _99;
                                    _256 = _100;
                                } else {
                                    String _254;
                                    uint8_t _107 = Byte_from_MINUS_int(96);
                                    bool _108 = Byte__EQ_(gensym_MINUS_generated1037, _107);
                                    if (_108) {
                                        static String _111 = "6";
                                        String *_111_ref = &_111;
                                        String _112 = String_copy(_111_ref);
                                        String _113 = _112;
                                        _254 = _113;
                                    } else {
                                        String _252;
                                        uint8_t _120 = Byte_from_MINUS_int(112);
                                        bool _121 = Byte__EQ_(gensym_MINUS_generated1037, _120);
                                        if (_121) {
                                            static String _124 = "7";
                                            String *_124_ref = &_124;
                                            String _125 = String_copy(_124_ref);
                                            String _126 = _125;
                                            _252 = _126;
                                        } else {
                                            String _250;
                                            uint8_t _133 = Byte_from_MINUS_int(128);
                                            bool _134 = Byte__EQ_(gensym_MINUS_generated1037, _133);
                                            if (_134) {
                                                static String _137 = "8";
                                                String *_137_ref = &_137;
                                                String _138 = String_copy(_137_ref);
                                                String _139 = _138;
                                                _250 = _139;
                                            } else {
                                                String _248;
                                                uint8_t _146 = Byte_from_MINUS_int(144);
                                                bool _147 = Byte__EQ_(gensym_MINUS_generated1037, _146);
                                                if (_147) {
                                                    static String _150 = "9";
                                                    String *_150_ref = &_150;
                                                    String _151 = String_copy(_150_ref);
                                                    String _152 = _151;
                                                    _248 = _152;
                                                } else {
                                                    String _246;
                                                    uint8_t _159 = Byte_from_MINUS_int(160);
                                                    bool _160 = Byte__EQ_(gensym_MINUS_generated1037, _159);
                                                    if (_160) {
                                                        static String _163 = "A";
                                                        String *_163_ref = &_163;
                                                        String _164 = String_copy(_163_ref);
                                                        String _165 = _164;
                                                        _246 = _165;
                                                    } else {
                                                        String _244;
                                                        uint8_t _172 = Byte_from_MINUS_int(176);
                                                        bool _173 = Byte__EQ_(gensym_MINUS_generated1037, _172);
                                                        if (_173) {
                                                            static String _176 = "B";
                                                            String *_176_ref = &_176;
                                                            String _177 = String_copy(_176_ref);
                                                            String _178 = _177;
                                                            _244 = _178;
                                                        } else {
                                                            String _242;
                                                            uint8_t _185 = Byte_from_MINUS_int(192);
                                                            bool _186 = Byte__EQ_(gensym_MINUS_generated1037, _185);
                                                            if (_186) {
                                                                static String _189 = "C";
                                                                String *_189_ref = &_189;
                                                                String _190 = String_copy(_189_ref);
                                                                String _191 = _190;
                                                                _242 = _191;
                                                            } else {
                                                                String _240;
                                                                uint8_t _198 = Byte_from_MINUS_int(208);
                                                                bool _199 = Byte__EQ_(gensym_MINUS_generated1037, _198);
                                                                if (_199) {
                                                                    static String _202 = "D";
                                                                    String *_202_ref = &_202;
                                                                    String _203 = String_copy(_202_ref);
                                                                    String _204 = _203;
                                                                    _240 = _204;
                                                                } else {
                                                                    String _238;
                                                                    uint8_t _211 = Byte_from_MINUS_int(224);
                                                                    bool _212 = Byte__EQ_(gensym_MINUS_generated1037, _211);
                                                                    if (_212) {
                                                                        static String _215 = "E";
                                                                        String *_215_ref = &_215;
                                                                        String _216 = String_copy(_215_ref);
                                                                        String _217 = _216;
                                                                        _238 = _217;
                                                                    } else {
                                                                        String _236;
                                                                        uint8_t _224 = Byte_from_MINUS_int(240);
                                                                        bool _225 = Byte__EQ_(gensym_MINUS_generated1037, _224);
                                                                        if (_225) {
                                                                            static String _228 = "F";
                                                                            String *_228_ref = &_228;
                                                                            String _229 = String_copy(_228_ref);
                                                                            String _230 = _229;
                                                                            _236 = _230;
                                                                        } else {
                                                                            static String _233 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_233_ref = &_233;
                                                                            String _234 = String_copy(_233_ref);
                                                                            String _235 = _234;
                                                                            _236 = _235;
                                                                        }
                                                                        String _237 = _236;
                                                                        _238 = _237;
                                                                    }
                                                                    String _239 = _238;
                                                                    _240 = _239;
                                                                }
                                                                String _241 = _240;
                                                                _242 = _241;
                                                            }
                                                            String _243 = _242;
                                                            _244 = _243;
                                                        }
                                                        String _245 = _244;
                                                        _246 = _245;
                                                    }
                                                    String _247 = _246;
                                                    _248 = _247;
                                                }
                                                String _249 = _248;
                                                _250 = _249;
                                            }
                                            String _251 = _250;
                                            _252 = _251;
                                        }
                                        String _253 = _252;
                                        _254 = _253;
                                    }
                                    String _255 = _254;
                                    _256 = _255;
                                }
                                String _257 = _256;
                                _258 = _257;
                            }
                            String _259 = _258;
                            _260 = _259;
                        }
                        String _261 = _260;
                        _262 = _261;
                    }
                    String _263 = _262;
                    _264 = _263;
                }
                String _265 = _264;
                _266 = _265;
            }
            _267 = _266;
        }
        String nib_MINUS_one = _267;
        String _516;
        /* let */ {
            uint8_t gensym_MINUS_generated1038 = lo;
            String _515;
            uint8_t _278 = Byte_from_MINUS_int(0);
            bool _279 = Byte__EQ_(gensym_MINUS_generated1038, _278);
            if (_279) {
                static String _282 = "0";
                String *_282_ref = &_282;
                String _283 = String_copy(_282_ref);
                String _284 = _283;
                _515 = _284;
            } else {
                String _513;
                uint8_t _291 = Byte_from_MINUS_int(16);
                bool _292 = Byte__EQ_(gensym_MINUS_generated1038, _291);
                if (_292) {
                    static String _295 = "1";
                    String *_295_ref = &_295;
                    String _296 = String_copy(_295_ref);
                    String _297 = _296;
                    _513 = _297;
                } else {
                    String _511;
                    uint8_t _304 = Byte_from_MINUS_int(32);
                    bool _305 = Byte__EQ_(gensym_MINUS_generated1038, _304);
                    if (_305) {
                        static String _308 = "2";
                        String *_308_ref = &_308;
                        String _309 = String_copy(_308_ref);
                        String _310 = _309;
                        _511 = _310;
                    } else {
                        String _509;
                        uint8_t _317 = Byte_from_MINUS_int(48);
                        bool _318 = Byte__EQ_(gensym_MINUS_generated1038, _317);
                        if (_318) {
                            static String _321 = "3";
                            String *_321_ref = &_321;
                            String _322 = String_copy(_321_ref);
                            String _323 = _322;
                            _509 = _323;
                        } else {
                            String _507;
                            uint8_t _330 = Byte_from_MINUS_int(64);
                            bool _331 = Byte__EQ_(gensym_MINUS_generated1038, _330);
                            if (_331) {
                                static String _334 = "4";
                                String *_334_ref = &_334;
                                String _335 = String_copy(_334_ref);
                                String _336 = _335;
                                _507 = _336;
                            } else {
                                String _505;
                                uint8_t _343 = Byte_from_MINUS_int(80);
                                bool _344 = Byte__EQ_(gensym_MINUS_generated1038, _343);
                                if (_344) {
                                    static String _347 = "5";
                                    String *_347_ref = &_347;
                                    String _348 = String_copy(_347_ref);
                                    String _349 = _348;
                                    _505 = _349;
                                } else {
                                    String _503;
                                    uint8_t _356 = Byte_from_MINUS_int(96);
                                    bool _357 = Byte__EQ_(gensym_MINUS_generated1038, _356);
                                    if (_357) {
                                        static String _360 = "6";
                                        String *_360_ref = &_360;
                                        String _361 = String_copy(_360_ref);
                                        String _362 = _361;
                                        _503 = _362;
                                    } else {
                                        String _501;
                                        uint8_t _369 = Byte_from_MINUS_int(112);
                                        bool _370 = Byte__EQ_(gensym_MINUS_generated1038, _369);
                                        if (_370) {
                                            static String _373 = "7";
                                            String *_373_ref = &_373;
                                            String _374 = String_copy(_373_ref);
                                            String _375 = _374;
                                            _501 = _375;
                                        } else {
                                            String _499;
                                            uint8_t _382 = Byte_from_MINUS_int(128);
                                            bool _383 = Byte__EQ_(gensym_MINUS_generated1038, _382);
                                            if (_383) {
                                                static String _386 = "8";
                                                String *_386_ref = &_386;
                                                String _387 = String_copy(_386_ref);
                                                String _388 = _387;
                                                _499 = _388;
                                            } else {
                                                String _497;
                                                uint8_t _395 = Byte_from_MINUS_int(144);
                                                bool _396 = Byte__EQ_(gensym_MINUS_generated1038, _395);
                                                if (_396) {
                                                    static String _399 = "9";
                                                    String *_399_ref = &_399;
                                                    String _400 = String_copy(_399_ref);
                                                    String _401 = _400;
                                                    _497 = _401;
                                                } else {
                                                    String _495;
                                                    uint8_t _408 = Byte_from_MINUS_int(160);
                                                    bool _409 = Byte__EQ_(gensym_MINUS_generated1038, _408);
                                                    if (_409) {
                                                        static String _412 = "A";
                                                        String *_412_ref = &_412;
                                                        String _413 = String_copy(_412_ref);
                                                        String _414 = _413;
                                                        _495 = _414;
                                                    } else {
                                                        String _493;
                                                        uint8_t _421 = Byte_from_MINUS_int(176);
                                                        bool _422 = Byte__EQ_(gensym_MINUS_generated1038, _421);
                                                        if (_422) {
                                                            static String _425 = "B";
                                                            String *_425_ref = &_425;
                                                            String _426 = String_copy(_425_ref);
                                                            String _427 = _426;
                                                            _493 = _427;
                                                        } else {
                                                            String _491;
                                                            uint8_t _434 = Byte_from_MINUS_int(192);
                                                            bool _435 = Byte__EQ_(gensym_MINUS_generated1038, _434);
                                                            if (_435) {
                                                                static String _438 = "C";
                                                                String *_438_ref = &_438;
                                                                String _439 = String_copy(_438_ref);
                                                                String _440 = _439;
                                                                _491 = _440;
                                                            } else {
                                                                String _489;
                                                                uint8_t _447 = Byte_from_MINUS_int(208);
                                                                bool _448 = Byte__EQ_(gensym_MINUS_generated1038, _447);
                                                                if (_448) {
                                                                    static String _451 = "D";
                                                                    String *_451_ref = &_451;
                                                                    String _452 = String_copy(_451_ref);
                                                                    String _453 = _452;
                                                                    _489 = _453;
                                                                } else {
                                                                    String _487;
                                                                    uint8_t _460 = Byte_from_MINUS_int(224);
                                                                    bool _461 = Byte__EQ_(gensym_MINUS_generated1038, _460);
                                                                    if (_461) {
                                                                        static String _464 = "E";
                                                                        String *_464_ref = &_464;
                                                                        String _465 = String_copy(_464_ref);
                                                                        String _466 = _465;
                                                                        _487 = _466;
                                                                    } else {
                                                                        String _485;
                                                                        uint8_t _473 = Byte_from_MINUS_int(240);
                                                                        bool _474 = Byte__EQ_(gensym_MINUS_generated1038, _473);
                                                                        if (_474) {
                                                                            static String _477 = "F";
                                                                            String *_477_ref = &_477;
                                                                            String _478 = String_copy(_477_ref);
                                                                            String _479 = _478;
                                                                            _485 = _479;
                                                                        } else {
                                                                            static String _482 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_482_ref = &_482;
                                                                            String _483 = String_copy(_482_ref);
                                                                            String _484 = _483;
                                                                            _485 = _484;
                                                                        }
                                                                        String _486 = _485;
                                                                        _487 = _486;
                                                                    }
                                                                    String _488 = _487;
                                                                    _489 = _488;
                                                                }
                                                                String _490 = _489;
                                                                _491 = _490;
                                                            }
                                                            String _492 = _491;
                                                            _493 = _492;
                                                        }
                                                        String _494 = _493;
                                                        _495 = _494;
                                                    }
                                                    String _496 = _495;
                                                    _497 = _496;
                                                }
                                                String _498 = _497;
                                                _499 = _498;
                                            }
                                            String _500 = _499;
                                            _501 = _500;
                                        }
                                        String _502 = _501;
                                        _503 = _502;
                                    }
                                    String _504 = _503;
                                    _505 = _504;
                                }
                                String _506 = _505;
                                _507 = _506;
                            }
                            String _508 = _507;
                            _509 = _508;
                        }
                        String _510 = _509;
                        _511 = _510;
                    }
                    String _512 = _511;
                    _513 = _512;
                }
                String _514 = _513;
                _515 = _514;
            }
            _516 = _515;
        }
        String nib_MINUS_two = _516;
        Array _522 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
        ((String*)_522.data)[0] = nib_MINUS_one;
        ((String*)_522.data)[1] = nib_MINUS_two;
        Array__String* _523 = &_522; // ref
        String _524 = String_concat(_523);
        _525 = _524;
        Array_delete__String(_522);
    }
    return _525;
}

Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs) {
    Uint16 _39;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        Uint16 _22 = Binary_to_MINUS_int16(_15, _21);
        _39 = _22;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _30 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _31 = Byte_copy(_30);
        uint8_t* _36 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _37 = Byte_copy(_36);
        Uint16 _38 = Binary_to_MINUS_int16(_31, _37);
        _39 = _38;
    }
    else UNHANDLED("Binary.carp", 99);
    return _39;
}

Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint16 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint16 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint16(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint16(f);
    }
    return _29;
}

Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Uint32 _63;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        Uint32 _34 = Binary_to_MINUS_int32(_15, _21, _27, _33);
        _63 = _34;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _42 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _43 = Byte_copy(_42);
        uint8_t* _48 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _49 = Byte_copy(_48);
        uint8_t* _54 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _55 = Byte_copy(_54);
        uint8_t* _60 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _61 = Byte_copy(_60);
        Uint32 _62 = Binary_to_MINUS_int32(_43, _49, _55, _61);
        _63 = _62;
    }
    else UNHANDLED("Binary.carp", 171);
    return _63;
}

Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint32 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint32 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint32(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint32(f);
    }
    return _29;
}

Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Uint64 _111;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        uint8_t* _38 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _39 = Byte_copy(_38);
        uint8_t* _44 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _45 = Byte_copy(_44);
        uint8_t* _50 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _51 = Byte_copy(_50);
        uint8_t* _56 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _57 = Byte_copy(_56);
        Uint64 _58 = Binary_to_MINUS_int64(_15, _21, _27, _33, _39, _45, _51, _57);
        _111 = _58;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _66 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _67 = Byte_copy(_66);
        uint8_t* _72 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _73 = Byte_copy(_72);
        uint8_t* _78 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _79 = Byte_copy(_78);
        uint8_t* _84 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _85 = Byte_copy(_84);
        uint8_t* _90 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _91 = Byte_copy(_90);
        uint8_t* _96 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _97 = Byte_copy(_96);
        uint8_t* _102 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _103 = Byte_copy(_102);
        uint8_t* _108 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _109 = Byte_copy(_108);
        Uint64 _110 = Binary_to_MINUS_int64(_67, _73, _79, _85, _91, _97, _103, _109);
        _111 = _110;
    }
    else UNHANDLED("Binary.carp", 250);
    return _111;
}

Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint64 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint64 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint64(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint64(f);
    }
    return _29;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint16_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint32_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint64_Array__uint8_t(_7, _9);
    return _10;
}

Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Uint16 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(_7);
    return _8;
}

Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Uint32 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(_7);
    return _8;
}

Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Uint64 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(_7);
    return _8;
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16)) StaticLifetime) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16)) StaticLifetime) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32)) StaticLifetime) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32)) StaticLifetime) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64)) StaticLifetime) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64)) StaticLifetime) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint32 */
    return copy;
}

void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint32 */
}

Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint64 */
    return copy;
}

void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint64 */
}

Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

double* Body_angular_MINUS_damping(Body* p) { return (&(p->angular_MINUS_damping)); }

Vector3__double* Body_angular_MINUS_velocity(Body* p) { return (&(p->angular_MINUS_velocity)); }

void Body_apply_MINUS_angular_MINUS_impulse_BANG_(Body* b, Vector3__double* impulse) {
    BodyType* _8 = Body_body_MINUS_type(b);
    if(_8->_tag == BodyType_Dynamic_tag) {
        BodyType* _8_temp = _8;
        // Case expr:
        /* let */ {
            double* _18 = Body_inv_MINUS_inertia(b);
            double _19 = Double_copy(_18);
            Vector3__double _20 = Vector3_mul__double(impulse, _19);
            Vector3__double dw = _20;
            Vector3__double* _28 = Body_angular_MINUS_velocity(b);
            Vector3__double* _31 = &dw; // ref
            Vector3__double _32 = Vector3_add__double(_28, _31);
            Body_set_MINUS_angular_MINUS_velocity_BANG_(b, _32);
            Body_set_MINUS_is_MINUS_sleeping_BANG_(b, false);
            Vector3_delete__double(dw);
        }
    }
    else if(true) {
        BodyType* _8_temp = _8;
        BodyType* wildcard_40 = _8_temp;
        /* () */
    }
    else UNHANDLED("dynamics.carp", 88);
}

void Body_apply_MINUS_force_BANG_(Body* b, Vector3__double* f) {
    BodyType* _8 = Body_body_MINUS_type(b);
    if(_8->_tag == BodyType_Dynamic_tag) {
        BodyType* _8_temp = _8;
        // Case expr:
        Vector3__double* _17 = Body_force(b);
        Vector3__double _19 = Vector3_add__double(_17, f);
        Body_set_MINUS_force_BANG_(b, _19);
        Body_set_MINUS_is_MINUS_sleeping_BANG_(b, false);
    }
    else if(true) {
        BodyType* _8_temp = _8;
        BodyType* wildcard_26 = _8_temp;
        /* () */
    }
    else UNHANDLED("dynamics.carp", 63);
}

void Body_apply_MINUS_impulse_BANG_(Body* b, Vector3__double* impulse) {
    BodyType* _8 = Body_body_MINUS_type(b);
    if(_8->_tag == BodyType_Dynamic_tag) {
        BodyType* _8_temp = _8;
        // Case expr:
        /* let */ {
            double* _18 = Body_inv_MINUS_mass(b);
            double _19 = Double_copy(_18);
            Vector3__double _20 = Vector3_mul__double(impulse, _19);
            Vector3__double dv = _20;
            Vector3__double* _28 = Body_velocity(b);
            Vector3__double* _31 = &dv; // ref
            Vector3__double _32 = Vector3_add__double(_28, _31);
            Body_set_MINUS_velocity_BANG_(b, _32);
            Body_set_MINUS_is_MINUS_sleeping_BANG_(b, false);
            Vector3_delete__double(dv);
        }
    }
    else if(true) {
        BodyType* _8_temp = _8;
        BodyType* wildcard_40 = _8_temp;
        /* () */
    }
    else UNHANDLED("dynamics.carp", 79);
}

void Body_apply_MINUS_torque_BANG_(Body* b, Vector3__double* t) {
    BodyType* _8 = Body_body_MINUS_type(b);
    if(_8->_tag == BodyType_Dynamic_tag) {
        BodyType* _8_temp = _8;
        // Case expr:
        Vector3__double* _17 = Body_torque(b);
        Vector3__double _19 = Vector3_add__double(_17, t);
        Body_set_MINUS_torque_BANG_(b, _19);
        Body_set_MINUS_is_MINUS_sleeping_BANG_(b, false);
    }
    else if(true) {
        BodyType* _8_temp = _8;
        BodyType* wildcard_26 = _8_temp;
        /* () */
    }
    else UNHANDLED("dynamics.carp", 71);
}

BodyType* Body_body_MINUS_type(Body* p) { return (&(p->body_MINUS_type)); }

Body Body_copy(Body* pRef) {
    Body copy = *pRef;
    copy.velocity = Vector3_copy__double(&(pRef->velocity));
    copy.angular_MINUS_velocity = Vector3_copy__double(&(pRef->angular_MINUS_velocity));
    copy.force = Vector3_copy__double(&(pRef->force));
    copy.torque = Vector3_copy__double(&(pRef->torque));
    /* Ignore non-managed member 'mass' : Double */
    /* Ignore non-managed member 'inv_MINUS_mass' : Double */
    /* Ignore non-managed member 'inv_MINUS_inertia' : Double */
    /* Ignore non-managed member 'restitution' : Double */
    /* Ignore non-managed member 'friction' : Double */
    /* Ignore non-managed member 'damping' : Double */
    /* Ignore non-managed member 'angular_MINUS_damping' : Double */
    /* Ignore non-managed member 'is_MINUS_sleeping' : Bool */
    copy.body_MINUS_type = BodyType_copy(&(pRef->body_MINUS_type));
    return copy;
}

double* Body_damping(Body* p) { return (&(p->damping)); }

void Body_delete(Body p) {
    Vector3_delete__double(p.velocity);
    Vector3_delete__double(p.angular_MINUS_velocity);
    Vector3_delete__double(p.force);
    Vector3_delete__double(p.torque);
    /* Ignore non-managed member 'mass' : Double */
    /* Ignore non-managed member 'inv_MINUS_mass' : Double */
    /* Ignore non-managed member 'inv_MINUS_inertia' : Double */
    /* Ignore non-managed member 'restitution' : Double */
    /* Ignore non-managed member 'friction' : Double */
    /* Ignore non-managed member 'damping' : Double */
    /* Ignore non-managed member 'angular_MINUS_damping' : Double */
    /* Ignore non-managed member 'is_MINUS_sleeping' : Bool */
    BodyType_delete(p.body_MINUS_type);
}

Vector3__double* Body_force(Body* p) { return (&(p->force)); }

double* Body_friction(Body* p) { return (&(p->friction)); }

Body Body_init(Vector3__double velocity, Vector3__double angular_MINUS_velocity, Vector3__double force, Vector3__double torque, double mass, double inv_MINUS_mass, double inv_MINUS_inertia, double restitution, double friction, double damping, double angular_MINUS_damping, bool is_MINUS_sleeping, BodyType body_MINUS_type) {
    Body instance;
    instance.velocity = velocity;
    instance.angular_MINUS_velocity = angular_MINUS_velocity;
    instance.force = force;
    instance.torque = torque;
    instance.mass = mass;
    instance.inv_MINUS_mass = inv_MINUS_mass;
    instance.inv_MINUS_inertia = inv_MINUS_inertia;
    instance.restitution = restitution;
    instance.friction = friction;
    instance.damping = damping;
    instance.angular_MINUS_damping = angular_MINUS_damping;
    instance.is_MINUS_sleeping = is_MINUS_sleeping;
    instance.body_MINUS_type = body_MINUS_type;
    return instance;
}

double* Body_inv_MINUS_inertia(Body* p) { return (&(p->inv_MINUS_inertia)); }

double* Body_inv_MINUS_mass(Body* p) { return (&(p->inv_MINUS_mass)); }

bool* Body_is_MINUS_sleeping(Body* p) { return (&(p->is_MINUS_sleeping)); }

Body Body_kinematic(double restitution, double friction) {
    Vector3__double _10 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double _15 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double _20 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double _25 = Vector3_init__double(0.0, 0.0, 0.0);
    BodyType _35 = BodyType_Kinematic();
    Body _36 = Body_init(_10, _15, _20, _25, 0.0, 0.0, 0.0, restitution, friction, 1.0, 1.0, false, _35);
    return _36;
}

double* Body_mass(Body* p) { return (&(p->mass)); }

Body Body_new(double mass, double restitution, double friction, double damping, double ang_MINUS_damping, double inertia) {
    Body _71;
    /* let */ {
        double _14 = max__double(mass, 1.0e-4);
        double safe_MINUS_mass = _14;
        double _19 = max__double(inertia, 1.0e-4);
        double safe_MINUS_inertia = _19;
        double _25 = Double_clamp__double(0.0, 1.0, damping);
        double d = _25;
        double _31 = Double_clamp__double(0.0, 1.0, ang_MINUS_damping);
        double ad = _31;
        Vector3__double _38 = Vector3_init__double(0.0, 0.0, 0.0);
        Vector3__double _43 = Vector3_init__double(0.0, 0.0, 0.0);
        Vector3__double _48 = Vector3_init__double(0.0, 0.0, 0.0);
        Vector3__double _53 = Vector3_init__double(0.0, 0.0, 0.0);
        double _58 = Double__DIV_(1.0, safe_MINUS_mass);
        double _62 = Double__DIV_(1.0, safe_MINUS_inertia);
        BodyType _69 = BodyType_Dynamic();
        Body _70 = Body_init(_38, _43, _48, _53, safe_MINUS_mass, _58, _62, restitution, friction, d, ad, false, _69);
        _71 = _70;
    }
    return _71;
}

String Body_prn(Body *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Body");
  temp = Vector3_prn__double(&p->velocity); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->angular_MINUS_velocity); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->force); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->torque); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->mass); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_mass); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_inertia); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->restitution); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->friction); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->damping); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->angular_MINUS_damping); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_sleeping); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = BodyType_prn(&p->body_MINUS_type); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Body");
  temp = Vector3_prn__double(&p->velocity);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->angular_MINUS_velocity);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->force);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->torque);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->mass);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_mass);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_inertia);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->restitution);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->friction);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->damping);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->angular_MINUS_damping);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_sleeping);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = BodyType_prn(&p->body_MINUS_type);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

double* Body_restitution(Body* p) { return (&(p->restitution)); }

Body Body_set_MINUS_angular_MINUS_damping(Body p, double newValue) {
    /* Ignore non-managed member 'angular_MINUS_damping' : Double */
    p.angular_MINUS_damping = newValue;
    return p;
}


void Body_set_MINUS_angular_MINUS_damping_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'angular_MINUS_damping' : Double */
    pRef->angular_MINUS_damping = newValue;
}


Body Body_set_MINUS_angular_MINUS_velocity(Body p, Vector3__double newValue) {
    Vector3_delete__double(p.angular_MINUS_velocity);
    p.angular_MINUS_velocity = newValue;
    return p;
}


void Body_set_MINUS_angular_MINUS_velocity_BANG_(Body* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->angular_MINUS_velocity);
    pRef->angular_MINUS_velocity = newValue;
}


Body Body_set_MINUS_body_MINUS_type(Body p, BodyType newValue) {
    BodyType_delete(p.body_MINUS_type);
    p.body_MINUS_type = newValue;
    return p;
}


void Body_set_MINUS_body_MINUS_type_BANG_(Body* pRef, BodyType newValue) {
    BodyType_delete(pRef->body_MINUS_type);
    pRef->body_MINUS_type = newValue;
}


Body Body_set_MINUS_damping(Body p, double newValue) {
    /* Ignore non-managed member 'damping' : Double */
    p.damping = newValue;
    return p;
}


void Body_set_MINUS_damping_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'damping' : Double */
    pRef->damping = newValue;
}


Body Body_set_MINUS_force(Body p, Vector3__double newValue) {
    Vector3_delete__double(p.force);
    p.force = newValue;
    return p;
}


void Body_set_MINUS_force_BANG_(Body* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->force);
    pRef->force = newValue;
}


Body Body_set_MINUS_friction(Body p, double newValue) {
    /* Ignore non-managed member 'friction' : Double */
    p.friction = newValue;
    return p;
}


void Body_set_MINUS_friction_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'friction' : Double */
    pRef->friction = newValue;
}


Body Body_set_MINUS_inv_MINUS_inertia(Body p, double newValue) {
    /* Ignore non-managed member 'inv_MINUS_inertia' : Double */
    p.inv_MINUS_inertia = newValue;
    return p;
}


void Body_set_MINUS_inv_MINUS_inertia_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'inv_MINUS_inertia' : Double */
    pRef->inv_MINUS_inertia = newValue;
}


Body Body_set_MINUS_inv_MINUS_mass(Body p, double newValue) {
    /* Ignore non-managed member 'inv_MINUS_mass' : Double */
    p.inv_MINUS_mass = newValue;
    return p;
}


void Body_set_MINUS_inv_MINUS_mass_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'inv_MINUS_mass' : Double */
    pRef->inv_MINUS_mass = newValue;
}


Body Body_set_MINUS_is_MINUS_sleeping(Body p, bool newValue) {
    /* Ignore non-managed member 'is_MINUS_sleeping' : Bool */
    p.is_MINUS_sleeping = newValue;
    return p;
}


void Body_set_MINUS_is_MINUS_sleeping_BANG_(Body* pRef, bool newValue) {
    /* Ignore non-managed member 'is_MINUS_sleeping' : Bool */
    pRef->is_MINUS_sleeping = newValue;
}


Body Body_set_MINUS_mass(Body p, double newValue) {
    /* Ignore non-managed member 'mass' : Double */
    p.mass = newValue;
    return p;
}


void Body_set_MINUS_mass_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'mass' : Double */
    pRef->mass = newValue;
}


Body Body_set_MINUS_restitution(Body p, double newValue) {
    /* Ignore non-managed member 'restitution' : Double */
    p.restitution = newValue;
    return p;
}


void Body_set_MINUS_restitution_BANG_(Body* pRef, double newValue) {
    /* Ignore non-managed member 'restitution' : Double */
    pRef->restitution = newValue;
}


Body Body_set_MINUS_torque(Body p, Vector3__double newValue) {
    Vector3_delete__double(p.torque);
    p.torque = newValue;
    return p;
}


void Body_set_MINUS_torque_BANG_(Body* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->torque);
    pRef->torque = newValue;
}


Body Body_set_MINUS_velocity(Body p, Vector3__double newValue) {
    Vector3_delete__double(p.velocity);
    p.velocity = newValue;
    return p;
}


void Body_set_MINUS_velocity_BANG_(Body* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->velocity);
    pRef->velocity = newValue;
}


Body Body__STATIC_(double restitution, double friction) {
    Vector3__double _10 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double _15 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double _20 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double _25 = Vector3_init__double(0.0, 0.0, 0.0);
    BodyType _35 = BodyType_Static();
    Body _36 = Body_init(_10, _15, _20, _25, 0.0, 0.0, 0.0, restitution, friction, 1.0, 1.0, false, _35);
    return _36;
}

String Body_str(Body *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Body");
  temp = Vector3_prn__double(&p->velocity); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->angular_MINUS_velocity); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->force); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->torque); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->mass); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_mass); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_inertia); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->restitution); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->friction); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->damping); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->angular_MINUS_damping); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_sleeping); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = BodyType_prn(&p->body_MINUS_type); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Body");
  temp = Vector3_prn__double(&p->velocity);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->angular_MINUS_velocity);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->force);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->torque);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->mass);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_mass);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->inv_MINUS_inertia);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->restitution);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->friction);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->damping);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->angular_MINUS_damping);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_sleeping);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = BodyType_prn(&p->body_MINUS_type);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Vector3__double* Body_torque(Body* p) { return (&(p->torque)); }

Body Body_update_MINUS_angular_MINUS_damping(Body p, Lambda *updater) {
    p.angular_MINUS_damping = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.angular_MINUS_damping) : ((Fn__double_double)(*updater).callback)(p.angular_MINUS_damping);
    return p;
}


Body Body_update_MINUS_angular_MINUS_velocity(Body p, Lambda *updater) {
    p.angular_MINUS_velocity = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.angular_MINUS_velocity) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.angular_MINUS_velocity);
    return p;
}


Body Body_update_MINUS_body_MINUS_type(Body p, Lambda *updater) {
    p.body_MINUS_type = (*updater).env ? ((Fn__LambdaEnv_BodyType_BodyType)(*updater).callback)((*updater).env, p.body_MINUS_type) : ((Fn__BodyType_BodyType)(*updater).callback)(p.body_MINUS_type);
    return p;
}


Body Body_update_MINUS_damping(Body p, Lambda *updater) {
    p.damping = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.damping) : ((Fn__double_double)(*updater).callback)(p.damping);
    return p;
}


Body Body_update_MINUS_force(Body p, Lambda *updater) {
    p.force = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.force) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.force);
    return p;
}


Body Body_update_MINUS_friction(Body p, Lambda *updater) {
    p.friction = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.friction) : ((Fn__double_double)(*updater).callback)(p.friction);
    return p;
}


Body Body_update_MINUS_inv_MINUS_inertia(Body p, Lambda *updater) {
    p.inv_MINUS_inertia = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.inv_MINUS_inertia) : ((Fn__double_double)(*updater).callback)(p.inv_MINUS_inertia);
    return p;
}


Body Body_update_MINUS_inv_MINUS_mass(Body p, Lambda *updater) {
    p.inv_MINUS_mass = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.inv_MINUS_mass) : ((Fn__double_double)(*updater).callback)(p.inv_MINUS_mass);
    return p;
}


Body Body_update_MINUS_is_MINUS_sleeping(Body p, Lambda *updater) {
    p.is_MINUS_sleeping = (*updater).env ? ((Fn__LambdaEnv_bool_bool)(*updater).callback)((*updater).env, p.is_MINUS_sleeping) : ((Fn__bool_bool)(*updater).callback)(p.is_MINUS_sleeping);
    return p;
}


Body Body_update_MINUS_mass(Body p, Lambda *updater) {
    p.mass = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.mass) : ((Fn__double_double)(*updater).callback)(p.mass);
    return p;
}


Body Body_update_MINUS_restitution(Body p, Lambda *updater) {
    p.restitution = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.restitution) : ((Fn__double_double)(*updater).callback)(p.restitution);
    return p;
}


Body Body_update_MINUS_torque(Body p, Lambda *updater) {
    p.torque = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.torque) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.torque);
    return p;
}


Body Body_update_MINUS_velocity(Body p, Lambda *updater) {
    p.velocity = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.velocity) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.velocity);
    return p;
}


Vector3__double* Body_velocity(Body* p) { return (&(p->velocity)); }

BodyType BodyType_Dynamic() {
  BodyType instance;

    instance._tag = BodyType_Dynamic_tag;
    return instance;
}

BodyType BodyType_Kinematic() {
  BodyType instance;

    instance._tag = BodyType_Kinematic_tag;
    return instance;
}

BodyType BodyType_Static() {
  BodyType instance;

    instance._tag = BodyType_Static_tag;
    return instance;
}

BodyType BodyType_copy(BodyType* pRef) {
    BodyType copy = *pRef;
    if(pRef->_tag == BodyType_Dynamic_tag) {

    }

    else if(pRef->_tag == BodyType_Kinematic_tag) {

    }

    else if(pRef->_tag == BodyType_Static_tag) {

    }

    return copy;
}

void BodyType_delete(BodyType p) {
  if(p._tag == BodyType_Dynamic_tag) {

  }
  else if(p._tag == BodyType_Kinematic_tag) {

  }
  else if(p._tag == BodyType_Static_tag) {

  }

}

int BodyType_get_MINUS_tag(BodyType *p) { return p->_tag; }
String BodyType_prn(BodyType *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == BodyType_Dynamic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Dynamic");

  }
  if(p->_tag == BodyType_Kinematic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Kinematic");

  }
  if(p->_tag == BodyType_Static_tag) {
    size += snprintf(NULL, 0, "(%s ", "Static");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == BodyType_Dynamic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Dynamic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BodyType_Kinematic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Kinematic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BodyType_Static_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Static");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String BodyType_str(BodyType *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == BodyType_Dynamic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Dynamic");

  }
  if(p->_tag == BodyType_Kinematic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Kinematic");

  }
  if(p->_tag == BodyType_Static_tag) {
    size += snprintf(NULL, 0, "(%s ", "Static");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == BodyType_Dynamic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Dynamic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BodyType_Kinematic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Kinematic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == BodyType_Static_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Static");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

bool Bool_blit(bool x) {
    bool _7 = x; // From the 'the' function.
    return _7;
}

int Bool_hash(bool* k) {
    int _17;
    bool _9 = Bool_copy(k);
    bool _10 = _9; // From the 'the' function.
    if (_10) {
        int _13 = 1;
        _17 = _13;
    } else {
        int _16 = 0;
        _17 = _16;
    }
    return _17;
}

String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Bool_zero() {
    return false;
}

String BoolRef_format(String* s, bool* x) {
    bool _9 = Bool_copy(x);
    String _10 = Bool_format(s, _9);
    return _10;
}

String BoolRef_prn(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

String BoolRef_str(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

Pair__ColorId_String Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* _env, Pair__ColorId_String p) {
    String _19 = String_copy(_env->val);
    Pair__ColorId_String _20 = Pair_set_MINUS_b__ColorId_String(p, _19);
    return _20;
}

void Bucket_delete__ColorId_String(Bucket__ColorId_String p) {
    Array_delete__Pair__ColorId_String(p.entries);
}

Bucket__ColorId_String Bucket_empty__ColorId_String() {
    Array _4 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Pair__ColorId_String) * 0) };
    Bucket__ColorId_String _5 = Bucket_init__ColorId_String(_4);
    return _5;
}

Array__Pair__ColorId_String* Bucket_entries__ColorId_String(Bucket__ColorId_String* p) { return (&(p->entries)); }

int Bucket_find__ColorId_String(Bucket__ColorId_String* b, ColorId* k) {
    int _64;
    /* let */ {
        int ret = -1;
        Array__Pair__ColorId_String* _12 = Bucket_entries__ColorId_String(b);
        int _13 = Array_length__Pair__ColorId_String(_12);
        int l = _13;
        Array__Pair__ColorId_String* _17 = Bucket_entries__ColorId_String(b);
        Array__Pair__ColorId_String* es = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, l);
            bool _1000006 = _1000008;
            while (_1000006) {
                Pair__ColorId_String* _36 = Array_unsafe_MINUS_nth__Pair__ColorId_String(es, i);
                ColorId* _37 = Pair_a__ColorId_String(_36);
                bool _39 = Color__EQ___ColorId(_37, k);
                if (_39) {
                    ret = i;  // Int = Int
                    break;
                    // Unreachable:
                } else {
                    /* () */
                }
                int _1000018 = Int__PLUS_(i, 1);
                i = _1000018;  // Int = Int
                bool _1000008 = Int__LT_(i, l);
                _1000006 = _1000008;
            }
        }
        int _63 = ret;
        _64 = _63;
    }
    return _64;
}

String Bucket_get_MINUS_idx__ColorId_String(Bucket__ColorId_String* b, int i) {
    Array__Pair__ColorId_String* _10 = Bucket_entries__ColorId_String(b);
    Pair__ColorId_String* _12 = Array_unsafe_MINUS_nth__Pair__ColorId_String(_10, i);
    String* _13 = Pair_b__ColorId_String(_12);
    String _14 = String_copy(_13);
    return _14;
}

String Bucket_get__ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* default_MINUS_value) {
    String _30;
    /* let */ {
        int _11 = Bucket_find__ColorId_String(b, k);
        int i = _11;
        String _29;
        bool _17 = _LT__EQ___int(0, i);
        if (_17) {
            String _22 = Bucket_get_MINUS_idx__ColorId_String(b, i);
            String _23 = _22;
            _29 = _23;
        } else {
            String _27 = String_copy(default_MINUS_value);
            String _28 = _27;
            _29 = _28;
        }
        _30 = _29;
    }
    return _30;
}

Bucket__ColorId_String Bucket_init__ColorId_String(Array__Pair__ColorId_String entries) {
    Bucket__ColorId_String instance;
    instance.entries = entries;
    return instance;
}

void Bucket_push_MINUS_back_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v) {
    Array__Pair__ColorId_String* _9 = Bucket_entries__ColorId_String(b);
    Pair__ColorId_String _13 = Pair_init_MINUS_from_MINUS_refs__ColorId_String(k, v);
    Array_push_MINUS_back_BANG___Pair__ColorId_String(_9, _13);
}

void Bucket_put_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v) {
    /* let */ {
        int _11 = Bucket_find__ColorId_String(b, k);
        int i = _11;
        bool _17 = _LT__EQ___int(0, i);
        if (_17) {
            Bucket_set_MINUS_idx_BANG___ColorId_String(b, i, v);
        } else {
            Bucket_push_MINUS_back_BANG___ColorId_String(b, k, v);
        }
    }
}

void Bucket_set_MINUS_idx_BANG___ColorId_String(Bucket__ColorId_String* b, int i, String* val) {
    Array__Pair__ColorId_String* _9 = Bucket_entries__ColorId_String(b);
    // This lambda captures 1 variables: val
    Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty *_21_env = CARP_MALLOC(sizeof(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty));
    _21_env->val = val;
    Lambda _21 = {
      .callback = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env,
      .env = _21_env,
      .delete = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete,
      .copy = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy
    };
    Lambda* _22 = &_21; // ref
    Array_aupdate_BANG___Pair__ColorId_String(_9, i, _22);
    Function_delete__Pair__ColorId_String_Pair__ColorId_String(_21);
}

Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* pRef) {
    Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'val' : (Ref String <d>) */
    return copy;
}

void Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* p) {
    /* Ignore non-managed member 'val' : (Ref String <d>) */
}

uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y) {
    uint8_t _8 = Byte_copy(x);
    uint8_t _11 = Byte_copy(y);
    uint8_t _12 = Byte__PLUS_(_8, _11);
    return _12;
}

uint8_t Byte_blit(uint8_t x) {
    uint8_t _7 = x; // From the 'the' function.
    return _7;
}

bool Byte_even_QMARK_(uint8_t a) {
    uint8_t _8 = Byte_mod(a, 2);
    bool _10 = Byte__EQ_(_8, 0);
    return _10;
}

Maybe__uint8_t Byte_from_MINUS_string(String* s) {
    Maybe__uint8_t _25;
    /* let */ {
        uint8_t res = 0;
        Maybe__uint8_t _24;
        uint8_t* _13 = &res; // ref
        bool _14 = Byte_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__uint8_t _18 = Maybe_Just__uint8_t(res);
            Maybe__uint8_t _19 = _18;
            _24 = _19;
        } else {
            Maybe__uint8_t _22 = Maybe_Nothing__uint8_t();
            Maybe__uint8_t _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Byte_hash(uint8_t* k) {
    uint8_t _9 = Byte_copy(k);
    uint8_t _10 = _9; // From the 'the' function.
    int _11 = Byte_to_MINUS_int(_10);
    return _11;
}

bool Byte_odd_QMARK_(uint8_t a) {
    bool _7 = Byte_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

uint8_t Byte_pow(uint8_t x, uint8_t y) {
    uint8_t _55;
    /* let */ {
        uint8_t r = 1;
        bool _14 = _DIV__EQ___uint8_t(y, 0);
        bool _52 = _14;
        while (_52) {
            uint8_t _21 = Byte_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___uint8_t(_21, 0);
            if (_23) {
                uint8_t _30 = Byte__MUL_(r, x);
                r = _30;  // Byte = Byte
            } else {
                /* () */
            }
            uint8_t _42 = Byte__DIV_(y, 2);
            y = _42;  // Byte = Byte
            uint8_t _49 = Byte__MUL_(x, x);
            x = _49;  // Byte = Byte
            bool _14 = _DIV__EQ___uint8_t(y, 0);
            _52 = _14;
        }
        uint8_t _54 = r;
        _55 = _54;
    }
    return _55;
}

String Byte_prn(uint8_t x) {
    String _6 = Byte_str(x);
    return _6;
}

uint8_t Byte_random() {
    int _5 = Int_random();
    uint8_t _6 = Byte_from_MINUS_int(_5);
    return _6;
}

uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper) {
    int _9 = Byte_to_MINUS_int(lower);
    int _12 = Byte_to_MINUS_int(upper);
    int _13 = Int_random_MINUS_between(_9, _12);
    uint8_t _14 = Byte_from_MINUS_int(_13);
    return _14;
}

uint8_t Byte_zero() {
    return 0;
}

ByteOrder ByteOrder_BigEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_BigEndian_tag;
    return instance;
}

ByteOrder ByteOrder_LittleEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_LittleEndian_tag;
    return instance;
}

ByteOrder ByteOrder_blit(ByteOrder x) {
    ByteOrder _7 = x; // From the 'the' function.
    return _7;
}

ByteOrder ByteOrder_copy(ByteOrder* pRef) {
    ByteOrder copy = *pRef;
    if(pRef->_tag == ByteOrder_LittleEndian_tag) {

    }

    else if(pRef->_tag == ByteOrder_BigEndian_tag) {

    }

    return copy;
}

void ByteOrder_delete(ByteOrder p) {
  if(p._tag == ByteOrder_LittleEndian_tag) {

  }
  else if(p._tag == ByteOrder_BigEndian_tag) {

  }

}

int ByteOrder_get_MINUS_tag(ByteOrder *p) { return p->_tag; }
String ByteOrder_prn(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LittleEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BigEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String ByteOrder_str(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LittleEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BigEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

bool ByteRef__LT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__LT_(_8, _11);
    return _12;
}

bool ByteRef__EQ_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__EQ_(_8, _11);
    return _12;
}

bool ByteRef__GT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__GT_(_8, _11);
    return _12;
}

String ByteRef_format(String* s, uint8_t* x) {
    uint8_t _9 = Byte_copy(x);
    String _10 = Byte_format(s, _9);
    return _10;
}

String ByteRef_prn(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

String ByteRef_str(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

CellRange CellRange_copy(CellRange* pRef) {
    CellRange copy = *pRef;
    /* Ignore non-managed member 'min_MINUS_x' : Int */
    /* Ignore non-managed member 'max_MINUS_x' : Int */
    /* Ignore non-managed member 'min_MINUS_y' : Int */
    /* Ignore non-managed member 'max_MINUS_y' : Int */
    /* Ignore non-managed member 'min_MINUS_z' : Int */
    /* Ignore non-managed member 'max_MINUS_z' : Int */
    return copy;
}

void CellRange_delete(CellRange p) {
    /* Ignore non-managed member 'min_MINUS_x' : Int */
    /* Ignore non-managed member 'max_MINUS_x' : Int */
    /* Ignore non-managed member 'min_MINUS_y' : Int */
    /* Ignore non-managed member 'max_MINUS_y' : Int */
    /* Ignore non-managed member 'min_MINUS_z' : Int */
    /* Ignore non-managed member 'max_MINUS_z' : Int */
}

CellRange CellRange_init(int min_MINUS_x, int max_MINUS_x, int min_MINUS_y, int max_MINUS_y, int min_MINUS_z, int max_MINUS_z) {
    CellRange instance;
    instance.min_MINUS_x = min_MINUS_x;
    instance.max_MINUS_x = max_MINUS_x;
    instance.min_MINUS_y = min_MINUS_y;
    instance.max_MINUS_y = max_MINUS_y;
    instance.min_MINUS_z = min_MINUS_z;
    instance.max_MINUS_z = max_MINUS_z;
    return instance;
}

int* CellRange_max_MINUS_x(CellRange* p) { return (&(p->max_MINUS_x)); }

int* CellRange_max_MINUS_y(CellRange* p) { return (&(p->max_MINUS_y)); }

int* CellRange_max_MINUS_z(CellRange* p) { return (&(p->max_MINUS_z)); }

int* CellRange_min_MINUS_x(CellRange* p) { return (&(p->min_MINUS_x)); }

int* CellRange_min_MINUS_y(CellRange* p) { return (&(p->min_MINUS_y)); }

int* CellRange_min_MINUS_z(CellRange* p) { return (&(p->min_MINUS_z)); }

String CellRange_prn(CellRange *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "CellRange");
  temp = Int_prn(p->min_MINUS_x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "CellRange");
  temp = Int_prn(p->min_MINUS_x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

CellRange CellRange_set_MINUS_max_MINUS_x(CellRange p, int newValue) {
    /* Ignore non-managed member 'max_MINUS_x' : Int */
    p.max_MINUS_x = newValue;
    return p;
}


void CellRange_set_MINUS_max_MINUS_x_BANG_(CellRange* pRef, int newValue) {
    /* Ignore non-managed member 'max_MINUS_x' : Int */
    pRef->max_MINUS_x = newValue;
}


CellRange CellRange_set_MINUS_max_MINUS_y(CellRange p, int newValue) {
    /* Ignore non-managed member 'max_MINUS_y' : Int */
    p.max_MINUS_y = newValue;
    return p;
}


void CellRange_set_MINUS_max_MINUS_y_BANG_(CellRange* pRef, int newValue) {
    /* Ignore non-managed member 'max_MINUS_y' : Int */
    pRef->max_MINUS_y = newValue;
}


CellRange CellRange_set_MINUS_max_MINUS_z(CellRange p, int newValue) {
    /* Ignore non-managed member 'max_MINUS_z' : Int */
    p.max_MINUS_z = newValue;
    return p;
}


void CellRange_set_MINUS_max_MINUS_z_BANG_(CellRange* pRef, int newValue) {
    /* Ignore non-managed member 'max_MINUS_z' : Int */
    pRef->max_MINUS_z = newValue;
}


CellRange CellRange_set_MINUS_min_MINUS_x(CellRange p, int newValue) {
    /* Ignore non-managed member 'min_MINUS_x' : Int */
    p.min_MINUS_x = newValue;
    return p;
}


void CellRange_set_MINUS_min_MINUS_x_BANG_(CellRange* pRef, int newValue) {
    /* Ignore non-managed member 'min_MINUS_x' : Int */
    pRef->min_MINUS_x = newValue;
}


CellRange CellRange_set_MINUS_min_MINUS_y(CellRange p, int newValue) {
    /* Ignore non-managed member 'min_MINUS_y' : Int */
    p.min_MINUS_y = newValue;
    return p;
}


void CellRange_set_MINUS_min_MINUS_y_BANG_(CellRange* pRef, int newValue) {
    /* Ignore non-managed member 'min_MINUS_y' : Int */
    pRef->min_MINUS_y = newValue;
}


CellRange CellRange_set_MINUS_min_MINUS_z(CellRange p, int newValue) {
    /* Ignore non-managed member 'min_MINUS_z' : Int */
    p.min_MINUS_z = newValue;
    return p;
}


void CellRange_set_MINUS_min_MINUS_z_BANG_(CellRange* pRef, int newValue) {
    /* Ignore non-managed member 'min_MINUS_z' : Int */
    pRef->min_MINUS_z = newValue;
}


String CellRange_str(CellRange *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "CellRange");
  temp = Int_prn(p->min_MINUS_x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "CellRange");
  temp = Int_prn(p->min_MINUS_x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->min_MINUS_z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->max_MINUS_z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

CellRange CellRange_update_MINUS_max_MINUS_x(CellRange p, Lambda *updater) {
    p.max_MINUS_x = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.max_MINUS_x) : ((Fn__int_int)(*updater).callback)(p.max_MINUS_x);
    return p;
}


CellRange CellRange_update_MINUS_max_MINUS_y(CellRange p, Lambda *updater) {
    p.max_MINUS_y = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.max_MINUS_y) : ((Fn__int_int)(*updater).callback)(p.max_MINUS_y);
    return p;
}


CellRange CellRange_update_MINUS_max_MINUS_z(CellRange p, Lambda *updater) {
    p.max_MINUS_z = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.max_MINUS_z) : ((Fn__int_int)(*updater).callback)(p.max_MINUS_z);
    return p;
}


CellRange CellRange_update_MINUS_min_MINUS_x(CellRange p, Lambda *updater) {
    p.min_MINUS_x = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.min_MINUS_x) : ((Fn__int_int)(*updater).callback)(p.min_MINUS_x);
    return p;
}


CellRange CellRange_update_MINUS_min_MINUS_y(CellRange p, Lambda *updater) {
    p.min_MINUS_y = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.min_MINUS_y) : ((Fn__int_int)(*updater).callback)(p.min_MINUS_y);
    return p;
}


CellRange CellRange_update_MINUS_min_MINUS_z(CellRange p, Lambda *updater) {
    p.min_MINUS_z = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.min_MINUS_z) : ((Fn__int_int)(*updater).callback)(p.min_MINUS_z);
    return p;
}


bool Char_alpha_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_lower_MINUS_case_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_upper_MINUS_case_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

bool Char_alphanum_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_alpha_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_num_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

Char Char_blit(Char x) {
    Char _7 = x; // From the 'the' function.
    return _7;
}

int Char_hash(Char* k) {
    Char _9 = Char_copy(k);
    Char _10 = _9; // From the 'the' function.
    int _11 = Char_to_MINUS_int(_10);
    return _11;
}

bool Char_lower_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(97/*'a'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 122/*'z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

int Char_meaning(Char* char_MINUS_ref) {
    int _126;
    /* let */ {
        Char _8 = Char_copy(char_MINUS_ref);
        Char c = _8;
        int _125;
        /* let */ {
            Char gensym_MINUS_generated1002 = c;
            int _124;
            bool _18 = Char__EQ_(gensym_MINUS_generated1002, 48/*'0'*/);
            if (_18) {
                int _21 = 0;
                _124 = _21;
            } else {
                int _122;
                bool _27 = Char__EQ_(gensym_MINUS_generated1002, 49/*'1'*/);
                if (_27) {
                    int _30 = 1;
                    _122 = _30;
                } else {
                    int _120;
                    bool _36 = Char__EQ_(gensym_MINUS_generated1002, 50/*'2'*/);
                    if (_36) {
                        int _39 = 2;
                        _120 = _39;
                    } else {
                        int _118;
                        bool _45 = Char__EQ_(gensym_MINUS_generated1002, 51/*'3'*/);
                        if (_45) {
                            int _48 = 3;
                            _118 = _48;
                        } else {
                            int _116;
                            bool _54 = Char__EQ_(gensym_MINUS_generated1002, 52/*'4'*/);
                            if (_54) {
                                int _57 = 4;
                                _116 = _57;
                            } else {
                                int _114;
                                bool _63 = Char__EQ_(gensym_MINUS_generated1002, 53/*'5'*/);
                                if (_63) {
                                    int _66 = 5;
                                    _114 = _66;
                                } else {
                                    int _112;
                                    bool _72 = Char__EQ_(gensym_MINUS_generated1002, 54/*'6'*/);
                                    if (_72) {
                                        int _75 = 6;
                                        _112 = _75;
                                    } else {
                                        int _110;
                                        bool _81 = Char__EQ_(gensym_MINUS_generated1002, 55/*'7'*/);
                                        if (_81) {
                                            int _84 = 7;
                                            _110 = _84;
                                        } else {
                                            int _108;
                                            bool _90 = Char__EQ_(gensym_MINUS_generated1002, 56/*'8'*/);
                                            if (_90) {
                                                int _93 = 8;
                                                _108 = _93;
                                            } else {
                                                int _106;
                                                bool _99 = Char__EQ_(gensym_MINUS_generated1002, 57/*'9'*/);
                                                if (_99) {
                                                    int _102 = 9;
                                                    _106 = _102;
                                                } else {
                                                    int _105 = -1;
                                                    _106 = _105;
                                                }
                                                int _107 = _106;
                                                _108 = _107;
                                            }
                                            int _109 = _108;
                                            _110 = _109;
                                        }
                                        int _111 = _110;
                                        _112 = _111;
                                    }
                                    int _113 = _112;
                                    _114 = _113;
                                }
                                int _115 = _114;
                                _116 = _115;
                            }
                            int _117 = _116;
                            _118 = _117;
                        }
                        int _119 = _118;
                        _120 = _119;
                    }
                    int _121 = _120;
                    _122 = _121;
                }
                int _123 = _122;
                _124 = _123;
            }
            _125 = _124;
        }
        _126 = _125;
    }
    return _126;
}

bool Char_num_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(48/*'0'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 57/*'9'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_random() {
    int _5 = Int_random();
    Char _6 = Char_from_MINUS_int(_5);
    return _6;
}

Char Char_random_MINUS_between(Char a, Char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    Char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool Char_upper_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(65/*'A'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 90/*'Z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_zero() {
    Char _7 = Char_from_MINUS_int(0);
    Char _8 = _7; // From the 'the' function.
    return _8;
}

bool CharRef__LT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__LT_(_8, _11);
    return _12;
}

bool CharRef__EQ_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool CharRef__GT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__GT_(_8, _11);
    return _12;
}

Collidable Collidable_copy(Collidable* pRef) {
    Collidable copy = *pRef;
    copy.handle = Handle_copy__void(&(pRef->handle));
    copy.volume = Volume_copy(&(pRef->volume));
    /* Ignore non-managed member 'layer' : Uint32 */
    /* Ignore non-managed member 'mask' : Uint32 */
    /* Ignore non-managed member 'is_MINUS_trigger' : Bool */
    return copy;
}

void Collidable_delete(Collidable p) {
    Handle_delete__void(p.handle);
    Volume_delete(p.volume);
    /* Ignore non-managed member 'layer' : Uint32 */
    /* Ignore non-managed member 'mask' : Uint32 */
    /* Ignore non-managed member 'is_MINUS_trigger' : Bool */
}

Handle__void* Collidable_handle(Collidable* p) { return (&(p->handle)); }

Collidable Collidable_init(Handle__void handle, Volume volume, Uint32 layer, Uint32 mask, bool is_MINUS_trigger) {
    Collidable instance;
    instance.handle = handle;
    instance.volume = volume;
    instance.layer = layer;
    instance.mask = mask;
    instance.is_MINUS_trigger = is_MINUS_trigger;
    return instance;
}

bool* Collidable_is_MINUS_trigger(Collidable* p) { return (&(p->is_MINUS_trigger)); }

Uint32* Collidable_layer(Collidable* p) { return (&(p->layer)); }

Uint32* Collidable_mask(Collidable* p) { return (&(p->mask)); }

String Collidable_prn(Collidable *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Collidable");
  temp = Handle_prn__void(&p->handle); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Volume_prn(&p->volume); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->layer); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->mask); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_trigger); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Collidable");
  temp = Handle_prn__void(&p->handle);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Volume_prn(&p->volume);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->layer);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->mask);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_trigger);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Collidable Collidable_set_MINUS_handle(Collidable p, Handle__void newValue) {
    Handle_delete__void(p.handle);
    p.handle = newValue;
    return p;
}


void Collidable_set_MINUS_handle_BANG_(Collidable* pRef, Handle__void newValue) {
    Handle_delete__void(pRef->handle);
    pRef->handle = newValue;
}


Collidable Collidable_set_MINUS_is_MINUS_trigger(Collidable p, bool newValue) {
    /* Ignore non-managed member 'is_MINUS_trigger' : Bool */
    p.is_MINUS_trigger = newValue;
    return p;
}


void Collidable_set_MINUS_is_MINUS_trigger_BANG_(Collidable* pRef, bool newValue) {
    /* Ignore non-managed member 'is_MINUS_trigger' : Bool */
    pRef->is_MINUS_trigger = newValue;
}


Collidable Collidable_set_MINUS_layer(Collidable p, Uint32 newValue) {
    /* Ignore non-managed member 'layer' : Uint32 */
    p.layer = newValue;
    return p;
}


void Collidable_set_MINUS_layer_BANG_(Collidable* pRef, Uint32 newValue) {
    /* Ignore non-managed member 'layer' : Uint32 */
    pRef->layer = newValue;
}


Collidable Collidable_set_MINUS_mask(Collidable p, Uint32 newValue) {
    /* Ignore non-managed member 'mask' : Uint32 */
    p.mask = newValue;
    return p;
}


void Collidable_set_MINUS_mask_BANG_(Collidable* pRef, Uint32 newValue) {
    /* Ignore non-managed member 'mask' : Uint32 */
    pRef->mask = newValue;
}


Collidable Collidable_set_MINUS_volume(Collidable p, Volume newValue) {
    Volume_delete(p.volume);
    p.volume = newValue;
    return p;
}


void Collidable_set_MINUS_volume_BANG_(Collidable* pRef, Volume newValue) {
    Volume_delete(pRef->volume);
    pRef->volume = newValue;
}


String Collidable_str(Collidable *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Collidable");
  temp = Handle_prn__void(&p->handle); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Volume_prn(&p->volume); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->layer); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->mask); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_trigger); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Collidable");
  temp = Handle_prn__void(&p->handle);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Volume_prn(&p->volume);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->layer);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->mask);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->is_MINUS_trigger);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Collidable Collidable_update_MINUS_handle(Collidable p, Lambda *updater) {
    p.handle = (*updater).env ? ((Fn__LambdaEnv_Handle__void_Handle__void)(*updater).callback)((*updater).env, p.handle) : ((Fn__Handle__void_Handle__void)(*updater).callback)(p.handle);
    return p;
}


Collidable Collidable_update_MINUS_is_MINUS_trigger(Collidable p, Lambda *updater) {
    p.is_MINUS_trigger = (*updater).env ? ((Fn__LambdaEnv_bool_bool)(*updater).callback)((*updater).env, p.is_MINUS_trigger) : ((Fn__bool_bool)(*updater).callback)(p.is_MINUS_trigger);
    return p;
}


Collidable Collidable_update_MINUS_layer(Collidable p, Lambda *updater) {
    p.layer = (*updater).env ? ((Fn__LambdaEnv_Uint32_Uint32)(*updater).callback)((*updater).env, p.layer) : ((Fn__Uint32_Uint32)(*updater).callback)(p.layer);
    return p;
}


Collidable Collidable_update_MINUS_mask(Collidable p, Lambda *updater) {
    p.mask = (*updater).env ? ((Fn__LambdaEnv_Uint32_Uint32)(*updater).callback)((*updater).env, p.mask) : ((Fn__Uint32_Uint32)(*updater).callback)(p.mask);
    return p;
}


Collidable Collidable_update_MINUS_volume(Collidable p, Lambda *updater) {
    p.volume = (*updater).env ? ((Fn__LambdaEnv_Volume_Volume)(*updater).callback)((*updater).env, p.volume) : ((Fn__Volume_Volume)(*updater).callback)(p.volume);
    return p;
}


Volume* Collidable_volume(Collidable* p) { return (&(p->volume)); }

Handle__void* Collision_a(Collision* c) {
    ContactSet* _7 = Collision_contact_MINUS_set(c);
    Handle__void* _8 = ContactSet_a(_7);
    return _8;
}

Handle__void* Collision_b(Collision* c) {
    ContactSet* _7 = Collision_contact_MINUS_set(c);
    Handle__void* _8 = ContactSet_b(_7);
    return _8;
}

Maybe__ContactSet Collision_collide(Handle__void* h1, Volume* v1, Handle__void* h2, Volume* v2) {
    Maybe__ContactSet _408;
    if(v1->_tag == Volume_Box_tag) {
        Volume* _8_temp = v1;
        AABB* b1 = &_8_temp->u.Box.member0;
        // Case expr:
        Maybe__ContactSet _98;
        if(v2->_tag == Volume_Box_tag) {
            Volume* _13_temp = v2;
            AABB* b2 = &_13_temp->u.Box.member0;
            // Case expr:
            Maybe__Contact _21 = Geometry_AABB_collide_MINUS_aabb(b1, b2);
            Maybe__ContactSet _41;
            if(_21._tag == Maybe__Contact_Just_tag) {
                Maybe__Contact _21_temp = _21;
                Contact c = _21_temp.u.Just.member0;
                // Case expr:
                Handle__void _29 = Handle_copy__void(h1);
                Handle__void _32 = Handle_copy__void(h2);
                Array _34 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_34.data)[0] = c;
                ContactSet _35 = ContactSet_init(_29, _32, _34);
                Maybe__ContactSet _36 = Maybe_Just__ContactSet(_35);
                _41 = _36;
            }
            else if(_21._tag == Maybe__Contact_Nothing_tag) {
                Maybe__Contact _21_temp = _21;
                // Case expr:
                Maybe__ContactSet _40 = Maybe_Nothing__ContactSet();
                _41 = _40;
            }
            else UNHANDLED("collision.carp", 164);
            _98 = _41;
        }
        else if(v2->_tag == Volume_Ball_tag) {
            Volume* _13_temp = v2;
            Sphere* s2 = &_13_temp->u.Ball.member0;
            // Case expr:
            Maybe__Contact _49 = Geometry_Sphere_collide_MINUS_aabb(s2, b1);
            Maybe__ContactSet _73;
            if(_49._tag == Maybe__Contact_Just_tag) {
                Maybe__Contact _49_temp = _49;
                Contact c = _49_temp.u.Just.member0;
                // Case expr:
                Handle__void _59 = Handle_copy__void(h2);
                Handle__void _62 = Handle_copy__void(h1);
                Array _64 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_64.data)[0] = c;
                ContactSet _65 = ContactSet_init(_59, _62, _64);
                ContactSet* _66 = &_65; // ref
                ContactSet _67 = ContactSet_reverse(_66);
                Maybe__ContactSet _68 = Maybe_Just__ContactSet(_67);
                _73 = _68;
                ContactSet_delete(_65);
            }
            else if(_49._tag == Maybe__Contact_Nothing_tag) {
                Maybe__Contact _49_temp = _49;
                // Case expr:
                Maybe__ContactSet _72 = Maybe_Nothing__ContactSet();
                _73 = _72;
            }
            else UNHANDLED("collision.carp", 168);
            _98 = _73;
        }
        else if(v2->_tag == Volume_Sdf_tag) {
            Volume* _13_temp = v2;
            SDF* sdf2 = &_13_temp->u.Sdf.member0;
            // Case expr:
            Maybe__ContactSet _83 = Collision_collide_MINUS_box_MINUS_sdf(h1, b1, h2, sdf2);
            Maybe__ContactSet _94;
            if(_83._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _83_temp = _83;
                ContactSet cs = _83_temp.u.Just.member0;
                // Case expr:
                Maybe__ContactSet _89 = Maybe_Just__ContactSet(cs);
                _94 = _89;
            }
            else if(_83._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _83_temp = _83;
                // Case expr:
                Maybe__ContactSet _93 = Maybe_Nothing__ContactSet();
                _94 = _93;
            }
            else UNHANDLED("collision.carp", 172);
            _98 = _94;
        }
        else if(true) {
            Volume* _13_temp = v2;
            Volume* wildcard_95 = _13_temp;
            Maybe__ContactSet _97 = Maybe_Nothing__ContactSet();
            _98 = _97;
        }
        else UNHANDLED("collision.carp", 162);
        _408 = _98;
    }
    else if(v1->_tag == Volume_Ball_tag) {
        Volume* _8_temp = v1;
        Sphere* s1 = &_8_temp->u.Ball.member0;
        // Case expr:
        Maybe__ContactSet _247;
        if(v2->_tag == Volume_Box_tag) {
            Volume* _103_temp = v2;
            AABB* b2 = &_103_temp->u.Box.member0;
            // Case expr:
            Maybe__Contact _111 = Geometry_Sphere_collide_MINUS_aabb(s1, b2);
            Maybe__ContactSet _131;
            if(_111._tag == Maybe__Contact_Just_tag) {
                Maybe__Contact _111_temp = _111;
                Contact c = _111_temp.u.Just.member0;
                // Case expr:
                Handle__void _119 = Handle_copy__void(h1);
                Handle__void _122 = Handle_copy__void(h2);
                Array _124 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_124.data)[0] = c;
                ContactSet _125 = ContactSet_init(_119, _122, _124);
                Maybe__ContactSet _126 = Maybe_Just__ContactSet(_125);
                _131 = _126;
            }
            else if(_111._tag == Maybe__Contact_Nothing_tag) {
                Maybe__Contact _111_temp = _111;
                // Case expr:
                Maybe__ContactSet _130 = Maybe_Nothing__ContactSet();
                _131 = _130;
            }
            else UNHANDLED("collision.carp", 179);
            _247 = _131;
        }
        else if(v2->_tag == Volume_Ball_tag) {
            Volume* _103_temp = v2;
            Sphere* s2 = &_103_temp->u.Ball.member0;
            // Case expr:
            Maybe__Contact _139 = Geometry_Sphere_collide_MINUS_sphere(s1, s2);
            Maybe__ContactSet _159;
            if(_139._tag == Maybe__Contact_Just_tag) {
                Maybe__Contact _139_temp = _139;
                Contact c = _139_temp.u.Just.member0;
                // Case expr:
                Handle__void _147 = Handle_copy__void(h1);
                Handle__void _150 = Handle_copy__void(h2);
                Array _152 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_152.data)[0] = c;
                ContactSet _153 = ContactSet_init(_147, _150, _152);
                Maybe__ContactSet _154 = Maybe_Just__ContactSet(_153);
                _159 = _154;
            }
            else if(_139._tag == Maybe__Contact_Nothing_tag) {
                Maybe__Contact _139_temp = _139;
                // Case expr:
                Maybe__ContactSet _158 = Maybe_Nothing__ContactSet();
                _159 = _158;
            }
            else UNHANDLED("collision.carp", 183);
            _247 = _159;
        }
        else if(v2->_tag == Volume_Surface_tag) {
            Volume* _103_temp = v2;
            Plane* p2 = &_103_temp->u.Surface.member0;
            // Case expr:
            Maybe__ContactSet _218;
            /* let */ {
                Vector3__double* _169 = Sphere_center(s1);
                double _170 = Plane_distance_MINUS_to_MINUS_point(p2, _169);
                double dist = _170;
                double* _175 = Sphere_radius(s1);
                double _176 = Double_copy(_175);
                double r = _176;
                Maybe__ContactSet _217;
                bool _182 = _LT__EQ___double(dist, r);
                if (_182) {
                    Handle__void _188 = Handle_copy__void(h1);
                    Handle__void _191 = Handle_copy__void(h2);
                    Array _209 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                    double _196 = Double__MINUS_(r, dist);
                    Vector3__double* _201 = Sphere_center(s1);
                    Vector3__double _202 = Plane_project_MINUS_point(p2, _201);
                    Vector3__double* _206 = Plane_normal(p2);
                    Vector3__double _207 = Vector3_copy__double(_206);
                    Contact _208 = Contact_init(_196, _202, _207);
                    ((Contact*)_209.data)[0] = _208;
                    ContactSet _210 = ContactSet_init(_188, _191, _209);
                    Maybe__ContactSet _211 = Maybe_Just__ContactSet(_210);
                    Maybe__ContactSet _212 = _211;
                    _217 = _212;
                } else {
                    Maybe__ContactSet _215 = Maybe_Nothing__ContactSet();
                    Maybe__ContactSet _216 = _215;
                    _217 = _216;
                }
                _218 = _217;
            }
            _247 = _218;
        }
        else if(v2->_tag == Volume_Sdf_tag) {
            Volume* _103_temp = v2;
            SDF* sdf = &_103_temp->u.Sdf.member0;
            // Case expr:
            Maybe__Contact _226 = Geometry_Sphere_collide_MINUS_sdf(s1, sdf);
            Maybe__ContactSet _246;
            if(_226._tag == Maybe__Contact_Just_tag) {
                Maybe__Contact _226_temp = _226;
                Contact c = _226_temp.u.Just.member0;
                // Case expr:
                Handle__void _234 = Handle_copy__void(h1);
                Handle__void _237 = Handle_copy__void(h2);
                Array _239 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_239.data)[0] = c;
                ContactSet _240 = ContactSet_init(_234, _237, _239);
                Maybe__ContactSet _241 = Maybe_Just__ContactSet(_240);
                _246 = _241;
            }
            else if(_226._tag == Maybe__Contact_Nothing_tag) {
                Maybe__Contact _226_temp = _226;
                // Case expr:
                Maybe__ContactSet _245 = Maybe_Nothing__ContactSet();
                _246 = _245;
            }
            else UNHANDLED("collision.carp", 196);
            _247 = _246;
        }
        else UNHANDLED("collision.carp", 177);
        _408 = _247;
    }
    else if(v1->_tag == Volume_Surface_tag) {
        Volume* _8_temp = v1;
        Plane* p1 = &_8_temp->u.Surface.member0;
        // Case expr:
        Maybe__ContactSet _306;
        if(v2->_tag == Volume_Ball_tag) {
            Volume* _252_temp = v2;
            Sphere* s2 = &_252_temp->u.Ball.member0;
            // Case expr:
            Lambda _257 = { .callback = (void*)Collision_collide, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Collision.collide LookupRecursive
            Maybe__ContactSet _262 = _257.env ? ((Maybe__ContactSet(*)(LambdaEnv, Handle__void*, Volume*, Handle__void*, Volume*))_257.callback)(_257.env, h2, v2, h1, v1) : ((Maybe__ContactSet(*)(Handle__void*, Volume*, Handle__void*, Volume*))_257.callback)(h2, v2, h1, v1);
            Maybe__ContactSet _277;
            if(_262._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _262_temp = _262;
                ContactSet cs = _262_temp.u.Just.member0;
                // Case expr:
                ContactSet* _270 = &cs; // ref
                ContactSet _271 = ContactSet_reverse(_270);
                Maybe__ContactSet _272 = Maybe_Just__ContactSet(_271);
                _277 = _272;
                ContactSet_delete(cs);
            }
            else if(_262._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _262_temp = _262;
                // Case expr:
                Maybe__ContactSet _276 = Maybe_Nothing__ContactSet();
                _277 = _276;
            }
            else UNHANDLED("collision.carp", 202);
            _306 = _277;
        }
        else if(v2->_tag == Volume_Sdf_tag) {
            Volume* _252_temp = v2;
            SDF* sdf2 = &_252_temp->u.Sdf.member0;
            // Case expr:
            Maybe__ContactSet _287 = Collision_collide_MINUS_sdf_MINUS_plane(h2, sdf2, h1, p1);
            Maybe__ContactSet _302;
            if(_287._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _287_temp = _287;
                ContactSet cs = _287_temp.u.Just.member0;
                // Case expr:
                ContactSet* _295 = &cs; // ref
                ContactSet _296 = ContactSet_reverse(_295);
                Maybe__ContactSet _297 = Maybe_Just__ContactSet(_296);
                _302 = _297;
                ContactSet_delete(cs);
            }
            else if(_287._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _287_temp = _287;
                // Case expr:
                Maybe__ContactSet _301 = Maybe_Nothing__ContactSet();
                _302 = _301;
            }
            else UNHANDLED("collision.carp", 206);
            _306 = _302;
        }
        else if(true) {
            Volume* _252_temp = v2;
            Volume* wildcard_303 = _252_temp;
            Maybe__ContactSet _305 = Maybe_Nothing__ContactSet();
            _306 = _305;
        }
        else UNHANDLED("collision.carp", 200);
        _408 = _306;
    }
    else if(v1->_tag == Volume_Sdf_tag) {
        Volume* _8_temp = v1;
        SDF* sdf = &_8_temp->u.Sdf.member0;
        // Case expr:
        Maybe__ContactSet _407;
        if(v2->_tag == Volume_Box_tag) {
            Volume* _311_temp = v2;
            AABB* b2 = &_311_temp->u.Box.member0;
            // Case expr:
            Maybe__ContactSet _321 = Collision_collide_MINUS_box_MINUS_sdf(h2, b2, h1, sdf);
            Maybe__ContactSet _336;
            if(_321._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _321_temp = _321;
                ContactSet cs = _321_temp.u.Just.member0;
                // Case expr:
                ContactSet* _329 = &cs; // ref
                ContactSet _330 = ContactSet_reverse(_329);
                Maybe__ContactSet _331 = Maybe_Just__ContactSet(_330);
                _336 = _331;
                ContactSet_delete(cs);
            }
            else if(_321._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _321_temp = _321;
                // Case expr:
                Maybe__ContactSet _335 = Maybe_Nothing__ContactSet();
                _336 = _335;
            }
            else UNHANDLED("collision.carp", 213);
            _407 = _336;
        }
        else if(v2->_tag == Volume_Ball_tag) {
            Volume* _311_temp = v2;
            Sphere* s2 = &_311_temp->u.Ball.member0;
            // Case expr:
            Lambda _341 = { .callback = (void*)Collision_collide, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Collision.collide LookupRecursive
            Maybe__ContactSet _346 = _341.env ? ((Maybe__ContactSet(*)(LambdaEnv, Handle__void*, Volume*, Handle__void*, Volume*))_341.callback)(_341.env, h2, v2, h1, v1) : ((Maybe__ContactSet(*)(Handle__void*, Volume*, Handle__void*, Volume*))_341.callback)(h2, v2, h1, v1);
            Maybe__ContactSet _361;
            if(_346._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _346_temp = _346;
                ContactSet cs = _346_temp.u.Just.member0;
                // Case expr:
                ContactSet* _354 = &cs; // ref
                ContactSet _355 = ContactSet_reverse(_354);
                Maybe__ContactSet _356 = Maybe_Just__ContactSet(_355);
                _361 = _356;
                ContactSet_delete(cs);
            }
            else if(_346._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _346_temp = _346;
                // Case expr:
                Maybe__ContactSet _360 = Maybe_Nothing__ContactSet();
                _361 = _360;
            }
            else UNHANDLED("collision.carp", 217);
            _407 = _361;
        }
        else if(v2->_tag == Volume_Surface_tag) {
            Volume* _311_temp = v2;
            Plane* p2 = &_311_temp->u.Surface.member0;
            // Case expr:
            Maybe__ContactSet _371 = Collision_collide_MINUS_sdf_MINUS_plane(h1, sdf, h2, p2);
            Maybe__ContactSet _382;
            if(_371._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _371_temp = _371;
                ContactSet cs = _371_temp.u.Just.member0;
                // Case expr:
                Maybe__ContactSet _377 = Maybe_Just__ContactSet(cs);
                _382 = _377;
            }
            else if(_371._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _371_temp = _371;
                // Case expr:
                Maybe__ContactSet _381 = Maybe_Nothing__ContactSet();
                _382 = _381;
            }
            else UNHANDLED("collision.carp", 221);
            _407 = _382;
        }
        else if(v2->_tag == Volume_Sdf_tag) {
            Volume* _311_temp = v2;
            SDF* sdf2 = &_311_temp->u.Sdf.member0;
            // Case expr:
            Maybe__ContactSet _392 = Collision_collide_MINUS_sdf_MINUS_sdf(h1, sdf, h2, sdf2);
            Maybe__ContactSet _403;
            if(_392._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _392_temp = _392;
                ContactSet cs = _392_temp.u.Just.member0;
                // Case expr:
                Maybe__ContactSet _398 = Maybe_Just__ContactSet(cs);
                _403 = _398;
            }
            else if(_392._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _392_temp = _392;
                // Case expr:
                Maybe__ContactSet _402 = Maybe_Nothing__ContactSet();
                _403 = _402;
            }
            else UNHANDLED("collision.carp", 225);
            _407 = _403;
        }
        else if(true) {
            Volume* _311_temp = v2;
            Volume* wildcard_404 = _311_temp;
            Maybe__ContactSet _406 = Maybe_Nothing__ContactSet();
            _407 = _406;
        }
        else UNHANDLED("collision.carp", 211);
        _408 = _407;
    }
    else UNHANDLED("collision.carp", 160);
    return _408;
}

Maybe__ContactSet Collision_collide_MINUS_box_MINUS_sdf(Handle__void* h_MINUS_box, AABB* box, Handle__void* h_MINUS_sdf, SDF* sdf) {
    Maybe__ContactSet _333;
    /* let */ {
        Vector3__double* _11 = AABB_min(box);
        Vector3__double* min_MINUS_pt = _11;
        Vector3__double* _15 = AABB_max(box);
        Vector3__double* max_MINUS_pt = _15;
        Vector3__double _22 = Vector3_add__double(min_MINUS_pt, max_MINUS_pt);
        Vector3__double* _23 = &_22; // ref
        Vector3__double _25 = Vector3_mul__double(_23, 0.5);
        Vector3__double center = _25;
        Vector3__double _32 = Vector3_sub__double(max_MINUS_pt, min_MINUS_pt);
        Vector3__double* _33 = &_32; // ref
        Vector3__double _35 = Vector3_mul__double(_33, 0.5);
        Vector3__double e = _35;
        Vector3__double* _41 = &center; // ref
        Vector3__double _42 = SDF_normal_MINUS_world(sdf, _41);
        Vector3__double n = _42;
        Vector3__double* _50 = &e; // ref
        double* _51 = Vector3_x__double(_50);
        double _52 = Double_copy(_51);
        Vector3__double* _58 = &n; // ref
        double* _59 = Vector3_x__double(_58);
        double _60 = Double_copy(_59);
        double _61 = Double_abs(_60);
        double _62 = Double__MUL_(_52, _61);
        Vector3__double* _69 = &e; // ref
        double* _70 = Vector3_y__double(_69);
        double _71 = Double_copy(_70);
        Vector3__double* _77 = &n; // ref
        double* _78 = Vector3_y__double(_77);
        double _79 = Double_copy(_78);
        double _80 = Double_abs(_79);
        double _81 = Double__MUL_(_71, _80);
        Vector3__double* _87 = &e; // ref
        double* _88 = Vector3_z__double(_87);
        double _89 = Double_copy(_88);
        Vector3__double* _95 = &n; // ref
        double* _96 = Vector3_z__double(_95);
        double _97 = Double_copy(_96);
        double _98 = Double_abs(_97);
        double _99 = Double__MUL_(_89, _98);
        double _100 = Double__PLUS_(_81, _99);
        double _101 = Double__PLUS_(_62, _100);
        double r = _101;
        Vector3__double* _106 = &center; // ref
        Vector3__double* _111 = &n; // ref
        Vector3__double _113 = Vector3_mul__double(_111, r);
        Vector3__double* _114 = &_113; // ref
        Vector3__double _115 = Vector3_sub__double(_106, _114);
        Vector3__double p = _115;
        /* let */ {
            int iter = 0;
            bool _1000008 = Int__LT_(iter, 3);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    Vector3__double* _134 = &p; // ref
                    double _135 = SDF_distance_MINUS_world(sdf, _134);
                    double d = _135;
                    Vector3__double* _141 = &p; // ref
                    Vector3__double _142 = SDF_normal_MINUS_world(sdf, _141);
                    Vector3__double curr_MINUS_n = _142;
                    Vector3__double* _149 = &p; // ref
                    Vector3__double* _154 = &curr_MINUS_n; // ref
                    Vector3__double _156 = Vector3_mul__double(_154, d);
                    Vector3__double* _157 = &_156; // ref
                    Vector3__double _158 = Vector3_sub__double(_149, _157);
                    Vector3_delete__double(p);
                    p = _158;  // (Vector3 Double) = (Vector3 Double)
                    Vector3_delete__double(_156);
                    Vector3_delete__double(curr_MINUS_n);
                }
                int _1000015 = Int__PLUS_(iter, 1);
                iter = _1000015;  // Int = Int
                bool _1000008 = Int__LT_(iter, 3);
                _1000006 = _1000008;
            }
        }
        Maybe__ContactSet _331;
        /* let */ {
            Vector3__double* _179 = &p; // ref
            double* _180 = Vector3_x__double(_179);
            double _181 = Double_copy(_180);
            Vector3__double* _186 = &center; // ref
            double* _187 = Vector3_x__double(_186);
            double _188 = Double_copy(_187);
            double _189 = Double__MINUS_(_181, _188);
            double _190 = Double_abs(_189);
            double dx = _190;
            Vector3__double* _198 = &p; // ref
            double* _199 = Vector3_y__double(_198);
            double _200 = Double_copy(_199);
            Vector3__double* _205 = &center; // ref
            double* _206 = Vector3_y__double(_205);
            double _207 = Double_copy(_206);
            double _208 = Double__MINUS_(_200, _207);
            double _209 = Double_abs(_208);
            double dy = _209;
            Vector3__double* _217 = &p; // ref
            double* _218 = Vector3_z__double(_217);
            double _219 = Double_copy(_218);
            Vector3__double* _224 = &center; // ref
            double* _225 = Vector3_z__double(_224);
            double _226 = Double_copy(_225);
            double _227 = Double__MINUS_(_219, _226);
            double _228 = Double_abs(_227);
            double dz = _228;
            Vector3__double* _234 = &e; // ref
            double* _235 = Vector3_x__double(_234);
            double _236 = Double_copy(_235);
            double ex = _236;
            Vector3__double* _242 = &e; // ref
            double* _243 = Vector3_y__double(_242);
            double _244 = Double_copy(_243);
            double ey = _244;
            Vector3__double* _250 = &e; // ref
            double* _251 = Vector3_z__double(_250);
            double _252 = Double_copy(_251);
            double ez = _252;
            Maybe__ContactSet _330;
            bool _280;
            bool _259 = Double__LT_(dx, ex);
            if (_259) {
                bool _275;
                bool _265 = Double__LT_(dy, ey);
                if (_265) {
                    bool _270 = Double__LT_(dz, ez);
                    bool _271 = _270;
                    _275 = _271;
                } else {
                    bool _274 = false;
                    _275 = _274;
                }
                bool _276 = _275;
                _280 = _276;
            } else {
                bool _279 = false;
                _280 = _279;
            }
            if (_280) {
                Maybe__ContactSet _324;
                /* let */ {
                    double _288 = Double__MINUS_(ex, dx);
                    double _293 = Double__MINUS_(ey, dy);
                    double _297 = Double__MINUS_(ez, dz);
                    double _298 = min__double(_293, _297);
                    double _299 = min__double(_288, _298);
                    double depth = _299;
                    Vector3__double* _305 = &p; // ref
                    Vector3__double _306 = SDF_normal_MINUS_world(sdf, _305);
                    Vector3__double norm = _306;
                    Handle__void _312 = Handle_copy__void(h_MINUS_box);
                    Handle__void _315 = Handle_copy__void(h_MINUS_sdf);
                    Array _321 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                    Contact _320 = Contact_init(depth, p, norm);
                    ((Contact*)_321.data)[0] = _320;
                    ContactSet _322 = ContactSet_init(_312, _315, _321);
                    Maybe__ContactSet _323 = Maybe_Just__ContactSet(_322);
                    _324 = _323;
                }
                Maybe__ContactSet _325 = _324;
                _330 = _325;
            } else {
                Maybe__ContactSet _328 = Maybe_Nothing__ContactSet();
                Maybe__ContactSet _329 = _328;
                Vector3_delete__double(p);
                _330 = _329;
            }
            _331 = _330;
        }
        Maybe__ContactSet _332 = _331;
        _333 = _332;
        Vector3_delete__double(_113);
        Vector3_delete__double(_22);
        Vector3_delete__double(_32);
        Vector3_delete__double(center);
        Vector3_delete__double(e);
        Vector3_delete__double(n);
    }
    return _333;
}

Maybe__ContactSet Collision_collide_MINUS_sdf_MINUS_plane(Handle__void* h_MINUS_sdf, SDF* sdf, Handle__void* h_MINUS_plane, Plane* plane) {
    BaseShape* _11 = SDF_base(sdf);
    BaseShape _12 = BaseShape_copy(_11);
    Maybe__ContactSet _139;
    if(_12._tag == BaseShape_Ball_tag) {
        BaseShape _12_temp = _12;
        double r = _12_temp.u.Ball.member0;
        // Case expr:
        Maybe__ContactSet _135;
        /* let */ {
            Vector3__double* _20 = SDF_position(sdf);
            Vector3__double* pos = _20;
            Vector3__double* _25 = Plane_normal(plane);
            Vector3__double _26 = Vector3_copy__double(_25);
            Vector3__double plane_MINUS_norm = _26;
            Vector3__double* _34 = &plane_MINUS_norm; // ref
            Vector3__double _36 = Vector3_mul__double(_34, r);
            Vector3__double* _37 = &_36; // ref
            Vector3__double _38 = Vector3_sub__double(pos, _37);
            Vector3__double p = _38;
            /* let */ {
                int iter = 0;
                bool _1000009 = Int__LT_(iter, 5);
                bool _1000007 = _1000009;
                while (_1000007) {
                    /* let */ {
                        Vector3__double* _57 = &p; // ref
                        double _58 = SDF_distance_MINUS_world(sdf, _57);
                        double d = _58;
                        Vector3__double* _64 = &p; // ref
                        Vector3__double _65 = SDF_normal_MINUS_world(sdf, _64);
                        Vector3__double n = _65;
                        Vector3__double* _72 = &p; // ref
                        Vector3__double* _77 = &n; // ref
                        Vector3__double _79 = Vector3_mul__double(_77, d);
                        Vector3__double* _80 = &_79; // ref
                        Vector3__double _81 = Vector3_sub__double(_72, _80);
                        Vector3_delete__double(p);
                        p = _81;  // (Vector3 Double) = (Vector3 Double)
                        Vector3_delete__double(_79);
                        Vector3_delete__double(n);
                    }
                    int _1000016 = Int__PLUS_(iter, 1);
                    iter = _1000016;  // Int = Int
                    bool _1000009 = Int__LT_(iter, 5);
                    _1000007 = _1000009;
                }
            }
            Maybe__ContactSet _133;
            /* let */ {
                Vector3__double* _100 = &p; // ref
                double _101 = Plane_distance_MINUS_to_MINUS_point(plane, _100);
                double plane_MINUS_dist = _101;
                Maybe__ContactSet _132;
                bool _107 = Double__LT_(plane_MINUS_dist, 0.0);
                if (_107) {
                    Handle__void _113 = Handle_copy__void(h_MINUS_sdf);
                    Handle__void _116 = Handle_copy__void(h_MINUS_plane);
                    Array _124 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                    double _120 = Double_neg(plane_MINUS_dist);
                    Contact _123 = Contact_init(_120, p, plane_MINUS_norm);
                    ((Contact*)_124.data)[0] = _123;
                    ContactSet _125 = ContactSet_init(_113, _116, _124);
                    Maybe__ContactSet _126 = Maybe_Just__ContactSet(_125);
                    Maybe__ContactSet _127 = _126;
                    _132 = _127;
                } else {
                    Maybe__ContactSet _130 = Maybe_Nothing__ContactSet();
                    Maybe__ContactSet _131 = _130;
                    Vector3_delete__double(p);
                    Vector3_delete__double(plane_MINUS_norm);
                    _132 = _131;
                }
                _133 = _132;
            }
            Maybe__ContactSet _134 = _133;
            _135 = _134;
            Vector3_delete__double(_36);
        }
        _139 = _135;
    }
    else if(true) {
        BaseShape _12_temp = _12;
        BaseShape wildcard_136 = _12_temp;
        Maybe__ContactSet _138 = Maybe_Nothing__ContactSet();
        _139 = _138;
        BaseShape_delete(wildcard_136);
    }
    else UNHANDLED("collision.carp", 76);
    return _139;
}

Maybe__ContactSet Collision_collide_MINUS_sdf_MINUS_sdf(Handle__void* h1, SDF* sdf1, Handle__void* h2, SDF* sdf2) {
    BaseShape* _11 = SDF_base(sdf1);
    BaseShape _12 = BaseShape_copy(_11);
    Maybe__ContactSet _308;
    if(_12._tag == BaseShape_Ball_tag) {
        BaseShape _12_temp = _12;
        double r1 = _12_temp.u.Ball.member0;
        // Case expr:
        BaseShape* _20 = SDF_base(sdf2);
        BaseShape _21 = BaseShape_copy(_20);
        Maybe__ContactSet _264;
        if(_21._tag == BaseShape_Ball_tag) {
            BaseShape _21_temp = _21;
            double r2 = _21_temp.u.Ball.member0;
            // Case expr:
            Maybe__ContactSet _249;
            /* let */ {
                Vector3__double* _29 = SDF_position(sdf1);
                Vector3__double* pos1 = _29;
                Vector3__double* _33 = SDF_position(sdf2);
                Vector3__double* pos2 = _33;
                Vector3__double _38 = Vector3_sub__double(pos2, pos1);
                Vector3__double diff = _38;
                Vector3__double* _43 = &diff; // ref
                double _44 = Vector3_mag__double(_43);
                double dist = _44;
                Vector3__double _65;
                bool _50 = Double__LT_(dist, 1.0e-4);
                if (_50) {
                    Vector3__double _56 = Vector3_init__double(0.0, 1.0, 0.0);
                    Vector3__double _57 = _56;
                    _65 = _57;
                } else {
                    Vector3__double* _62 = &diff; // ref
                    Vector3__double _63 = Vector3_normalize__double(_62);
                    Vector3__double _64 = _63;
                    _65 = _64;
                }
                Vector3__double dir = _65;
                Vector3__double* _73 = &dir; // ref
                double _80 = Double__MINUS_(r1, r2);
                double _82 = Double__PLUS_(_80, dist);
                double _83 = Double__MUL_(0.5, _82);
                Vector3__double _84 = Vector3_mul__double(_73, _83);
                Vector3__double* _85 = &_84; // ref
                Vector3__double _86 = Vector3_add__double(pos1, _85);
                Vector3__double p = _86;
                /* let */ {
                    int iter = 0;
                    bool _1000013 = Int__LT_(iter, 5);
                    bool _1000011 = _1000013;
                    while (_1000011) {
                        /* let */ {
                            Vector3__double* _105 = &p; // ref
                            double _106 = SDF_distance_MINUS_world(sdf1, _105);
                            double d1 = _106;
                            Vector3__double* _112 = &p; // ref
                            double _113 = SDF_distance_MINUS_world(sdf2, _112);
                            double d2 = _113;
                            Vector3__double* _119 = &p; // ref
                            Vector3__double _120 = SDF_normal_MINUS_world(sdf1, _119);
                            Vector3__double n1 = _120;
                            Vector3__double* _126 = &p; // ref
                            Vector3__double _127 = SDF_normal_MINUS_world(sdf2, _126);
                            Vector3__double n2 = _127;
                            Vector3__double* _134 = &n1; // ref
                            Vector3__double _136 = Vector3_mul__double(_134, d1);
                            Vector3__double* _137 = &_136; // ref
                            Vector3__double* _142 = &n2; // ref
                            Vector3__double _144 = Vector3_mul__double(_142, d2);
                            Vector3__double* _145 = &_144; // ref
                            Vector3__double _146 = Vector3_add__double(_137, _145);
                            Vector3__double step = _146;
                            Vector3__double* _153 = &p; // ref
                            Vector3__double* _158 = &step; // ref
                            Vector3__double _160 = Vector3_mul__double(_158, 0.5);
                            Vector3__double* _161 = &_160; // ref
                            Vector3__double _162 = Vector3_sub__double(_153, _161);
                            Vector3_delete__double(p);
                            p = _162;  // (Vector3 Double) = (Vector3 Double)
                            Vector3_delete__double(_136);
                            Vector3_delete__double(_144);
                            Vector3_delete__double(_160);
                            Vector3_delete__double(n1);
                            Vector3_delete__double(n2);
                            Vector3_delete__double(step);
                        }
                        int _1000020 = Int__PLUS_(iter, 1);
                        iter = _1000020;  // Int = Int
                        bool _1000013 = Int__LT_(iter, 5);
                        _1000011 = _1000013;
                    }
                }
                Maybe__ContactSet _247;
                /* let */ {
                    Vector3__double* _181 = &p; // ref
                    double _182 = SDF_distance_MINUS_world(sdf1, _181);
                    double d1 = _182;
                    Vector3__double* _188 = &p; // ref
                    double _189 = SDF_distance_MINUS_world(sdf2, _188);
                    double d2 = _189;
                    Maybe__ContactSet _246;
                    bool _206;
                    bool _196 = Double__LT_(d1, 0.0);
                    if (_196) {
                        bool _201 = Double__LT_(d2, 0.0);
                        bool _202 = _201;
                        _206 = _202;
                    } else {
                        bool _205 = false;
                        _206 = _205;
                    }
                    if (_206) {
                        Maybe__ContactSet _240;
                        /* let */ {
                            double _214 = Double__PLUS_(d1, d2);
                            double _215 = Double_neg(_214);
                            double depth = _215;
                            Vector3__double* _221 = &p; // ref
                            Vector3__double _222 = SDF_normal_MINUS_world(sdf2, _221);
                            Vector3__double norm = _222;
                            Handle__void _228 = Handle_copy__void(h1);
                            Handle__void _231 = Handle_copy__void(h2);
                            Array _237 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                            Contact _236 = Contact_init(depth, p, norm);
                            ((Contact*)_237.data)[0] = _236;
                            ContactSet _238 = ContactSet_init(_228, _231, _237);
                            Maybe__ContactSet _239 = Maybe_Just__ContactSet(_238);
                            _240 = _239;
                        }
                        Maybe__ContactSet _241 = _240;
                        _246 = _241;
                    } else {
                        Maybe__ContactSet _244 = Maybe_Nothing__ContactSet();
                        Maybe__ContactSet _245 = _244;
                        Vector3_delete__double(p);
                        _246 = _245;
                    }
                    _247 = _246;
                }
                Maybe__ContactSet _248 = _247;
                _249 = _248;
                Vector3_delete__double(_84);
                Vector3_delete__double(diff);
                Vector3_delete__double(dir);
            }
            _264 = _249;
        }
        else if(_21._tag == BaseShape_Surface_tag) {
            BaseShape _21_temp = _21;
            Plane plane2 = _21_temp.u.Surface.member0;
            // Case expr:
            Plane* _259 = &plane2; // ref
            Maybe__ContactSet _260 = Collision_collide_MINUS_sdf_MINUS_plane(h1, sdf1, h2, _259);
            _264 = _260;
            Plane_delete(plane2);
        }
        else if(true) {
            BaseShape _21_temp = _21;
            BaseShape wildcard_261 = _21_temp;
            Maybe__ContactSet _263 = Maybe_Nothing__ContactSet();
            _264 = _263;
            BaseShape_delete(wildcard_261);
        }
        else UNHANDLED("collision.carp", 95);
        _308 = _264;
    }
    else if(_12._tag == BaseShape_Surface_tag) {
        BaseShape _12_temp = _12;
        Plane plane1 = _12_temp.u.Surface.member0;
        // Case expr:
        BaseShape* _272 = SDF_base(sdf2);
        BaseShape _273 = BaseShape_copy(_272);
        Maybe__ContactSet _304;
        if(_273._tag == BaseShape_Ball_tag) {
            BaseShape _273_temp = _273;
            double r2 = _273_temp.u.Ball.member0;
            // Case expr:
            Plane* _284 = &plane1; // ref
            Maybe__ContactSet _285 = Collision_collide_MINUS_sdf_MINUS_plane(h2, sdf2, h1, _284);
            Maybe__ContactSet _300;
            if(_285._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _285_temp = _285;
                ContactSet cs = _285_temp.u.Just.member0;
                // Case expr:
                ContactSet* _293 = &cs; // ref
                ContactSet _294 = ContactSet_reverse(_293);
                Maybe__ContactSet _295 = Maybe_Just__ContactSet(_294);
                _300 = _295;
                ContactSet_delete(cs);
            }
            else if(_285._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _285_temp = _285;
                // Case expr:
                Maybe__ContactSet _299 = Maybe_Nothing__ContactSet();
                _300 = _299;
            }
            else UNHANDLED("collision.carp", 126);
            _304 = _300;
        }
        else if(true) {
            BaseShape _273_temp = _273;
            BaseShape wildcard_301 = _273_temp;
            Maybe__ContactSet _303 = Maybe_Nothing__ContactSet();
            _304 = _303;
            BaseShape_delete(wildcard_301);
        }
        else UNHANDLED("collision.carp", 124);
        _308 = _304;
        Plane_delete(plane1);
    }
    else if(true) {
        BaseShape _12_temp = _12;
        BaseShape wildcard_305 = _12_temp;
        Maybe__ContactSet _307 = Maybe_Nothing__ContactSet();
        _308 = _307;
        BaseShape_delete(wildcard_305);
    }
    else UNHANDLED("collision.carp", 93);
    return _308;
}

Maybe__ContactSet Collision_collide_MINUS_swept(Handle__void* h1, Volume* v1, Vector3__double* vel, double dt, Handle__void* h2, Volume* v2) {
    Maybe__ContactSet _134;
    if(v1->_tag == Volume_Ball_tag) {
        Volume* _10_temp = v1;
        Sphere* s1 = &_10_temp->u.Ball.member0;
        // Case expr:
        Maybe__ContactSet _126;
        if(v2->_tag == Volume_Surface_tag) {
            Volume* _15_temp = v2;
            Plane* p2 = &_15_temp->u.Surface.member0;
            // Case expr:
            Maybe__ContactSet _118;
            /* let */ {
                Vector3__double* _24 = Sphere_center(s1);
                Vector3__double _25 = Vector3_copy__double(_24);
                Vector3__double start = _25;
                Vector3__double* _30 = &start; // ref
                Vector3__double _35 = Vector3_mul__double(vel, dt);
                Vector3__double* _36 = &_35; // ref
                Vector3__double _37 = Vector3_add__double(_30, _36);
                Vector3__double end = _37;
                Vector3__double* _43 = &start; // ref
                double _44 = Plane_distance_MINUS_to_MINUS_point(p2, _43);
                double dist_MINUS_start = _44;
                Vector3__double* _50 = &end; // ref
                double _51 = Plane_distance_MINUS_to_MINUS_point(p2, _50);
                double dist_MINUS_end = _51;
                double* _56 = Sphere_radius(s1);
                double _57 = Double_copy(_56);
                double r = _57;
                Maybe__ContactSet _117;
                bool _74;
                bool _64 = Double__GT_(dist_MINUS_start, r);
                if (_64) {
                    bool _69 = _LT__EQ___double(dist_MINUS_end, r);
                    bool _70 = _69;
                    _74 = _70;
                } else {
                    bool _73 = false;
                    _74 = _73;
                }
                if (_74) {
                    Maybe__ContactSet _107;
                    /* let */ {
                        double _81 = Double__MINUS_(r, dist_MINUS_end);
                        double depth = _81;
                        Vector3__double* _86 = Plane_normal(p2);
                        Vector3__double _87 = Vector3_copy__double(_86);
                        Vector3__double norm = _87;
                        Contact _93 = Contact_init(depth, end, norm);
                        Contact c = _93;
                        Handle__void _99 = Handle_copy__void(h1);
                        Handle__void _102 = Handle_copy__void(h2);
                        Array _104 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                        ((Contact*)_104.data)[0] = c;
                        ContactSet _105 = ContactSet_init(_99, _102, _104);
                        Maybe__ContactSet _106 = Maybe_Just__ContactSet(_105);
                        _107 = _106;
                    }
                    Maybe__ContactSet _108 = _107;
                    _117 = _108;
                } else {
                    Maybe__ContactSet _115 = Collision_collide(h1, v1, h2, v2);
                    Maybe__ContactSet _116 = _115;
                    Vector3_delete__double(end);
                    _117 = _116;
                }
                _118 = _117;
                Vector3_delete__double(_35);
                Vector3_delete__double(start);
            }
            _126 = _118;
        }
        else if(true) {
            Volume* _15_temp = v2;
            Volume* wildcard_119 = _15_temp;
            Maybe__ContactSet _125 = Collision_collide(h1, v1, h2, v2);
            _126 = _125;
        }
        else UNHANDLED("collision.carp", 234);
        _134 = _126;
    }
    else if(true) {
        Volume* _10_temp = v1;
        Volume* wildcard_127 = _10_temp;
        Maybe__ContactSet _133 = Collision_collide(h1, v1, h2, v2);
        _134 = _133;
    }
    else UNHANDLED("collision.carp", 232);
    return _134;
}

ContactSet* Collision_contact_MINUS_set(Collision* p) { return (&(p->contact_MINUS_set)); }

Collision Collision_copy(Collision* pRef) {
    Collision copy = *pRef;
    copy.contact_MINUS_set = ContactSet_copy(&(pRef->contact_MINUS_set));
    return copy;
}

void Collision_delete(Collision p) {
    ContactSet_delete(p.contact_MINUS_set);
}

AABB Collision_get_MINUS_aabb(Volume* v) {
    Volume _7 = Volume_copy(v);
    AABB _234;
    if(_7._tag == Volume_Box_tag) {
        Volume _7_temp = _7;
        AABB b = _7_temp.u.Box.member0;
        // Case expr:
        _234 = b;
    }
    else if(_7._tag == Volume_Ball_tag) {
        Volume _7_temp = _7;
        Sphere s = _7_temp.u.Ball.member0;
        // Case expr:
        AABB _53;
        /* let */ {
            Sphere* _20 = &s; // ref
            Vector3__double* _21 = Sphere_center(_20);
            Vector3__double* center = _21;
            Sphere* _27 = &s; // ref
            double* _28 = Sphere_radius(_27);
            double _29 = Double_copy(_28);
            double r = _29;
            Vector3__double _39 = Vector3_init__double(r, r, r);
            Vector3__double* _40 = &_39; // ref
            Vector3__double _41 = Vector3_sub__double(center, _40);
            Vector3__double _49 = Vector3_init__double(r, r, r);
            Vector3__double* _50 = &_49; // ref
            Vector3__double _51 = Vector3_add__double(center, _50);
            AABB _52 = AABB_init(_41, _51);
            _53 = _52;
            Vector3_delete__double(_39);
            Vector3_delete__double(_49);
        }
        _234 = _53;
        Sphere_delete(s);
    }
    else if(_7._tag == Volume_Surface_tag) {
        Volume _7_temp = _7;
        Plane p = _7_temp.u.Surface.member0;
        // Case expr:
        Vector3__double _62 = Vector3_init__double(-1000.0, -1000.0, -1000.0);
        Vector3__double _67 = Vector3_init__double(1000.0, 1000.0, 1000.0);
        AABB _68 = AABB_init(_62, _67);
        _234 = _68;
        Plane_delete(p);
    }
    else if(_7._tag == Volume_Sdf_tag) {
        Volume _7_temp = _7;
        SDF sdf = _7_temp.u.Sdf.member0;
        // Case expr:
        SDF* _76 = &sdf; // ref
        BaseShape* _77 = SDF_base(_76);
        AABB _233;
        if(_77->_tag == BaseShape_Ball_tag) {
            BaseShape* _77_temp = _77;
            double* r = &_77_temp->u.Ball.member0;
            // Case expr:
            AABB _123;
            /* let */ {
                SDF* _86 = &sdf; // ref
                Vector3__double* _87 = SDF_position(_86);
                Vector3__double* pos = _87;
                double _96 = Double_copy(r);
                double _99 = Double_copy(r);
                double _102 = Double_copy(r);
                Vector3__double _103 = Vector3_init__double(_96, _99, _102);
                Vector3__double* _104 = &_103; // ref
                Vector3__double _105 = Vector3_sub__double(pos, _104);
                double _112 = Double_copy(r);
                double _115 = Double_copy(r);
                double _118 = Double_copy(r);
                Vector3__double _119 = Vector3_init__double(_112, _115, _118);
                Vector3__double* _120 = &_119; // ref
                Vector3__double _121 = Vector3_add__double(pos, _120);
                AABB _122 = AABB_init(_105, _121);
                _123 = _122;
                Vector3_delete__double(_103);
                Vector3_delete__double(_119);
            }
            _233 = _123;
        }
        else if(_77->_tag == BaseShape_Surface_tag) {
            BaseShape* _77_temp = _77;
            Plane* pl = &_77_temp->u.Surface.member0;
            // Case expr:
            Vector3__double _132 = Vector3_init__double(-1000.0, -1000.0, -1000.0);
            Vector3__double _137 = Vector3_init__double(1000.0, 1000.0, 1000.0);
            AABB _138 = AABB_init(_132, _137);
            _233 = _138;
        }
        else if(_77->_tag == BaseShape_Box_tag) {
            BaseShape* _77_temp = _77;
            Vector3__double* e = &_77_temp->u.Box.member0;
            // Case expr:
            AABB _176;
            /* let */ {
                SDF* _147 = &sdf; // ref
                Vector3__double* _148 = SDF_position(_147);
                Vector3__double* pos = _148;
                double _152 = Vector3_mag__double(e);
                double r = _152;
                Vector3__double _162 = Vector3_init__double(r, r, r);
                Vector3__double* _163 = &_162; // ref
                Vector3__double _164 = Vector3_sub__double(pos, _163);
                Vector3__double _172 = Vector3_init__double(r, r, r);
                Vector3__double* _173 = &_172; // ref
                Vector3__double _174 = Vector3_add__double(pos, _173);
                AABB _175 = AABB_init(_164, _174);
                _176 = _175;
                Vector3_delete__double(_162);
                Vector3_delete__double(_172);
            }
            _233 = _176;
        }
        else if(_77->_tag == BaseShape_Cylinder_tag) {
            BaseShape* _77_temp = _77;
            double* rad = &_77_temp->u.Cylinder.member0;
            double* hh = &_77_temp->u.Cylinder.member1;
            // Case expr:
            AABB _232;
            /* let */ {
                SDF* _186 = &sdf; // ref
                Vector3__double* _187 = SDF_position(_186);
                Vector3__double* pos = _187;
                double _194 = Double_copy(rad);
                double _197 = Double_copy(rad);
                double _198 = Double__MUL_(_194, _197);
                double _202 = Double_copy(hh);
                double _205 = Double_copy(hh);
                double _206 = Double__MUL_(_202, _205);
                double _207 = Double__PLUS_(_198, _206);
                double _208 = Double_sqrt(_207);
                double r = _208;
                Vector3__double _218 = Vector3_init__double(r, r, r);
                Vector3__double* _219 = &_218; // ref
                Vector3__double _220 = Vector3_sub__double(pos, _219);
                Vector3__double _228 = Vector3_init__double(r, r, r);
                Vector3__double* _229 = &_228; // ref
                Vector3__double _230 = Vector3_add__double(pos, _229);
                AABB _231 = AABB_init(_220, _230);
                _232 = _231;
                Vector3_delete__double(_218);
                Vector3_delete__double(_228);
            }
            _233 = _232;
        }
        else UNHANDLED("collision.carp", 38);
        _234 = _233;
        SDF_delete(sdf);
    }
    else UNHANDLED("collision.carp", 26);
    return _234;
}

AABB Collision_get_MINUS_swept_MINUS_aabb(Volume* v, Vector3__double* vel, double dt) {
    AABB _161;
    /* let */ {
        AABB _10 = Collision_get_MINUS_aabb(v);
        AABB aabb = _10;
        AABB* _15 = &aabb; // ref
        Vector3__double* _16 = AABB_min(_15);
        Vector3__double* min_MINUS_pt = _16;
        AABB* _21 = &aabb; // ref
        Vector3__double* _22 = AABB_max(_21);
        Vector3__double* max_MINUS_pt = _22;
        Vector3__double _27 = Vector3_mul__double(vel, dt);
        Vector3__double delta = _27;
        double* _35 = Vector3_x__double(min_MINUS_pt);
        double _36 = Double_copy(_35);
        double* _41 = Vector3_x__double(min_MINUS_pt);
        double _42 = Double_copy(_41);
        Vector3__double* _47 = &delta; // ref
        double* _48 = Vector3_x__double(_47);
        double _49 = Double_copy(_48);
        double _50 = Double__PLUS_(_42, _49);
        double _51 = min__double(_36, _50);
        double* _56 = Vector3_y__double(min_MINUS_pt);
        double _57 = Double_copy(_56);
        double* _62 = Vector3_y__double(min_MINUS_pt);
        double _63 = Double_copy(_62);
        Vector3__double* _68 = &delta; // ref
        double* _69 = Vector3_y__double(_68);
        double _70 = Double_copy(_69);
        double _71 = Double__PLUS_(_63, _70);
        double _72 = min__double(_57, _71);
        double* _77 = Vector3_z__double(min_MINUS_pt);
        double _78 = Double_copy(_77);
        double* _83 = Vector3_z__double(min_MINUS_pt);
        double _84 = Double_copy(_83);
        Vector3__double* _89 = &delta; // ref
        double* _90 = Vector3_z__double(_89);
        double _91 = Double_copy(_90);
        double _92 = Double__PLUS_(_84, _91);
        double _93 = min__double(_78, _92);
        Vector3__double _94 = Vector3_init__double(_51, _72, _93);
        double* _100 = Vector3_x__double(max_MINUS_pt);
        double _101 = Double_copy(_100);
        double* _106 = Vector3_x__double(max_MINUS_pt);
        double _107 = Double_copy(_106);
        Vector3__double* _112 = &delta; // ref
        double* _113 = Vector3_x__double(_112);
        double _114 = Double_copy(_113);
        double _115 = Double__PLUS_(_107, _114);
        double _116 = max__double(_101, _115);
        double* _121 = Vector3_y__double(max_MINUS_pt);
        double _122 = Double_copy(_121);
        double* _127 = Vector3_y__double(max_MINUS_pt);
        double _128 = Double_copy(_127);
        Vector3__double* _133 = &delta; // ref
        double* _134 = Vector3_y__double(_133);
        double _135 = Double_copy(_134);
        double _136 = Double__PLUS_(_128, _135);
        double _137 = max__double(_122, _136);
        double* _142 = Vector3_z__double(max_MINUS_pt);
        double _143 = Double_copy(_142);
        double* _148 = Vector3_z__double(max_MINUS_pt);
        double _149 = Double_copy(_148);
        Vector3__double* _154 = &delta; // ref
        double* _155 = Vector3_z__double(_154);
        double _156 = Double_copy(_155);
        double _157 = Double__PLUS_(_149, _156);
        double _158 = max__double(_143, _157);
        Vector3__double _159 = Vector3_init__double(_116, _137, _158);
        AABB _160 = AABB_init(_94, _159);
        _161 = _160;
        AABB_delete(aabb);
        Vector3_delete__double(delta);
    }
    return _161;
}

Collision Collision_init(ContactSet contact_MINUS_set) {
    Collision instance;
    instance.contact_MINUS_set = contact_MINUS_set;
    return instance;
}

String Collision_prn(Collision *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Collision");
  temp = ContactSet_prn(&p->contact_MINUS_set); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Collision");
  temp = ContactSet_prn(&p->contact_MINUS_set);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Collision Collision_set_MINUS_contact_MINUS_set(Collision p, ContactSet newValue) {
    ContactSet_delete(p.contact_MINUS_set);
    p.contact_MINUS_set = newValue;
    return p;
}


void Collision_set_MINUS_contact_MINUS_set_BANG_(Collision* pRef, ContactSet newValue) {
    ContactSet_delete(pRef->contact_MINUS_set);
    pRef->contact_MINUS_set = newValue;
}


String Collision_str(Collision *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Collision");
  temp = ContactSet_prn(&p->contact_MINUS_set); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Collision");
  temp = ContactSet_prn(&p->contact_MINUS_set);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Collision Collision_update_MINUS_contact_MINUS_set(Collision p, Lambda *updater) {
    p.contact_MINUS_set = (*updater).env ? ((Fn__LambdaEnv_ContactSet_ContactSet)(*updater).callback)((*updater).env, p.contact_MINUS_set) : ((Fn__ContactSet_ContactSet)(*updater).callback)(p.contact_MINUS_set);
    return p;
}


Maybe__CollisionResult CollisionChecker_check_MINUS_pair(Collidable* c1, Collidable* c2) {
    Maybe__CollisionResult _140;
    /* let */ {
        Handle__void* _9 = Collidable_handle(c1);
        Handle__void* h1 = _9;
        Handle__void* _13 = Collidable_handle(c2);
        Handle__void* h2 = _13;
        Maybe__CollisionResult _139;
        bool _71;
        bool _20 = Handle_equal_QMARK___void_void(h1, h2);
        if (_20) {
            bool _23 = true;
            _71 = _23;
        } else {
            bool _69;
            Uint32* _31 = Collidable_mask(c1);
            Uint32 _32 = Uint32_copy(_31);
            Uint32* _36 = Collidable_layer(c2);
            Uint32 _37 = Uint32_copy(_36);
            Uint32 _38 = Uint32_bit_MINUS_and(_32, _37);
            Uint32 _42 = Uint32_zero();
            Uint32 _43 = _42; // From the 'the' function.
            bool _44 = Uint32__EQ_(_38, _43);
            if (_44) {
                bool _47 = true;
                _69 = _47;
            } else {
                Uint32* _54 = Collidable_mask(c2);
                Uint32 _55 = Uint32_copy(_54);
                Uint32* _59 = Collidable_layer(c1);
                Uint32 _60 = Uint32_copy(_59);
                Uint32 _61 = Uint32_bit_MINUS_and(_55, _60);
                Uint32 _65 = Uint32_zero();
                Uint32 _66 = _65; // From the 'the' function.
                bool _67 = Uint32__EQ_(_61, _66);
                bool _68 = _67;
                _69 = _68;
            }
            bool _70 = _69;
            _71 = _70;
        }
        if (_71) {
            Maybe__CollisionResult _74 = Maybe_Nothing__CollisionResult();
            Maybe__CollisionResult _75 = _74;
            _139 = _75;
        } else {
            Volume* _82 = Collidable_volume(c1);
            Volume* _86 = Collidable_volume(c2);
            Maybe__ContactSet _87 = Collision_collide(h1, _82, h2, _86);
            Maybe__CollisionResult _137;
            if(_87._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _87_temp = _87;
                // Case expr:
                Maybe__CollisionResult _91 = Maybe_Nothing__CollisionResult();
                _137 = _91;
            }
            else if(_87._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _87_temp = _87;
                ContactSet contact_MINUS_set = _87_temp.u.Just.member0;
                // Case expr:
                Maybe__CollisionResult _136;
                bool _112;
                bool* _100 = Collidable_is_MINUS_trigger(c1);
                bool _101 = Bool_copy(_100);
                if (_101) {
                    bool _104 = true;
                    _112 = _104;
                } else {
                    bool* _109 = Collidable_is_MINUS_trigger(c2);
                    bool _110 = Bool_copy(_109);
                    bool _111 = _110;
                    _112 = _111;
                }
                if (_112) {
                    Handle__void _119 = Handle_copy__void(h1);
                    Handle__void _122 = Handle_copy__void(h2);
                    Trigger _123 = Trigger_init(_119, _122);
                    CollisionResult _124 = CollisionResult_Triggered(_123);
                    Maybe__CollisionResult _125 = Maybe_Just__CollisionResult(_124);
                    Maybe__CollisionResult _126 = _125;
                    ContactSet_delete(contact_MINUS_set);
                    _136 = _126;
                } else {
                    Collision _132 = Collision_init(contact_MINUS_set);
                    CollisionResult _133 = CollisionResult_Physical(_132);
                    Maybe__CollisionResult _134 = Maybe_Just__CollisionResult(_133);
                    Maybe__CollisionResult _135 = _134;
                    _136 = _135;
                }
                _137 = _136;
            }
            else UNHANDLED("collision.carp", 297);
            Maybe__CollisionResult _138 = _137;
            _139 = _138;
        }
        _140 = _139;
    }
    return _140;
}

Maybe__CollisionResult CollisionChecker_check_MINUS_pair_MINUS_swept(Collidable* c1, Vector3__double* vel, double dt, Collidable* c2) {
    Maybe__CollisionResult _144;
    /* let */ {
        Handle__void* _11 = Collidable_handle(c1);
        Handle__void* h1 = _11;
        Handle__void* _15 = Collidable_handle(c2);
        Handle__void* h2 = _15;
        Maybe__CollisionResult _143;
        bool _73;
        bool _22 = Handle_equal_QMARK___void_void(h1, h2);
        if (_22) {
            bool _25 = true;
            _73 = _25;
        } else {
            bool _71;
            Uint32* _33 = Collidable_mask(c1);
            Uint32 _34 = Uint32_copy(_33);
            Uint32* _38 = Collidable_layer(c2);
            Uint32 _39 = Uint32_copy(_38);
            Uint32 _40 = Uint32_bit_MINUS_and(_34, _39);
            Uint32 _44 = Uint32_zero();
            Uint32 _45 = _44; // From the 'the' function.
            bool _46 = Uint32__EQ_(_40, _45);
            if (_46) {
                bool _49 = true;
                _71 = _49;
            } else {
                Uint32* _56 = Collidable_mask(c2);
                Uint32 _57 = Uint32_copy(_56);
                Uint32* _61 = Collidable_layer(c1);
                Uint32 _62 = Uint32_copy(_61);
                Uint32 _63 = Uint32_bit_MINUS_and(_57, _62);
                Uint32 _67 = Uint32_zero();
                Uint32 _68 = _67; // From the 'the' function.
                bool _69 = Uint32__EQ_(_63, _68);
                bool _70 = _69;
                _71 = _70;
            }
            bool _72 = _71;
            _73 = _72;
        }
        if (_73) {
            Maybe__CollisionResult _76 = Maybe_Nothing__CollisionResult();
            Maybe__CollisionResult _77 = _76;
            _143 = _77;
        } else {
            Volume* _84 = Collidable_volume(c1);
            Volume* _90 = Collidable_volume(c2);
            Maybe__ContactSet _91 = Collision_collide_MINUS_swept(h1, _84, vel, dt, h2, _90);
            Maybe__CollisionResult _141;
            if(_91._tag == Maybe__ContactSet_Nothing_tag) {
                Maybe__ContactSet _91_temp = _91;
                // Case expr:
                Maybe__CollisionResult _95 = Maybe_Nothing__CollisionResult();
                _141 = _95;
            }
            else if(_91._tag == Maybe__ContactSet_Just_tag) {
                Maybe__ContactSet _91_temp = _91;
                ContactSet contact_MINUS_set = _91_temp.u.Just.member0;
                // Case expr:
                Maybe__CollisionResult _140;
                bool _116;
                bool* _104 = Collidable_is_MINUS_trigger(c1);
                bool _105 = Bool_copy(_104);
                if (_105) {
                    bool _108 = true;
                    _116 = _108;
                } else {
                    bool* _113 = Collidable_is_MINUS_trigger(c2);
                    bool _114 = Bool_copy(_113);
                    bool _115 = _114;
                    _116 = _115;
                }
                if (_116) {
                    Handle__void _123 = Handle_copy__void(h1);
                    Handle__void _126 = Handle_copy__void(h2);
                    Trigger _127 = Trigger_init(_123, _126);
                    CollisionResult _128 = CollisionResult_Triggered(_127);
                    Maybe__CollisionResult _129 = Maybe_Just__CollisionResult(_128);
                    Maybe__CollisionResult _130 = _129;
                    ContactSet_delete(contact_MINUS_set);
                    _140 = _130;
                } else {
                    Collision _136 = Collision_init(contact_MINUS_set);
                    CollisionResult _137 = CollisionResult_Physical(_136);
                    Maybe__CollisionResult _138 = Maybe_Just__CollisionResult(_137);
                    Maybe__CollisionResult _139 = _138;
                    _140 = _139;
                }
                _141 = _140;
            }
            else UNHANDLED("collision.carp", 312);
            Maybe__CollisionResult _142 = _141;
            _143 = _142;
        }
        _144 = _143;
    }
    return _144;
}

Array__CollisionResult CollisionChecker_query_MINUS_and_MINUS_check(SpatialGrid__Uint64* grid, Collidable* self, Array__Collidable* others, bool symmetric) {
    Array__CollisionResult _23;
    /* let */ {
        Array _9 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(CollisionResult) * 0) };
        Array__CollisionResult results = _9;
        Array__CollisionResult* _18 = &results; // ref
        CollisionChecker_query_MINUS_and_MINUS_check_MINUS_into_BANG_(grid, self, others, _18, symmetric);
        Array__CollisionResult _22 = results;
        _23 = _22;
    }
    return _23;
}

void CollisionChecker_query_MINUS_and_MINUS_check_MINUS_into_BANG_(SpatialGrid__Uint64* grid, Collidable* self, Array__Collidable* others, Array__CollisionResult* out, bool symmetric) {
    /* let */ {
        Volume* _13 = Collidable_volume(self);
        AABB _14 = Collision_get_MINUS_aabb(_13);
        AABB aabb = _14;
        AABB* _20 = &aabb; // ref
        Array__Uint64 _21 = SpatialGrid_query_MINUS_unique__Uint64(grid, _20);
        Array__Uint64 candidates = _21;
        /* let */ {
            int i = 0;
            Array__Uint64* _34 = &candidates; // ref
            int _35 = Array_length__Uint64(_34);
            bool _1000008 = Int__LT_(i, _35);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    Array__Uint64* _46 = &candidates; // ref
                    Uint64* _48 = Array_unsafe_MINUS_nth__Uint64(_46, i);
                    Uint64 _49 = Uint64_copy(_48);
                    Long _50 = Uint64_to_MINUS_long(_49);
                    int _51 = Long_to_MINUS_int(_50);
                    int other_MINUS_idx = _51;
                    int _58 = Array_length__Collidable(others);
                    bool _59 = Int__LT_(other_MINUS_idx, _58);
                    if (_59) {
                        /* let */ {
                            Collidable* _66 = Array_unsafe_MINUS_nth__Collidable(others, other_MINUS_idx);
                            Collidable* other = _66;
                            Handle__void* _70 = Collidable_handle(self);
                            Handle__void* h_MINUS_self = _70;
                            Handle__void* _74 = Collidable_handle(other);
                            Handle__void* h_MINUS_other = _74;
                            bool _90;
                            if (symmetric) {
                                bool _84 = Handle_less_MINUS_than_QMARK___void_void(h_MINUS_self, h_MINUS_other);
                                bool _85 = not(_84);
                                bool _86 = _85;
                                _90 = _86;
                            } else {
                                bool _89 = false;
                                _90 = _89;
                            }
                            if (_90) {
                                /* () */
                            } else {
                                Maybe__CollisionResult _99 = CollisionChecker_check_MINUS_pair(self, other);
                                if(_99._tag == Maybe__CollisionResult_Just_tag) {
                                    Maybe__CollisionResult _99_temp = _99;
                                    CollisionResult res = _99_temp.u.Just.member0;
                                    // Case expr:
                                    Array_push_MINUS_back_BANG___CollisionResult(out, res);
                                }
                                else if(_99._tag == Maybe__CollisionResult_Nothing_tag) {
                                    Maybe__CollisionResult _99_temp = _99;
                                    // Case expr:
                                    /* () */
                                }
                                else UNHANDLED("collision.carp", 332);
                            }
                        }
                    } else {
                        /* () */
                    }
                }
                int _1000025 = Int__PLUS_(i, 1);
                i = _1000025;  // Int = Int
                Array__Uint64* _34 = &candidates; // ref
                int _35 = Array_length__Uint64(_34);
                bool _1000008 = Int__LT_(i, _35);
                _1000006 = _1000008;
            }
        }
        /* () */
        AABB_delete(aabb);
        Array_delete__Uint64(candidates);
    }
}

CollisionResult CollisionResult_Physical(Collision member0) {
  CollisionResult instance;
    instance.u.Physical.member0 = member0;
    instance._tag = CollisionResult_Physical_tag;
    return instance;
}

CollisionResult CollisionResult_Triggered(Trigger member0) {
  CollisionResult instance;
    instance.u.Triggered.member0 = member0;
    instance._tag = CollisionResult_Triggered_tag;
    return instance;
}

Handle__void CollisionResult_a(CollisionResult* res) {
    CollisionResult _7 = CollisionResult_copy(res);
    Handle__void _28;
    if(_7._tag == CollisionResult_Physical_tag) {
        CollisionResult _7_temp = _7;
        Collision c = _7_temp.u.Physical.member0;
        // Case expr:
        Collision* _15 = &c; // ref
        Handle__void* _16 = Collision_a(_15);
        Handle__void _17 = Handle_copy__void(_16);
        _28 = _17;
        Collision_delete(c);
    }
    else if(_7._tag == CollisionResult_Triggered_tag) {
        CollisionResult _7_temp = _7;
        Trigger t = _7_temp.u.Triggered.member0;
        // Case expr:
        Trigger* _25 = &t; // ref
        Handle__void* _26 = Trigger_a(_25);
        Handle__void _27 = Handle_copy__void(_26);
        _28 = _27;
        Trigger_delete(t);
    }
    else UNHANDLED("collision.carp", 268);
    return _28;
}

Handle__void CollisionResult_b(CollisionResult* res) {
    CollisionResult _7 = CollisionResult_copy(res);
    Handle__void _28;
    if(_7._tag == CollisionResult_Physical_tag) {
        CollisionResult _7_temp = _7;
        Collision c = _7_temp.u.Physical.member0;
        // Case expr:
        Collision* _15 = &c; // ref
        Handle__void* _16 = Collision_b(_15);
        Handle__void _17 = Handle_copy__void(_16);
        _28 = _17;
        Collision_delete(c);
    }
    else if(_7._tag == CollisionResult_Triggered_tag) {
        CollisionResult _7_temp = _7;
        Trigger t = _7_temp.u.Triggered.member0;
        // Case expr:
        Trigger* _25 = &t; // ref
        Handle__void* _26 = Trigger_b(_25);
        Handle__void _27 = Handle_copy__void(_26);
        _28 = _27;
        Trigger_delete(t);
    }
    else UNHANDLED("collision.carp", 274);
    return _28;
}

CollisionResult CollisionResult_copy(CollisionResult* pRef) {
    CollisionResult copy = *pRef;
    if(pRef->_tag == CollisionResult_Physical_tag) {
    copy.u.Physical.member0 = Collision_copy(&(pRef->u.Physical.member0));
    }

    else if(pRef->_tag == CollisionResult_Triggered_tag) {
    copy.u.Triggered.member0 = Trigger_copy(&(pRef->u.Triggered.member0));
    }

    return copy;
}

void CollisionResult_delete(CollisionResult p) {
  if(p._tag == CollisionResult_Physical_tag) {
    Collision_delete(p.u.Physical.member0);
  }
  else if(p._tag == CollisionResult_Triggered_tag) {
    Trigger_delete(p.u.Triggered.member0);
  }

}

int CollisionResult_get_MINUS_tag(CollisionResult *p) { return p->_tag; }
String CollisionResult_prn(CollisionResult *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == CollisionResult_Physical_tag) {
    size += snprintf(NULL, 0, "(%s ", "Physical");
  temp = Collision_prn(&p->u.Physical.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == CollisionResult_Triggered_tag) {
    size += snprintf(NULL, 0, "(%s ", "Triggered");
  temp = Trigger_prn(&p->u.Triggered.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == CollisionResult_Physical_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Physical");
  temp = Collision_prn(&p->u.Physical.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == CollisionResult_Triggered_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Triggered");
  temp = Trigger_prn(&p->u.Triggered.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String CollisionResult_str(CollisionResult *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == CollisionResult_Physical_tag) {
    size += snprintf(NULL, 0, "(%s ", "Physical");
  temp = Collision_prn(&p->u.Physical.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == CollisionResult_Triggered_tag) {
    size += snprintf(NULL, 0, "(%s ", "Triggered");
  temp = Trigger_prn(&p->u.Triggered.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == CollisionResult_Physical_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Physical");
  temp = Collision_prn(&p->u.Physical.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == CollisionResult_Triggered_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Triggered");
  temp = Trigger_prn(&p->u.Triggered.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

bool Color__EQ___ColorId(ColorId* a, ColorId* b) {
    ColorId* _12 = a; // From the 'the' function.
    int _13 = Color_hash(_12);
    int _16 = Color_hash(b);
    bool _17 = Int__EQ_(_13, _16);
    return _17;
}

ColorId Color_Id_BgBlack() {
  ColorId instance;

    instance._tag = ColorId_BgBlack_tag;
    return instance;
}

ColorId Color_Id_BgBlue() {
  ColorId instance;

    instance._tag = ColorId_BgBlue_tag;
    return instance;
}

ColorId Color_Id_BgCyan() {
  ColorId instance;

    instance._tag = ColorId_BgCyan_tag;
    return instance;
}

ColorId Color_Id_BgGreen() {
  ColorId instance;

    instance._tag = ColorId_BgGreen_tag;
    return instance;
}

ColorId Color_Id_BgMagenta() {
  ColorId instance;

    instance._tag = ColorId_BgMagenta_tag;
    return instance;
}

ColorId Color_Id_BgRed() {
  ColorId instance;

    instance._tag = ColorId_BgRed_tag;
    return instance;
}

ColorId Color_Id_BgWhite() {
  ColorId instance;

    instance._tag = ColorId_BgWhite_tag;
    return instance;
}

ColorId Color_Id_BgYellow() {
  ColorId instance;

    instance._tag = ColorId_BgYellow_tag;
    return instance;
}

ColorId Color_Id_Black() {
  ColorId instance;

    instance._tag = ColorId_Black_tag;
    return instance;
}

ColorId Color_Id_BlinkRapid() {
  ColorId instance;

    instance._tag = ColorId_BlinkRapid_tag;
    return instance;
}

ColorId Color_Id_BlinkSlow() {
  ColorId instance;

    instance._tag = ColorId_BlinkSlow_tag;
    return instance;
}

ColorId Color_Id_Blue() {
  ColorId instance;

    instance._tag = ColorId_Blue_tag;
    return instance;
}

ColorId Color_Id_Bold() {
  ColorId instance;

    instance._tag = ColorId_Bold_tag;
    return instance;
}

ColorId Color_Id_Cyan() {
  ColorId instance;

    instance._tag = ColorId_Cyan_tag;
    return instance;
}

ColorId Color_Id_Green() {
  ColorId instance;

    instance._tag = ColorId_Green_tag;
    return instance;
}

ColorId Color_Id_Italic() {
  ColorId instance;

    instance._tag = ColorId_Italic_tag;
    return instance;
}

ColorId Color_Id_Magenta() {
  ColorId instance;

    instance._tag = ColorId_Magenta_tag;
    return instance;
}

ColorId Color_Id_None() {
  ColorId instance;

    instance._tag = ColorId_None_tag;
    return instance;
}

ColorId Color_Id_Red() {
  ColorId instance;

    instance._tag = ColorId_Red_tag;
    return instance;
}

ColorId Color_Id_Reset() {
  ColorId instance;

    instance._tag = ColorId_Reset_tag;
    return instance;
}

ColorId Color_Id_Underline() {
  ColorId instance;

    instance._tag = ColorId_Underline_tag;
    return instance;
}

ColorId Color_Id_White() {
  ColorId instance;

    instance._tag = ColorId_White_tag;
    return instance;
}

ColorId Color_Id_Yellow() {
  ColorId instance;

    instance._tag = ColorId_Yellow_tag;
    return instance;
}

ColorId Color_Id_copy(ColorId* pRef) {
    ColorId copy = *pRef;
    if(pRef->_tag == ColorId_Black_tag) {

    }

    else if(pRef->_tag == ColorId_Red_tag) {

    }

    else if(pRef->_tag == ColorId_Green_tag) {

    }

    else if(pRef->_tag == ColorId_Yellow_tag) {

    }

    else if(pRef->_tag == ColorId_Blue_tag) {

    }

    else if(pRef->_tag == ColorId_Magenta_tag) {

    }

    else if(pRef->_tag == ColorId_Cyan_tag) {

    }

    else if(pRef->_tag == ColorId_White_tag) {

    }

    else if(pRef->_tag == ColorId_Reset_tag) {

    }

    else if(pRef->_tag == ColorId_None_tag) {

    }

    else if(pRef->_tag == ColorId_Bold_tag) {

    }

    else if(pRef->_tag == ColorId_Italic_tag) {

    }

    else if(pRef->_tag == ColorId_Underline_tag) {

    }

    else if(pRef->_tag == ColorId_BlinkSlow_tag) {

    }

    else if(pRef->_tag == ColorId_BlinkRapid_tag) {

    }

    else if(pRef->_tag == ColorId_BgBlack_tag) {

    }

    else if(pRef->_tag == ColorId_BgRed_tag) {

    }

    else if(pRef->_tag == ColorId_BgGreen_tag) {

    }

    else if(pRef->_tag == ColorId_BgYellow_tag) {

    }

    else if(pRef->_tag == ColorId_BgBlue_tag) {

    }

    else if(pRef->_tag == ColorId_BgMagenta_tag) {

    }

    else if(pRef->_tag == ColorId_BgCyan_tag) {

    }

    else if(pRef->_tag == ColorId_BgWhite_tag) {

    }

    return copy;
}

void Color_Id_delete(ColorId p) {
  if(p._tag == ColorId_Black_tag) {

  }
  else if(p._tag == ColorId_Red_tag) {

  }
  else if(p._tag == ColorId_Green_tag) {

  }
  else if(p._tag == ColorId_Yellow_tag) {

  }
  else if(p._tag == ColorId_Blue_tag) {

  }
  else if(p._tag == ColorId_Magenta_tag) {

  }
  else if(p._tag == ColorId_Cyan_tag) {

  }
  else if(p._tag == ColorId_White_tag) {

  }
  else if(p._tag == ColorId_Reset_tag) {

  }
  else if(p._tag == ColorId_None_tag) {

  }
  else if(p._tag == ColorId_Bold_tag) {

  }
  else if(p._tag == ColorId_Italic_tag) {

  }
  else if(p._tag == ColorId_Underline_tag) {

  }
  else if(p._tag == ColorId_BlinkSlow_tag) {

  }
  else if(p._tag == ColorId_BlinkRapid_tag) {

  }
  else if(p._tag == ColorId_BgBlack_tag) {

  }
  else if(p._tag == ColorId_BgRed_tag) {

  }
  else if(p._tag == ColorId_BgGreen_tag) {

  }
  else if(p._tag == ColorId_BgYellow_tag) {

  }
  else if(p._tag == ColorId_BgBlue_tag) {

  }
  else if(p._tag == ColorId_BgMagenta_tag) {

  }
  else if(p._tag == ColorId_BgCyan_tag) {

  }
  else if(p._tag == ColorId_BgWhite_tag) {

  }

}

int Color_Id_get_MINUS_tag(ColorId *p) { return p->_tag; }
String Color_Id_prn(ColorId *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ColorId_Black_tag) {
    size += snprintf(NULL, 0, "(%s ", "Black");

  }
  if(p->_tag == ColorId_Red_tag) {
    size += snprintf(NULL, 0, "(%s ", "Red");

  }
  if(p->_tag == ColorId_Green_tag) {
    size += snprintf(NULL, 0, "(%s ", "Green");

  }
  if(p->_tag == ColorId_Yellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "Yellow");

  }
  if(p->_tag == ColorId_Blue_tag) {
    size += snprintf(NULL, 0, "(%s ", "Blue");

  }
  if(p->_tag == ColorId_Magenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "Magenta");

  }
  if(p->_tag == ColorId_Cyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cyan");

  }
  if(p->_tag == ColorId_White_tag) {
    size += snprintf(NULL, 0, "(%s ", "White");

  }
  if(p->_tag == ColorId_Reset_tag) {
    size += snprintf(NULL, 0, "(%s ", "Reset");

  }
  if(p->_tag == ColorId_None_tag) {
    size += snprintf(NULL, 0, "(%s ", "None");

  }
  if(p->_tag == ColorId_Bold_tag) {
    size += snprintf(NULL, 0, "(%s ", "Bold");

  }
  if(p->_tag == ColorId_Italic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Italic");

  }
  if(p->_tag == ColorId_Underline_tag) {
    size += snprintf(NULL, 0, "(%s ", "Underline");

  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkSlow");

  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkRapid");

  }
  if(p->_tag == ColorId_BgBlack_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlack");

  }
  if(p->_tag == ColorId_BgRed_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgRed");

  }
  if(p->_tag == ColorId_BgGreen_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgGreen");

  }
  if(p->_tag == ColorId_BgYellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgYellow");

  }
  if(p->_tag == ColorId_BgBlue_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlue");

  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgMagenta");

  }
  if(p->_tag == ColorId_BgCyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgCyan");

  }
  if(p->_tag == ColorId_BgWhite_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgWhite");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ColorId_Black_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Black");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Red_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Red");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Green_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Green");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Yellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Yellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Blue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Blue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Magenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Magenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Cyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Cyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_White_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "White");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Reset_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Reset");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_None_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "None");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Bold_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Bold");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Italic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Italic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Underline_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Underline");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkSlow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkRapid");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlack_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlack");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgRed_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgRed");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgGreen_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgGreen");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgYellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgYellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgMagenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgCyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgCyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgWhite_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgWhite");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Color_Id_str(ColorId *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ColorId_Black_tag) {
    size += snprintf(NULL, 0, "(%s ", "Black");

  }
  if(p->_tag == ColorId_Red_tag) {
    size += snprintf(NULL, 0, "(%s ", "Red");

  }
  if(p->_tag == ColorId_Green_tag) {
    size += snprintf(NULL, 0, "(%s ", "Green");

  }
  if(p->_tag == ColorId_Yellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "Yellow");

  }
  if(p->_tag == ColorId_Blue_tag) {
    size += snprintf(NULL, 0, "(%s ", "Blue");

  }
  if(p->_tag == ColorId_Magenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "Magenta");

  }
  if(p->_tag == ColorId_Cyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cyan");

  }
  if(p->_tag == ColorId_White_tag) {
    size += snprintf(NULL, 0, "(%s ", "White");

  }
  if(p->_tag == ColorId_Reset_tag) {
    size += snprintf(NULL, 0, "(%s ", "Reset");

  }
  if(p->_tag == ColorId_None_tag) {
    size += snprintf(NULL, 0, "(%s ", "None");

  }
  if(p->_tag == ColorId_Bold_tag) {
    size += snprintf(NULL, 0, "(%s ", "Bold");

  }
  if(p->_tag == ColorId_Italic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Italic");

  }
  if(p->_tag == ColorId_Underline_tag) {
    size += snprintf(NULL, 0, "(%s ", "Underline");

  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkSlow");

  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkRapid");

  }
  if(p->_tag == ColorId_BgBlack_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlack");

  }
  if(p->_tag == ColorId_BgRed_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgRed");

  }
  if(p->_tag == ColorId_BgGreen_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgGreen");

  }
  if(p->_tag == ColorId_BgYellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgYellow");

  }
  if(p->_tag == ColorId_BgBlue_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlue");

  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgMagenta");

  }
  if(p->_tag == ColorId_BgCyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgCyan");

  }
  if(p->_tag == ColorId_BgWhite_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgWhite");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ColorId_Black_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Black");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Red_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Red");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Green_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Green");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Yellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Yellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Blue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Blue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Magenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Magenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Cyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Cyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_White_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "White");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Reset_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Reset");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_None_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "None");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Bold_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Bold");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Italic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Italic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Underline_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Underline");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkSlow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkRapid");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlack_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlack");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgRed_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgRed");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgGreen_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgGreen");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgYellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgYellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgMagenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgCyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgCyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgWhite_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgWhite");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Color_color(ColorId cid) {
    String _26;
    /* let */ {
        Map__ColorId_String* _9 = &Color_table; // ref
        ColorId* _12 = &cid; // ref
        String _13 = Map_get__ColorId_String(_9, _12);
        String n = _13;
        static String _16 = "[";
        String *_16_ref = &_16;
        String* _21 = &n; // ref
        static String _22 = "m";
        String *_22_ref = &_22;
        String _23 = String_append(_21, _22_ref);
        String* _24 = &_23; // ref
        String _25 = String_append(_16_ref, _24);
        _26 = _25;
        String_delete(_23);
        String_delete(n);
    }
    Color_Id_delete(cid);
    return _26;
}

String Color_colorize(ColorId cid, String* s) {
    String _9 = Color_color(cid);
    String* _10 = &_9; // ref
    ColorId _17 = Color_Id_Reset();
    String _18 = Color_color(_17);
    String* _19 = &_18; // ref
    String _20 = String_append(s, _19);
    String* _21 = &_20; // ref
    String _22 = String_append(_10, _21);
    String_delete(_18);
    String_delete(_20);
    String_delete(_9);
    return _22;
}

int Color_hash(ColorId* k) {
    int _6 = Color_Id_get_MINUS_tag(k);
    return _6;
}

Contact Contact_copy(Contact* pRef) {
    Contact copy = *pRef;
    /* Ignore non-managed member 'depth' : Double */
    copy.point = Vector3_copy__double(&(pRef->point));
    copy.normal = Vector3_copy__double(&(pRef->normal));
    return copy;
}

void Contact_delete(Contact p) {
    /* Ignore non-managed member 'depth' : Double */
    Vector3_delete__double(p.point);
    Vector3_delete__double(p.normal);
}

double* Contact_depth(Contact* p) { return (&(p->depth)); }

Contact Contact_init(double depth, Vector3__double point, Vector3__double normal) {
    Contact instance;
    instance.depth = depth;
    instance.point = point;
    instance.normal = normal;
    return instance;
}

Vector3__double* Contact_normal(Contact* p) { return (&(p->normal)); }

Vector3__double* Contact_point(Contact* p) { return (&(p->point)); }

String Contact_prn(Contact *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Contact");
  temp = Double_prn(p->depth); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Contact");
  temp = Double_prn(p->depth);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Contact Contact_reverse(Contact* c) {
    double* _8 = Contact_depth(c);
    double _9 = Double_copy(_8);
    Vector3__double* _13 = Contact_point(c);
    Vector3__double _14 = Vector3_copy__double(_13);
    Vector3__double* _18 = Contact_normal(c);
    Vector3__double _20 = Vector3_mul__double(_18, -1.0);
    Contact _21 = Contact_init(_9, _14, _20);
    return _21;
}

Contact Contact_set_MINUS_depth(Contact p, double newValue) {
    /* Ignore non-managed member 'depth' : Double */
    p.depth = newValue;
    return p;
}


void Contact_set_MINUS_depth_BANG_(Contact* pRef, double newValue) {
    /* Ignore non-managed member 'depth' : Double */
    pRef->depth = newValue;
}


Contact Contact_set_MINUS_normal(Contact p, Vector3__double newValue) {
    Vector3_delete__double(p.normal);
    p.normal = newValue;
    return p;
}


void Contact_set_MINUS_normal_BANG_(Contact* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->normal);
    pRef->normal = newValue;
}


Contact Contact_set_MINUS_point(Contact p, Vector3__double newValue) {
    Vector3_delete__double(p.point);
    p.point = newValue;
    return p;
}


void Contact_set_MINUS_point_BANG_(Contact* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->point);
    pRef->point = newValue;
}


String Contact_str(Contact *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Contact");
  temp = Double_prn(p->depth); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Contact");
  temp = Double_prn(p->depth);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Contact Contact_update_MINUS_depth(Contact p, Lambda *updater) {
    p.depth = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.depth) : ((Fn__double_double)(*updater).callback)(p.depth);
    return p;
}


Contact Contact_update_MINUS_normal(Contact p, Lambda *updater) {
    p.normal = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.normal) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.normal);
    return p;
}


Contact Contact_update_MINUS_point(Contact p, Lambda *updater) {
    p.point = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.point) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.point);
    return p;
}


Handle__void* ContactSet_a(ContactSet* p) { return (&(p->a)); }

Handle__void* ContactSet_b(ContactSet* p) { return (&(p->b)); }

Array__Contact* ContactSet_contacts(ContactSet* p) { return (&(p->contacts)); }

ContactSet ContactSet_copy(ContactSet* pRef) {
    ContactSet copy = *pRef;
    copy.a = Handle_copy__void(&(pRef->a));
    copy.b = Handle_copy__void(&(pRef->b));
    copy.contacts = Array_copy__Contact(&(pRef->contacts));
    return copy;
}

void ContactSet_delete(ContactSet p) {
    Handle_delete__void(p.a);
    Handle_delete__void(p.b);
    Array_delete__Contact(p.contacts);
}

ContactSet ContactSet_init(Handle__void a, Handle__void b, Array__Contact contacts) {
    ContactSet instance;
    instance.a = a;
    instance.b = b;
    instance.contacts = contacts;
    return instance;
}

ContactSet ContactSet_new(Handle__void a, Handle__void b, Array__Contact contacts) {
    ContactSet _10 = ContactSet_init(a, b, contacts);
    return _10;
}

String ContactSet_prn(ContactSet *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "ContactSet");
  temp = Handle_prn__void(&p->a); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Contact(&p->contacts); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "ContactSet");
  temp = Handle_prn__void(&p->a);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Contact(&p->contacts);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

ContactSet ContactSet_reverse(ContactSet* cs) {
    ContactSet _60;
    /* let */ {
        Array _6 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Contact) * 0) };
        Array__Contact rev_MINUS_contacts = _6;
        Array__Contact* _10 = ContactSet_contacts(cs);
        Array__Contact* orig_MINUS_contacts = _10;
        /* let */ {
            int i = 0;
            int _22 = Array_length__Contact(orig_MINUS_contacts);
            bool _1000008 = Int__LT_(i, _22);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Contact* _28 = &rev_MINUS_contacts; // ref
                Contact* _33 = Array_unsafe_MINUS_nth__Contact(orig_MINUS_contacts, i);
                Contact _34 = Contact_reverse(_33);
                Array_push_MINUS_back_BANG___Contact(_28, _34);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _22 = Array_length__Contact(orig_MINUS_contacts);
                bool _1000008 = Int__LT_(i, _22);
                _1000006 = _1000008;
            }
        }
        Handle__void* _50 = ContactSet_b(cs);
        Handle__void _51 = Handle_copy__void(_50);
        Handle__void* _55 = ContactSet_a(cs);
        Handle__void _56 = Handle_copy__void(_55);
        ContactSet _58 = ContactSet_init(_51, _56, rev_MINUS_contacts);
        ContactSet _59 = _58;
        _60 = _59;
    }
    return _60;
}

ContactSet ContactSet_set_MINUS_a(ContactSet p, Handle__void newValue) {
    Handle_delete__void(p.a);
    p.a = newValue;
    return p;
}


void ContactSet_set_MINUS_a_BANG_(ContactSet* pRef, Handle__void newValue) {
    Handle_delete__void(pRef->a);
    pRef->a = newValue;
}


ContactSet ContactSet_set_MINUS_b(ContactSet p, Handle__void newValue) {
    Handle_delete__void(p.b);
    p.b = newValue;
    return p;
}


void ContactSet_set_MINUS_b_BANG_(ContactSet* pRef, Handle__void newValue) {
    Handle_delete__void(pRef->b);
    pRef->b = newValue;
}


ContactSet ContactSet_set_MINUS_contacts(ContactSet p, Array__Contact newValue) {
    Array_delete__Contact(p.contacts);
    p.contacts = newValue;
    return p;
}


void ContactSet_set_MINUS_contacts_BANG_(ContactSet* pRef, Array__Contact newValue) {
    Array_delete__Contact(pRef->contacts);
    pRef->contacts = newValue;
}


String ContactSet_str(ContactSet *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "ContactSet");
  temp = Handle_prn__void(&p->a); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Contact(&p->contacts); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "ContactSet");
  temp = Handle_prn__void(&p->a);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Contact(&p->contacts);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

ContactSet ContactSet_update_MINUS_a(ContactSet p, Lambda *updater) {
    p.a = (*updater).env ? ((Fn__LambdaEnv_Handle__void_Handle__void)(*updater).callback)((*updater).env, p.a) : ((Fn__Handle__void_Handle__void)(*updater).callback)(p.a);
    return p;
}


ContactSet ContactSet_update_MINUS_b(ContactSet p, Lambda *updater) {
    p.b = (*updater).env ? ((Fn__LambdaEnv_Handle__void_Handle__void)(*updater).callback)((*updater).env, p.b) : ((Fn__Handle__void_Handle__void)(*updater).callback)(p.b);
    return p;
}


ContactSet ContactSet_update_MINUS_contacts(ContactSet p, Lambda *updater) {
    p.contacts = (*updater).env ? ((Fn__LambdaEnv_Array__Contact_Array__Contact)(*updater).callback)((*updater).env, p.contacts) : ((Fn__Array__Contact_Array__Contact)(*updater).callback)(p.contacts);
    return p;
}


double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

double Double_blit(double x) {
    double _7 = x; // From the 'the' function.
    return _7;
}

double Double_clamp__double(double min, double max, double val) {
    double _28;
    bool _10 = Double__GT_(val, max);
    if (_10) {
        double _13 = max;
        _28 = _13;
    } else {
        double _26;
        bool _19 = Double__LT_(val, min);
        if (_19) {
            double _22 = min;
            _26 = _22;
        } else {
            double _25 = val;
            _26 = _25;
        }
        double _27 = _26;
        _28 = _27;
    }
    return _28;
}

double Double_dec(double x) {
    double _7 = Double__MINUS_(x, 1.0);
    return _7;
}

Maybe__double Double_from_MINUS_string(String* s) {
    Maybe__double _25;
    /* let */ {
        double res = 0.0;
        Maybe__double _24;
        double* _13 = &res; // ref
        bool _14 = Double_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__double _18 = Maybe_Just__double(res);
            Maybe__double _19 = _18;
            _24 = _19;
        } else {
            Maybe__double _22 = Maybe_Nothing__double();
            Maybe__double _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Double_hash(double* k) {
    double _8 = Double_copy(k);
    Long _9 = Double_to_MINUS_bytes(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

double Double_inc(double x) {
    double _7 = Double__PLUS_(1.0, x);
    return _7;
}

bool Double_negative_QMARK_(double a) {
    bool _7 = Double__LT_(a, 0.0);
    return _7;
}

bool Double_positive_QMARK_(double a) {
    bool _7 = Double__GT_(a, 0.0);
    return _7;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_random() {
    double _7 = Double_from_MINUS_int(CARP_INT_MAX);
    double _8 = Double_random_MINUS_between(0.0, _7);
    return _8;
}

double Double_random_MINUS_between(double lower, double upper) {
    double _20;
    /* let */ {
        double _10 = Double__MINUS_(upper, lower);
        double diff = _10;
        double _16 = Random_random();
        double _17 = Double__MUL_(diff, _16);
        double _19 = Double__PLUS_(_17, lower);
        _20 = _19;
    }
    return _20;
}

double Double_sign(double x) {
    double _26;
    bool _8 = Double__GT_(x, 0.0);
    if (_8) {
        double _11 = 1.0;
        _26 = _11;
    } else {
        double _24;
        bool _17 = Double__LT_(x, 0.0);
        if (_17) {
            double _20 = -1.0;
            _24 = _20;
        } else {
            double _23 = 0.0;
            _24 = _23;
        }
        double _25 = _24;
        _26 = _25;
    }
    return _26;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

String DoubleRef_format(String* s, double* x) {
    double _9 = Double_copy(x);
    String _10 = Double_format(s, _9);
    return _10;
}

String DoubleRef_prn(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

String DoubleRef_str(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

float Float_blit(float x) {
    float _7 = x; // From the 'the' function.
    return _7;
}

float Float_dec(float x) {
    float _7 = Float__MINUS_(x, 1.0f);
    return _7;
}

Maybe__float Float_from_MINUS_string(String* s) {
    Maybe__float _25;
    /* let */ {
        float res = 0.0f;
        Maybe__float _24;
        float* _13 = &res; // ref
        bool _14 = Float_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__float _18 = Maybe_Just__float(res);
            Maybe__float _19 = _18;
            _24 = _19;
        } else {
            Maybe__float _22 = Maybe_Nothing__float();
            Maybe__float _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Float_hash(float* k) {
    float _7 = Float_copy(k);
    int _8 = Float_to_MINUS_bytes(_7);
    return _8;
}

float Float_inc(float x) {
    float _7 = Float__PLUS_(1.0f, x);
    return _7;
}

bool Float_negative_QMARK_(float a) {
    bool _7 = Float__LT_(a, 0.0f);
    return _7;
}

bool Float_positive_QMARK_(float a) {
    bool _7 = Float__GT_(a, 0.0f);
    return _7;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_random() {
    float _7 = Float_from_MINUS_int(CARP_INT_MAX);
    float _8 = Float_random_MINUS_between(0.0f, _7);
    return _8;
}

float Float_random_MINUS_between(float lower, float upper) {
    float _24;
    /* let */ {
        float _10 = Float__MINUS_(upper, lower);
        float diff = _10;
        double _17 = Double_from_MINUS_float(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        float _21 = Double_to_MINUS_float(_20);
        float _23 = Float__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

float Float_sign(float x) {
    float _26;
    bool _8 = Float__GT_(x, 0.0f);
    if (_8) {
        float _11 = 1.0f;
        _26 = _11;
    } else {
        float _24;
        bool _17 = Float__LT_(x, 0.0f);
        if (_17) {
            float _20 = -1.0f;
            _24 = _20;
        } else {
            float _23 = 0.0f;
            _24 = _23;
        }
        float _25 = _24;
        _26 = _25;
    }
    return _26;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

String FloatRef_format(String* s, float* x) {
    float _9 = Float_copy(x);
    String _10 = Float_format(s, _9);
    return _10;
}

String FloatRef_prn(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

String FloatRef_str(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Pair__ColorId_String_Pair__ColorId_String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__bool_bool_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__double_double_double (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__void (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

Maybe__Contact Geometry_AABB_collide_MINUS_aabb(AABB* a, AABB* b) {
    Maybe__Contact _393;
    /* let */ {
        Vector3__double* _9 = AABB_min(a);
        Vector3__double* amin = _9;
        Vector3__double* _13 = AABB_max(a);
        Vector3__double* amax = _13;
        Vector3__double* _17 = AABB_min(b);
        Vector3__double* bmin = _17;
        Vector3__double* _21 = AABB_max(b);
        Vector3__double* bmax = _21;
        double* _28 = Vector3_x__double(amax);
        double _29 = Double_copy(_28);
        double* _33 = Vector3_x__double(bmax);
        double _34 = Double_copy(_33);
        double _35 = min__double(_29, _34);
        double* _40 = Vector3_x__double(amin);
        double _41 = Double_copy(_40);
        double* _45 = Vector3_x__double(bmin);
        double _46 = Double_copy(_45);
        double _47 = max__double(_41, _46);
        double _48 = Double__MINUS_(_35, _47);
        double ox = _48;
        double* _55 = Vector3_y__double(amax);
        double _56 = Double_copy(_55);
        double* _60 = Vector3_y__double(bmax);
        double _61 = Double_copy(_60);
        double _62 = min__double(_56, _61);
        double* _67 = Vector3_y__double(amin);
        double _68 = Double_copy(_67);
        double* _72 = Vector3_y__double(bmin);
        double _73 = Double_copy(_72);
        double _74 = max__double(_68, _73);
        double _75 = Double__MINUS_(_62, _74);
        double oy = _75;
        double* _82 = Vector3_z__double(amax);
        double _83 = Double_copy(_82);
        double* _87 = Vector3_z__double(bmax);
        double _88 = Double_copy(_87);
        double _89 = min__double(_83, _88);
        double* _94 = Vector3_z__double(amin);
        double _95 = Double_copy(_94);
        double* _99 = Vector3_z__double(bmin);
        double _100 = Double_copy(_99);
        double _101 = max__double(_95, _100);
        double _102 = Double__MINUS_(_89, _101);
        double oz = _102;
        Maybe__Contact _392;
        bool _130;
        bool _120;
        bool _110 = Double__GT_(ox, 0.0);
        if (_110) {
            bool _115 = Double__GT_(oy, 0.0);
            bool _116 = _115;
            _120 = _116;
        } else {
            bool _119 = false;
            _120 = _119;
        }
        if (_120) {
            bool _125 = Double__GT_(oz, 0.0);
            bool _126 = _125;
            _130 = _126;
        } else {
            bool _129 = false;
            _130 = _129;
        }
        if (_130) {
            Maybe__Contact _386;
            /* let */ {
                double depth = ox;
                int axis = 0;
                bool _143 = Double__LT_(oy, depth);
                if (_143) {
                    depth = oy;  // Double = Double
                    axis = 1;  // Int = Int
                } else {
                    /* () */
                }
                bool _162 = Double__LT_(oz, depth);
                if (_162) {
                    depth = oz;  // Double = Double
                    axis = 2;  // Int = Int
                } else {
                    /* () */
                }
                Maybe__Contact _384;
                /* let */ {
                    Vector3__double* _182 = AABB_min(a);
                    Vector3__double* _185 = AABB_min(b);
                    Vector3__double _186 = Vector3_sub__double(_182, _185);
                    Vector3__double diff = _186;
                    Vector3__double _273;
                    bool _192 = Int__EQ_(axis, 0);
                    if (_192) {
                        double _212;
                        Vector3__double* _201 = &diff; // ref
                        double* _202 = Vector3_x__double(_201);
                        double _203 = Double_copy(_202);
                        bool _205 = Double__LT_(_203, 0.0);
                        if (_205) {
                            double _208 = -1.0;
                            _212 = _208;
                        } else {
                            double _211 = 1.0;
                            _212 = _211;
                        }
                        Vector3__double _215 = Vector3_init__double(_212, 0.0, 0.0);
                        Vector3__double _216 = _215;
                        _273 = _216;
                    } else {
                        Vector3__double _271;
                        bool _222 = Int__EQ_(axis, 1);
                        if (_222) {
                            double _243;
                            Vector3__double* _232 = &diff; // ref
                            double* _233 = Vector3_y__double(_232);
                            double _234 = Double_copy(_233);
                            bool _236 = Double__LT_(_234, 0.0);
                            if (_236) {
                                double _239 = -1.0;
                                _243 = _239;
                            } else {
                                double _242 = 1.0;
                                _243 = _242;
                            }
                            Vector3__double _245 = Vector3_init__double(0.0, _243, 0.0);
                            Vector3__double _246 = _245;
                            _271 = _246;
                        } else {
                            double _268;
                            Vector3__double* _257 = &diff; // ref
                            double* _258 = Vector3_z__double(_257);
                            double _259 = Double_copy(_258);
                            bool _261 = Double__LT_(_259, 0.0);
                            if (_261) {
                                double _264 = -1.0;
                                _268 = _264;
                            } else {
                                double _267 = 1.0;
                                _268 = _267;
                            }
                            Vector3__double _269 = Vector3_init__double(0.0, 0.0, _268);
                            Vector3__double _270 = _269;
                            _271 = _270;
                        }
                        Vector3__double _272 = _271;
                        _273 = _272;
                    }
                    Vector3__double norm = _273;
                    double* _279 = Vector3_x__double(amin);
                    double _280 = Double_copy(_279);
                    double* _284 = Vector3_x__double(bmin);
                    double _285 = Double_copy(_284);
                    double _286 = max__double(_280, _285);
                    double x0 = _286;
                    double* _292 = Vector3_x__double(amax);
                    double _293 = Double_copy(_292);
                    double* _297 = Vector3_x__double(bmax);
                    double _298 = Double_copy(_297);
                    double _299 = min__double(_293, _298);
                    double x1 = _299;
                    double* _305 = Vector3_y__double(amin);
                    double _306 = Double_copy(_305);
                    double* _310 = Vector3_y__double(bmin);
                    double _311 = Double_copy(_310);
                    double _312 = max__double(_306, _311);
                    double y0 = _312;
                    double* _318 = Vector3_y__double(amax);
                    double _319 = Double_copy(_318);
                    double* _323 = Vector3_y__double(bmax);
                    double _324 = Double_copy(_323);
                    double _325 = min__double(_319, _324);
                    double y1 = _325;
                    double* _331 = Vector3_z__double(amin);
                    double _332 = Double_copy(_331);
                    double* _336 = Vector3_z__double(bmin);
                    double _337 = Double_copy(_336);
                    double _338 = max__double(_332, _337);
                    double z0 = _338;
                    double* _344 = Vector3_z__double(amax);
                    double _345 = Double_copy(_344);
                    double* _349 = Vector3_z__double(bmax);
                    double _350 = Double_copy(_349);
                    double _351 = min__double(_345, _350);
                    double z1 = _351;
                    double _358 = Double__PLUS_(x0, x1);
                    double _360 = Double__MUL_(_358, 0.5);
                    double _365 = Double__PLUS_(y0, y1);
                    double _367 = Double__MUL_(_365, 0.5);
                    double _372 = Double__PLUS_(z0, z1);
                    double _374 = Double__MUL_(_372, 0.5);
                    Vector3__double _375 = Vector3_init__double(_360, _367, _374);
                    Vector3__double cp = _375;
                    Contact _382 = Contact_init(depth, cp, norm);
                    Maybe__Contact _383 = Maybe_Just__Contact(_382);
                    _384 = _383;
                    Vector3_delete__double(diff);
                }
                Maybe__Contact _385 = _384;
                _386 = _385;
            }
            Maybe__Contact _387 = _386;
            _392 = _387;
        } else {
            Maybe__Contact _390 = Maybe_Nothing__Contact();
            Maybe__Contact _391 = _390;
            _392 = _391;
        }
        _393 = _392;
    }
    return _393;
}

bool Geometry_AABB_contains_QMARK_(AABB* a, Vector3__double* p) {
    bool _122;
    /* let */ {
        Vector3__double* _9 = AABB_min(a);
        Vector3__double* amin = _9;
        Vector3__double* _13 = AABB_max(a);
        Vector3__double* amax = _13;
        bool _121;
        bool _46;
        double* _21 = Vector3_x__double(p);
        double _22 = Double_copy(_21);
        double* _26 = Vector3_x__double(amin);
        double _27 = Double_copy(_26);
        bool _28 = _GT__EQ___double(_22, _27);
        if (_28) {
            double* _34 = Vector3_x__double(p);
            double _35 = Double_copy(_34);
            double* _39 = Vector3_x__double(amax);
            double _40 = Double_copy(_39);
            bool _41 = _LT__EQ___double(_35, _40);
            bool _42 = _41;
            _46 = _42;
        } else {
            bool _45 = false;
            _46 = _45;
        }
        if (_46) {
            bool _116;
            bool _79;
            double* _54 = Vector3_y__double(p);
            double _55 = Double_copy(_54);
            double* _59 = Vector3_y__double(amin);
            double _60 = Double_copy(_59);
            bool _61 = _GT__EQ___double(_55, _60);
            if (_61) {
                double* _67 = Vector3_y__double(p);
                double _68 = Double_copy(_67);
                double* _72 = Vector3_y__double(amax);
                double _73 = Double_copy(_72);
                bool _74 = _LT__EQ___double(_68, _73);
                bool _75 = _74;
                _79 = _75;
            } else {
                bool _78 = false;
                _79 = _78;
            }
            if (_79) {
                bool _111;
                double* _86 = Vector3_z__double(p);
                double _87 = Double_copy(_86);
                double* _91 = Vector3_z__double(amin);
                double _92 = Double_copy(_91);
                bool _93 = _GT__EQ___double(_87, _92);
                if (_93) {
                    double* _99 = Vector3_z__double(p);
                    double _100 = Double_copy(_99);
                    double* _104 = Vector3_z__double(amax);
                    double _105 = Double_copy(_104);
                    bool _106 = _LT__EQ___double(_100, _105);
                    bool _107 = _106;
                    _111 = _107;
                } else {
                    bool _110 = false;
                    _111 = _110;
                }
                bool _112 = _111;
                _116 = _112;
            } else {
                bool _115 = false;
                _116 = _115;
            }
            bool _117 = _116;
            _121 = _117;
        } else {
            bool _120 = false;
            _121 = _120;
        }
        _122 = _121;
    }
    return _122;
}

Vector3__double Geometry_Ray_at(Ray* r, double t) {
    Vector3__double* _8 = Ray_origin(r);
    Vector3__double* _13 = Ray_direction(r);
    Vector3__double _15 = Vector3_mul__double(_13, t);
    Vector3__double* _16 = &_15; // ref
    Vector3__double _17 = Vector3_add__double(_8, _16);
    Vector3_delete__double(_15);
    return _17;
}

Array__Vector3__double Geometry_Ray_fibonacci_MINUS_sphere(int samples) {
    Array__Vector3__double _106;
    /* let */ {
        Array _6 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Vector3__double) * 0) };
        Array__Vector3__double points = _6;
        double _14 = Double_sqrt(5.0);
        double _15 = Double__MINUS_(3.0, _14);
        double _16 = Double__MUL_(3.141592653589793, _15);
        double phi = _16;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, samples);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    double _37 = Double_from_MINUS_int(i);
                    int _42 = Int__MINUS_(samples, 1);
                    double _43 = Double_from_MINUS_int(_42);
                    double _44 = Double__DIV_(_37, _43);
                    double _46 = Double__MUL_(_44, 2.0);
                    double _47 = Double__MINUS_(1.0, _46);
                    double y = _47;
                    double _57 = Double__MUL_(y, y);
                    double _58 = Double__MINUS_(1.0, _57);
                    double _59 = max__double(0.0, _58);
                    double _60 = Double_sqrt(_59);
                    double r_MINUS_at_MINUS_y = _60;
                    double _66 = Double_from_MINUS_int(i);
                    double _67 = Double__MUL_(phi, _66);
                    double theta = _67;
                    double _72 = Double_cos(theta);
                    double _74 = Double__MUL_(_72, r_MINUS_at_MINUS_y);
                    double x = _74;
                    double _79 = Double_sin(theta);
                    double _81 = Double__MUL_(_79, r_MINUS_at_MINUS_y);
                    double z = _81;
                    Array__Vector3__double* _86 = &points; // ref
                    Vector3__double _91 = Vector3_init__double(x, y, z);
                    Array_push_MINUS_back_BANG___Vector3__double(_86, _91);
                }
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, samples);
                _1000006 = _1000008;
            }
        }
        Array__Vector3__double _105 = points;
        _106 = _105;
    }
    return _106;
}

Maybe__RayHit Geometry_Ray_intersect_MINUS_aabb(Ray* ray, AABB* aabb) {
    Maybe__RayHit _603;
    /* let */ {
        Vector3__double* _9 = Ray_origin(ray);
        Vector3__double* origin = _9;
        Vector3__double* _13 = Ray_direction(ray);
        Vector3__double* dir = _13;
        Vector3__double* _17 = AABB_min(aabb);
        Vector3__double* amin = _17;
        Vector3__double* _21 = AABB_max(aabb);
        Vector3__double* amax = _21;
        double _25 = Double_neg(CARP_DBL_MAX);
        double tmin = _25;
        double tmax = CARP_DBL_MAX;
        int hit_MINUS_axis = -1;
        double hit_MINUS_sign = 1.0;
        double* _40 = Vector3_x__double(dir);
        double _41 = Double_copy(_40);
        double _42 = Double_abs(_41);
        bool _44 = Double__LT_(_42, Geometry_EPSILON);
        if (_44) {
            bool _77;
            double* _52 = Vector3_x__double(origin);
            double _53 = Double_copy(_52);
            double* _57 = Vector3_x__double(amin);
            double _58 = Double_copy(_57);
            bool _59 = Double__LT_(_53, _58);
            if (_59) {
                bool _62 = true;
                _77 = _62;
            } else {
                double* _68 = Vector3_x__double(origin);
                double _69 = Double_copy(_68);
                double* _73 = Vector3_x__double(amax);
                double _74 = Double_copy(_73);
                bool _75 = Double__GT_(_69, _74);
                bool _76 = _75;
                _77 = _76;
            }
            if (_77) {
                tmax = -1.0;  // Double = Double
            } else {
                /* () */
            }
        } else {
            /* let */ {
                double* _97 = Vector3_x__double(dir);
                double _98 = Double_copy(_97);
                double _99 = Double__DIV_(1.0, _98);
                double invD = _99;
                double* _106 = Vector3_x__double(amin);
                double _107 = Double_copy(_106);
                double* _111 = Vector3_x__double(origin);
                double _112 = Double_copy(_111);
                double _113 = Double__MINUS_(_107, _112);
                double _115 = Double__MUL_(_113, invD);
                double t0 = _115;
                double* _122 = Vector3_x__double(amax);
                double _123 = Double_copy(_122);
                double* _127 = Vector3_x__double(origin);
                double _128 = Double_copy(_127);
                double _129 = Double__MINUS_(_123, _128);
                double _131 = Double__MUL_(_129, invD);
                double t1 = _131;
                double _136 = min__double(t0, t1);
                double near = _136;
                double _141 = max__double(t0, t1);
                double far = _141;
                double _150 = Double__PLUS_(tmin, Geometry_EPSILON);
                bool _151 = Double__GT_(near, _150);
                if (_151) {
                    tmin = near;  // Double = Double
                    hit_MINUS_axis = 0;  // Int = Int
                    double _174;
                    bool _167 = Double__LT_(t0, t1);
                    if (_167) {
                        double _170 = -1.0;
                        _174 = _170;
                    } else {
                        double _173 = 1.0;
                        _174 = _173;
                    }
                    hit_MINUS_sign = _174;  // Double = Double
                } else {
                    /* () */
                }
                double _186 = min__double(tmax, far);
                tmax = _186;  // Double = Double
            }
        }
        double* _198 = Vector3_y__double(dir);
        double _199 = Double_copy(_198);
        double _200 = Double_abs(_199);
        bool _202 = Double__LT_(_200, Geometry_EPSILON);
        if (_202) {
            bool _235;
            double* _210 = Vector3_y__double(origin);
            double _211 = Double_copy(_210);
            double* _215 = Vector3_y__double(amin);
            double _216 = Double_copy(_215);
            bool _217 = Double__LT_(_211, _216);
            if (_217) {
                bool _220 = true;
                _235 = _220;
            } else {
                double* _226 = Vector3_y__double(origin);
                double _227 = Double_copy(_226);
                double* _231 = Vector3_y__double(amax);
                double _232 = Double_copy(_231);
                bool _233 = Double__GT_(_227, _232);
                bool _234 = _233;
                _235 = _234;
            }
            if (_235) {
                tmax = -1.0;  // Double = Double
            } else {
                /* () */
            }
        } else {
            /* let */ {
                double* _255 = Vector3_y__double(dir);
                double _256 = Double_copy(_255);
                double _257 = Double__DIV_(1.0, _256);
                double invD = _257;
                double* _264 = Vector3_y__double(amin);
                double _265 = Double_copy(_264);
                double* _269 = Vector3_y__double(origin);
                double _270 = Double_copy(_269);
                double _271 = Double__MINUS_(_265, _270);
                double _273 = Double__MUL_(_271, invD);
                double t0 = _273;
                double* _280 = Vector3_y__double(amax);
                double _281 = Double_copy(_280);
                double* _285 = Vector3_y__double(origin);
                double _286 = Double_copy(_285);
                double _287 = Double__MINUS_(_281, _286);
                double _289 = Double__MUL_(_287, invD);
                double t1 = _289;
                double _294 = min__double(t0, t1);
                double near = _294;
                double _299 = max__double(t0, t1);
                double far = _299;
                double _308 = Double__PLUS_(tmin, Geometry_EPSILON);
                bool _309 = Double__GT_(near, _308);
                if (_309) {
                    tmin = near;  // Double = Double
                    hit_MINUS_axis = 1;  // Int = Int
                    double _332;
                    bool _325 = Double__LT_(t0, t1);
                    if (_325) {
                        double _328 = -1.0;
                        _332 = _328;
                    } else {
                        double _331 = 1.0;
                        _332 = _331;
                    }
                    hit_MINUS_sign = _332;  // Double = Double
                } else {
                    /* () */
                }
                double _344 = min__double(tmax, far);
                tmax = _344;  // Double = Double
            }
        }
        double* _356 = Vector3_z__double(dir);
        double _357 = Double_copy(_356);
        double _358 = Double_abs(_357);
        bool _360 = Double__LT_(_358, Geometry_EPSILON);
        if (_360) {
            bool _393;
            double* _368 = Vector3_z__double(origin);
            double _369 = Double_copy(_368);
            double* _373 = Vector3_z__double(amin);
            double _374 = Double_copy(_373);
            bool _375 = Double__LT_(_369, _374);
            if (_375) {
                bool _378 = true;
                _393 = _378;
            } else {
                double* _384 = Vector3_z__double(origin);
                double _385 = Double_copy(_384);
                double* _389 = Vector3_z__double(amax);
                double _390 = Double_copy(_389);
                bool _391 = Double__GT_(_385, _390);
                bool _392 = _391;
                _393 = _392;
            }
            if (_393) {
                tmax = -1.0;  // Double = Double
            } else {
                /* () */
            }
        } else {
            /* let */ {
                double* _413 = Vector3_z__double(dir);
                double _414 = Double_copy(_413);
                double _415 = Double__DIV_(1.0, _414);
                double invD = _415;
                double* _422 = Vector3_z__double(amin);
                double _423 = Double_copy(_422);
                double* _427 = Vector3_z__double(origin);
                double _428 = Double_copy(_427);
                double _429 = Double__MINUS_(_423, _428);
                double _431 = Double__MUL_(_429, invD);
                double t0 = _431;
                double* _438 = Vector3_z__double(amax);
                double _439 = Double_copy(_438);
                double* _443 = Vector3_z__double(origin);
                double _444 = Double_copy(_443);
                double _445 = Double__MINUS_(_439, _444);
                double _447 = Double__MUL_(_445, invD);
                double t1 = _447;
                double _452 = min__double(t0, t1);
                double near = _452;
                double _457 = max__double(t0, t1);
                double far = _457;
                double _466 = Double__PLUS_(tmin, Geometry_EPSILON);
                bool _467 = Double__GT_(near, _466);
                if (_467) {
                    tmin = near;  // Double = Double
                    hit_MINUS_axis = 2;  // Int = Int
                    double _490;
                    bool _483 = Double__LT_(t0, t1);
                    if (_483) {
                        double _486 = -1.0;
                        _490 = _486;
                    } else {
                        double _489 = 1.0;
                        _490 = _489;
                    }
                    hit_MINUS_sign = _490;  // Double = Double
                } else {
                    /* () */
                }
                double _502 = min__double(tmax, far);
                tmax = _502;  // Double = Double
            }
        }
        Maybe__RayHit _601;
        bool _523;
        bool _513 = _LT__EQ___double(tmin, tmax);
        if (_513) {
            bool _518 = Double__GT_(tmax, Geometry_EPSILON);
            bool _519 = _518;
            _523 = _519;
        } else {
            bool _522 = false;
            _523 = _522;
        }
        if (_523) {
            Maybe__RayHit _595;
            /* let */ {
                double _530 = max__double(0.0, tmin);
                double t = _530;
                Vector3__double _535 = Geometry_Ray_at(ray, t);
                Vector3__double p = _535;
                Vector3__double _586;
                bool _541 = Int__EQ_(hit_MINUS_axis, 0);
                if (_541) {
                    Vector3__double _547 = Vector3_init__double(hit_MINUS_sign, 0.0, 0.0);
                    Vector3__double _548 = _547;
                    _586 = _548;
                } else {
                    Vector3__double _584;
                    bool _554 = Int__EQ_(hit_MINUS_axis, 1);
                    if (_554) {
                        Vector3__double _560 = Vector3_init__double(0.0, hit_MINUS_sign, 0.0);
                        Vector3__double _561 = _560;
                        _584 = _561;
                    } else {
                        Vector3__double _582;
                        bool _567 = Int__EQ_(hit_MINUS_axis, 2);
                        if (_567) {
                            Vector3__double _573 = Vector3_init__double(0.0, 0.0, hit_MINUS_sign);
                            Vector3__double _574 = _573;
                            _582 = _574;
                        } else {
                            Vector3__double _580 = Vector3_init__double(0.0, 0.0, 0.0);
                            Vector3__double _581 = _580;
                            _582 = _581;
                        }
                        Vector3__double _583 = _582;
                        _584 = _583;
                    }
                    Vector3__double _585 = _584;
                    _586 = _585;
                }
                Vector3__double n = _586;
                RayHit _593 = RayHit_init(t, p, n);
                Maybe__RayHit _594 = Maybe_Just__RayHit(_593);
                _595 = _594;
            }
            Maybe__RayHit _596 = _595;
            _601 = _596;
        } else {
            Maybe__RayHit _599 = Maybe_Nothing__RayHit();
            Maybe__RayHit _600 = _599;
            _601 = _600;
        }
        Maybe__RayHit _602 = _601;
        _603 = _602;
    }
    return _603;
}

Maybe__RayHit Geometry_Ray_intersect_MINUS_sphere(Ray* ray, Sphere* sphere) {
    Maybe__RayHit _173;
    /* let */ {
        Vector3__double* _10 = Ray_origin(ray);
        Vector3__double* _13 = Sphere_center(sphere);
        Vector3__double _14 = Vector3_sub__double(_10, _13);
        Vector3__double oc = _14;
        Vector3__double* _19 = &oc; // ref
        Vector3__double* _22 = Ray_direction(ray);
        double _23 = Vector3_dot__double(_19, _22);
        double half_MINUS_b = _23;
        Vector3__double* _29 = &oc; // ref
        double _30 = Vector3_mag_MINUS_sq__double(_29);
        double* _35 = Sphere_radius(sphere);
        double _36 = Double_copy(_35);
        double* _40 = Sphere_radius(sphere);
        double _41 = Double_copy(_40);
        double _42 = Double__MUL_(_36, _41);
        double _43 = Double__MINUS_(_30, _42);
        double c = _43;
        double _49 = Double__MUL_(half_MINUS_b, half_MINUS_b);
        double _51 = Double__MINUS_(_49, c);
        double discriminant = _51;
        Maybe__RayHit _172;
        bool _57 = Double__LT_(discriminant, 0.0);
        if (_57) {
            Maybe__RayHit _60 = Maybe_Nothing__RayHit();
            Maybe__RayHit _61 = _60;
            _172 = _61;
        } else {
            Maybe__RayHit _170;
            /* let */ {
                double _67 = Double_sqrt(discriminant);
                double sqrtd = _67;
                double _72 = Double_neg(half_MINUS_b);
                double _74 = Double__MINUS_(_72, sqrtd);
                double root1 = _74;
                double _79 = Double_neg(half_MINUS_b);
                double _81 = Double__PLUS_(_79, sqrtd);
                double root2 = _81;
                double _105;
                bool _87 = Double__GT_(root1, Geometry_EPSILON);
                if (_87) {
                    double _90 = root1;
                    _105 = _90;
                } else {
                    double _103;
                    bool _96 = Double__GT_(root2, Geometry_EPSILON);
                    if (_96) {
                        double _99 = root2;
                        _103 = _99;
                    } else {
                        double _102 = -1.0;
                        _103 = _102;
                    }
                    double _104 = _103;
                    _105 = _104;
                }
                double t = _105;
                Maybe__RayHit _169;
                bool _111 = Double__GT_(t, 0.0);
                if (_111) {
                    Maybe__RayHit _163;
                    /* let */ {
                        Vector3__double _118 = Geometry_Ray_at(ray, t);
                        Vector3__double p = _118;
                        Vector3__double* _123 = &p; // ref
                        Vector3__double* _126 = Sphere_center(sphere);
                        Vector3__double _127 = Vector3_sub__double(_123, _126);
                        Vector3__double diff = _127;
                        Vector3__double* _132 = &diff; // ref
                        double _133 = Vector3_mag__double(_132);
                        double dist = _133;
                        Vector3__double _154;
                        bool _139 = Double__LT_(dist, Geometry_EPSILON);
                        if (_139) {
                            Vector3__double _145 = Vector3_init__double(0.0, 1.0, 0.0);
                            Vector3__double _146 = _145;
                            _154 = _146;
                        } else {
                            Vector3__double* _151 = &diff; // ref
                            Vector3__double _152 = Vector3_normalize__double(_151);
                            Vector3__double _153 = _152;
                            _154 = _153;
                        }
                        Vector3__double n = _154;
                        RayHit _161 = RayHit_init(t, p, n);
                        Maybe__RayHit _162 = Maybe_Just__RayHit(_161);
                        _163 = _162;
                        Vector3_delete__double(diff);
                    }
                    Maybe__RayHit _164 = _163;
                    _169 = _164;
                } else {
                    Maybe__RayHit _167 = Maybe_Nothing__RayHit();
                    Maybe__RayHit _168 = _167;
                    _169 = _168;
                }
                _170 = _169;
            }
            Maybe__RayHit _171 = _170;
            _172 = _171;
        }
        _173 = _172;
        Vector3_delete__double(oc);
    }
    return _173;
}

Vector3__double Geometry_Segment_direction(Segment* s) {
    Vector3__double _41;
    /* let */ {
        Vector3__double* _9 = Segment_end(s);
        Vector3__double* _12 = Segment_start(s);
        Vector3__double _13 = Vector3_sub__double(_9, _12);
        Vector3__double diff = _13;
        Vector3__double* _18 = &diff; // ref
        double _19 = Vector3_mag__double(_18);
        double dist = _19;
        Vector3__double _40;
        bool _25 = Double__LT_(dist, Geometry_EPSILON);
        if (_25) {
            Vector3__double _31 = Vector3_init__double(0.0, 0.0, 1.0);
            Vector3__double _32 = _31;
            _40 = _32;
        } else {
            Vector3__double* _37 = &diff; // ref
            Vector3__double _38 = Vector3_normalize__double(_37);
            Vector3__double _39 = _38;
            _40 = _39;
        }
        _41 = _40;
        Vector3_delete__double(diff);
    }
    return _41;
}

Maybe__RayHit Geometry_Segment_intersect_MINUS_aabb(Segment* s, AABB* aabb) {
    Maybe__RayHit _63;
    /* let */ {
        Vector3__double* _11 = Segment_start(s);
        Vector3__double _12 = Vector3_copy__double(_11);
        Vector3__double _15 = Geometry_Segment_direction(s);
        Ray _16 = Ray_init(_12, _15);
        Ray ray = _16;
        double _20 = Geometry_Segment_length(s);
        double len = _20;
        Ray* _25 = &ray; // ref
        Maybe__RayHit _27 = Geometry_Ray_intersect_MINUS_aabb(_25, aabb);
        Maybe__RayHit hit_MINUS_res = _27;
        Maybe__RayHit _62;
        if(hit_MINUS_res._tag == Maybe__RayHit_Nothing_tag) {
            Maybe__RayHit _30_temp = hit_MINUS_res;
            // Case expr:
            Maybe__RayHit _34 = Maybe_Nothing__RayHit();
            _62 = _34;
        }
        else if(hit_MINUS_res._tag == Maybe__RayHit_Just_tag) {
            Maybe__RayHit _30_temp = hit_MINUS_res;
            RayHit hit = _30_temp.u.Just.member0;
            // Case expr:
            Maybe__RayHit _61;
            RayHit* _44 = &hit; // ref
            double* _45 = RayHit_t(_44);
            double _46 = Double_copy(_45);
            double _50 = Double__PLUS_(len, Geometry_EPSILON);
            bool _51 = _LT__EQ___double(_46, _50);
            if (_51) {
                Maybe__RayHit _55 = Maybe_Just__RayHit(hit);
                Maybe__RayHit _56 = _55;
                _61 = _56;
            } else {
                Maybe__RayHit _59 = Maybe_Nothing__RayHit();
                Maybe__RayHit _60 = _59;
                RayHit_delete(hit);
                _61 = _60;
            }
            _62 = _61;
        }
        else UNHANDLED("geometry.carp", 438);
        _63 = _62;
        Ray_delete(ray);
    }
    return _63;
}

Maybe__RayHit Geometry_Segment_intersect_MINUS_sdf(Segment* s, SDF* sdf) {
    Maybe__RayHit _178;
    /* let */ {
        Vector3__double* _9 = Segment_start(s);
        Vector3__double* start = _9;
        Vector3__double* _13 = Segment_end(s);
        Vector3__double* end = _13;
        Vector3__double _18 = Vector3_sub__double(end, start);
        Vector3__double diff = _18;
        Vector3__double* _23 = &diff; // ref
        double _24 = Vector3_mag__double(_23);
        double len = _24;
        Vector3__double _45;
        bool _30 = Double__LT_(len, 1.0e-4);
        if (_30) {
            Vector3__double _36 = Vector3_init__double(0.0, 0.0, 1.0);
            Vector3__double _37 = _36;
            _45 = _37;
        } else {
            Vector3__double* _42 = &diff; // ref
            Vector3__double _43 = Vector3_normalize__double(_42);
            Vector3__double _44 = _43;
            _45 = _44;
        }
        Vector3__double dir = _45;
        double t = 0.0;
        bool hit_QMARK_ = false;
        Vector3__double _55 = Vector3_init__double(0.0, 0.0, 0.0);
        Vector3__double hit_MINUS_pt = _55;
        Vector3__double _61 = Vector3_init__double(0.0, 1.0, 0.0);
        Vector3__double hit_MINUS_norm = _61;
        /* let */ {
            int step = 0;
            bool _1000011 = Int__LT_(step, 10);
            bool _1000009 = _1000011;
            while (_1000009) {
                bool _88;
                bool _78 = not(hit_QMARK_);
                if (_78) {
                    bool _83 = _LT__EQ___double(t, len);
                    bool _84 = _83;
                    _88 = _84;
                } else {
                    bool _87 = false;
                    _88 = _87;
                }
                if (_88) {
                    /* let */ {
                        Vector3__double* _98 = &dir; // ref
                        Vector3__double _100 = Vector3_mul__double(_98, t);
                        Vector3__double* _101 = &_100; // ref
                        Vector3__double _102 = Vector3_add__double(start, _101);
                        Vector3__double p = _102;
                        Vector3__double* _108 = &p; // ref
                        double _109 = SDF_distance_MINUS_world(sdf, _108);
                        double d = _109;
                        bool _115 = Double__LT_(d, 1.0e-3);
                        if (_115) {
                            hit_QMARK_ = true;  // Bool = Bool
                            Vector3__double* _127 = &p; // ref
                            Vector3__double _128 = SDF_normal_MINUS_world(sdf, _127);
                            Vector3_delete__double(hit_MINUS_norm);
                            hit_MINUS_norm = _128;  // (Vector3 Double) = (Vector3 Double)
                            Vector3_delete__double(hit_MINUS_pt);
                            hit_MINUS_pt = p;  // (Vector3 Double) = (Vector3 Double)
                        } else {
                            double _141 = Double__PLUS_(t, d);
                            t = _141;  // Double = Double
                            Vector3_delete__double(p);
                        }
                        Vector3_delete__double(_100);
                    }
                } else {
                    /* () */
                }
                int _1000030 = Int__PLUS_(step, 1);
                step = _1000030;  // Int = Int
                bool _1000011 = Int__LT_(step, 10);
                _1000009 = _1000011;
            }
        }
        Maybe__RayHit _176;
        if (hit_QMARK_) {
            RayHit _169 = RayHit_init(t, hit_MINUS_pt, hit_MINUS_norm);
            Maybe__RayHit _170 = Maybe_Just__RayHit(_169);
            Maybe__RayHit _171 = _170;
            _176 = _171;
        } else {
            Maybe__RayHit _174 = Maybe_Nothing__RayHit();
            Maybe__RayHit _175 = _174;
            Vector3_delete__double(hit_MINUS_norm);
            Vector3_delete__double(hit_MINUS_pt);
            _176 = _175;
        }
        Maybe__RayHit _177 = _176;
        _178 = _177;
        Vector3_delete__double(diff);
        Vector3_delete__double(dir);
    }
    return _178;
}

Maybe__RayHit Geometry_Segment_intersect_MINUS_sphere(Segment* s, Sphere* sphere) {
    Maybe__RayHit _63;
    /* let */ {
        Vector3__double* _11 = Segment_start(s);
        Vector3__double _12 = Vector3_copy__double(_11);
        Vector3__double _15 = Geometry_Segment_direction(s);
        Ray _16 = Ray_init(_12, _15);
        Ray ray = _16;
        double _20 = Geometry_Segment_length(s);
        double len = _20;
        Ray* _25 = &ray; // ref
        Maybe__RayHit _27 = Geometry_Ray_intersect_MINUS_sphere(_25, sphere);
        Maybe__RayHit hit_MINUS_res = _27;
        Maybe__RayHit _62;
        if(hit_MINUS_res._tag == Maybe__RayHit_Nothing_tag) {
            Maybe__RayHit _30_temp = hit_MINUS_res;
            // Case expr:
            Maybe__RayHit _34 = Maybe_Nothing__RayHit();
            _62 = _34;
        }
        else if(hit_MINUS_res._tag == Maybe__RayHit_Just_tag) {
            Maybe__RayHit _30_temp = hit_MINUS_res;
            RayHit hit = _30_temp.u.Just.member0;
            // Case expr:
            Maybe__RayHit _61;
            RayHit* _44 = &hit; // ref
            double* _45 = RayHit_t(_44);
            double _46 = Double_copy(_45);
            double _50 = Double__PLUS_(len, Geometry_EPSILON);
            bool _51 = _LT__EQ___double(_46, _50);
            if (_51) {
                Maybe__RayHit _55 = Maybe_Just__RayHit(hit);
                Maybe__RayHit _56 = _55;
                _61 = _56;
            } else {
                Maybe__RayHit _59 = Maybe_Nothing__RayHit();
                Maybe__RayHit _60 = _59;
                RayHit_delete(hit);
                _61 = _60;
            }
            _62 = _61;
        }
        else UNHANDLED("geometry.carp", 428);
        _63 = _62;
        Ray_delete(ray);
    }
    return _63;
}

double Geometry_Segment_length(Segment* s) {
    Vector3__double* _7 = Segment_start(s);
    Vector3__double* _10 = Segment_end(s);
    double _11 = Vector3_dist__double(_7, _10);
    return _11;
}

Maybe__Contact Geometry_Sphere_collide_MINUS_aabb(Sphere* sphere, AABB* aabb) {
    Maybe__Contact _159;
    /* let */ {
        Vector3__double* _9 = Sphere_center(sphere);
        Vector3__double* center = _9;
        Vector3__double* _13 = AABB_min(aabb);
        Vector3__double* amin = _13;
        Vector3__double* _17 = AABB_max(aabb);
        Vector3__double* amax = _17;
        double* _24 = Vector3_x__double(amin);
        double _25 = Double_copy(_24);
        double* _29 = Vector3_x__double(amax);
        double _30 = Double_copy(_29);
        double* _34 = Vector3_x__double(center);
        double _35 = Double_copy(_34);
        double _36 = clamp__double(_25, _30, _35);
        double* _41 = Vector3_y__double(amin);
        double _42 = Double_copy(_41);
        double* _46 = Vector3_y__double(amax);
        double _47 = Double_copy(_46);
        double* _51 = Vector3_y__double(center);
        double _52 = Double_copy(_51);
        double _53 = clamp__double(_42, _47, _52);
        double* _58 = Vector3_z__double(amin);
        double _59 = Double_copy(_58);
        double* _63 = Vector3_z__double(amax);
        double _64 = Double_copy(_63);
        double* _68 = Vector3_z__double(center);
        double _69 = Double_copy(_68);
        double _70 = clamp__double(_59, _64, _69);
        Vector3__double _71 = Vector3_init__double(_36, _53, _70);
        Vector3__double closest = _71;
        Vector3__double* _76 = &closest; // ref
        Vector3__double _78 = Vector3_sub__double(_76, center);
        Vector3__double diff = _78;
        Vector3__double* _83 = &diff; // ref
        double _84 = Vector3_mag_MINUS_sq__double(_83);
        double d2 = _84;
        double* _89 = Sphere_radius(sphere);
        double _90 = Double_copy(_89);
        double r = _90;
        Maybe__Contact _158;
        double _98 = Double__MUL_(r, r);
        bool _99 = _LT__EQ___double(d2, _98);
        if (_99) {
            Maybe__Contact _152;
            /* let */ {
                double _105 = Double_sqrt(d2);
                double dist = _105;
                Vector3__double _136;
                bool _111 = Double__LT_(dist, Geometry_EPSILON);
                if (_111) {
                    Vector3__double _117 = Vector3_init__double(0.0, 1.0, 0.0);
                    Vector3__double _118 = _117;
                    _136 = _118;
                } else {
                    Vector3__double _134;
                    /* let */ {
                        Vector3__double* _125 = &diff; // ref
                        Vector3__double _126 = Vector3_normalize__double(_125);
                        Vector3__double n = _126;
                        Vector3__double* _131 = &n; // ref
                        Vector3__double _133 = Vector3_mul__double(_131, -1.0);
                        _134 = _133;
                        Vector3_delete__double(n);
                    }
                    Vector3__double _135 = _134;
                    _136 = _135;
                }
                Vector3__double norm = _136;
                double _141 = Double__MINUS_(r, dist);
                double depth = _141;
                Vector3__double p = closest;
                Contact _150 = Contact_init(depth, p, norm);
                Maybe__Contact _151 = Maybe_Just__Contact(_150);
                _152 = _151;
            }
            Maybe__Contact _153 = _152;
            _158 = _153;
        } else {
            Maybe__Contact _156 = Maybe_Nothing__Contact();
            Maybe__Contact _157 = _156;
            Vector3_delete__double(closest);
            _158 = _157;
        }
        _159 = _158;
        Vector3_delete__double(diff);
    }
    return _159;
}

Maybe__Contact Geometry_Sphere_collide_MINUS_sdf(Sphere* sphere, SDF* sdf) {
    Maybe__Contact _66;
    /* let */ {
        Vector3__double* _9 = Sphere_center(sphere);
        Vector3__double* center = _9;
        double _14 = SDF_distance(sdf, center);
        double dist = _14;
        double* _19 = Sphere_radius(sphere);
        double _20 = Double_copy(_19);
        double r = _20;
        Maybe__Contact _65;
        bool _26 = Double__LT_(dist, r);
        if (_26) {
            Maybe__Contact _59;
            /* let */ {
                double _33 = Double__MINUS_(r, dist);
                double depth = _33;
                Vector3__double _38 = SDF_normal_MINUS_at(sdf, center);
                Vector3__double norm = _38;
                Vector3__double* _46 = &norm; // ref
                Vector3__double _48 = Vector3_mul__double(_46, dist);
                Vector3__double* _49 = &_48; // ref
                Vector3__double _50 = Vector3_sub__double(center, _49);
                Vector3__double cp = _50;
                Contact _57 = Contact_init(depth, cp, norm);
                Maybe__Contact _58 = Maybe_Just__Contact(_57);
                _59 = _58;
                Vector3_delete__double(_48);
            }
            Maybe__Contact _60 = _59;
            _65 = _60;
        } else {
            Maybe__Contact _63 = Maybe_Nothing__Contact();
            Maybe__Contact _64 = _63;
            _65 = _64;
        }
        _66 = _65;
    }
    return _66;
}

Maybe__Contact Geometry_Sphere_collide_MINUS_sphere(Sphere* s1, Sphere* s2) {
    Maybe__Contact _108;
    /* let */ {
        Vector3__double* _10 = Sphere_center(s1);
        Vector3__double* _13 = Sphere_center(s2);
        Vector3__double _14 = Vector3_sub__double(_10, _13);
        Vector3__double diff = _14;
        Vector3__double* _19 = &diff; // ref
        double _20 = Vector3_mag_MINUS_sq__double(_19);
        double d2 = _20;
        double* _26 = Sphere_radius(s1);
        double _27 = Double_copy(_26);
        double* _31 = Sphere_radius(s2);
        double _32 = Double_copy(_31);
        double _33 = Double__PLUS_(_27, _32);
        double sum = _33;
        Maybe__Contact _107;
        double _41 = Double__MUL_(sum, sum);
        bool _42 = _LT__EQ___double(d2, _41);
        if (_42) {
            Maybe__Contact _101;
            /* let */ {
                double _48 = Double_sqrt(d2);
                double dist = _48;
                Vector3__double _69;
                bool _54 = Double__LT_(dist, Geometry_EPSILON);
                if (_54) {
                    Vector3__double _60 = Vector3_init__double(0.0, 1.0, 0.0);
                    Vector3__double _61 = _60;
                    _69 = _61;
                } else {
                    Vector3__double* _66 = &diff; // ref
                    Vector3__double _67 = Vector3_normalize__double(_66);
                    Vector3__double _68 = _67;
                    _69 = _68;
                }
                Vector3__double norm = _69;
                double _74 = Double__MINUS_(sum, dist);
                double depth = _74;
                Vector3__double* _79 = Sphere_center(s1);
                Vector3__double* _84 = &norm; // ref
                double* _88 = Sphere_radius(s1);
                double _89 = Double_copy(_88);
                Vector3__double _90 = Vector3_mul__double(_84, _89);
                Vector3__double* _91 = &_90; // ref
                Vector3__double _92 = Vector3_sub__double(_79, _91);
                Vector3__double p = _92;
                Contact _99 = Contact_init(depth, p, norm);
                Maybe__Contact _100 = Maybe_Just__Contact(_99);
                _101 = _100;
                Vector3_delete__double(_90);
            }
            Maybe__Contact _102 = _101;
            _107 = _102;
        } else {
            Maybe__Contact _105 = Maybe_Nothing__Contact();
            Maybe__Contact _106 = _105;
            _107 = _106;
        }
        _108 = _107;
        Vector3_delete__double(diff);
    }
    return _108;
}

bool Geometry_Sphere_contains_QMARK_(Sphere* s, Vector3__double* p) {
    bool _33;
    /* let */ {
        Vector3__double* _12 = Sphere_center(s);
        Vector3__double _14 = Vector3_sub__double(_12, p);
        Vector3__double* _15 = &_14; // ref
        double _16 = Vector3_mag_MINUS_sq__double(_15);
        double d2 = _16;
        double* _24 = Sphere_radius(s);
        double _25 = Double_copy(_24);
        double* _29 = Sphere_radius(s);
        double _30 = Double_copy(_29);
        double _31 = Double__MUL_(_25, _30);
        bool _32 = _LT__EQ___double(d2, _31);
        _33 = _32;
        Vector3_delete__double(_14);
    }
    return _33;
}

Plane Geometry_create_MINUS_plane(Vector3__double* p, Vector3__double* n) {
    Plane _22;
    /* let */ {
        Vector3__double _9 = Vector3_normalize__double(n);
        Vector3__double norm = _9;
        Vector3__double* _18 = &norm; // ref
        double _19 = Vector3_dot__double(p, _18);
        double _20 = Double_neg(_19);
        Plane _21 = Plane_init(norm, _20);
        _22 = _21;
    }
    return _22;
}

Ray Geometry_create_MINUS_ray(Vector3__double* origin, Vector3__double* direction) {
    Vector3__double _8 = Vector3_copy__double(origin);
    Vector3__double _11 = Vector3_normalize__double(direction);
    Ray _12 = Ray_init(_8, _11);
    return _12;
}

Handle__void Handle_copy__void(Handle__void* pRef) {
    Handle__void copy = *pRef;
    /* Ignore non-managed member 'index_MINUS_raw' : Uint64 */
    /* Ignore non-managed member 'generation_MINUS_raw' : Uint32 */
    return copy;
}

void Handle_delete__void(Handle__void p) {
    /* Ignore non-managed member 'index_MINUS_raw' : Uint64 */
    /* Ignore non-managed member 'generation_MINUS_raw' : Uint32 */
}

bool Handle_equal_QMARK___void_void(Handle__void* a, Handle__void* b) {
    bool _35;
    Uint64* _10 = Handle_index_MINUS_raw__void(a);
    Uint64 _11 = Uint64_copy(_10);
    Uint64* _15 = Handle_index_MINUS_raw__void(b);
    Uint64 _16 = Uint64_copy(_15);
    bool _17 = Uint64__EQ_(_11, _16);
    if (_17) {
        Uint32* _23 = Handle_generation_MINUS_raw__void(a);
        Uint32 _24 = Uint32_copy(_23);
        Uint32* _28 = Handle_generation_MINUS_raw__void(b);
        Uint32 _29 = Uint32_copy(_28);
        bool _30 = Uint32__EQ_(_24, _29);
        bool _31 = _30;
        _35 = _31;
    } else {
        bool _34 = false;
        _35 = _34;
    }
    return _35;
}

Uint32* Handle_generation_MINUS_raw__void(Handle__void* p) { return (&(p->generation_MINUS_raw)); }

Uint64* Handle_index_MINUS_raw__void(Handle__void* p) { return (&(p->index_MINUS_raw)); }

Handle__void Handle_init__void(Uint64 index_MINUS_raw, Uint32 generation_MINUS_raw) {
    Handle__void instance;
    instance.index_MINUS_raw = index_MINUS_raw;
    instance.generation_MINUS_raw = generation_MINUS_raw;
    return instance;
}

bool Handle_less_MINUS_than_QMARK___void_void(Handle__void* a, Handle__void* b) {
    bool _54;
    Uint64* _10 = Handle_index_MINUS_raw__void(a);
    Uint64 _11 = Uint64_copy(_10);
    Uint64* _15 = Handle_index_MINUS_raw__void(b);
    Uint64 _16 = Uint64_copy(_15);
    bool _17 = Uint64__LT_(_11, _16);
    if (_17) {
        bool _20 = true;
        _54 = _20;
    } else {
        bool _52;
        Uint64* _27 = Handle_index_MINUS_raw__void(a);
        Uint64 _28 = Uint64_copy(_27);
        Uint64* _32 = Handle_index_MINUS_raw__void(b);
        Uint64 _33 = Uint64_copy(_32);
        bool _34 = Uint64__GT_(_28, _33);
        if (_34) {
            bool _37 = false;
            _52 = _37;
        } else {
            Uint32* _43 = Handle_generation_MINUS_raw__void(a);
            Uint32 _44 = Uint32_copy(_43);
            Uint32* _48 = Handle_generation_MINUS_raw__void(b);
            Uint32 _49 = Uint32_copy(_48);
            bool _50 = Uint32__LT_(_44, _49);
            bool _51 = _50;
            _52 = _51;
        }
        bool _53 = _52;
        _54 = _53;
    }
    return _54;
}

String Handle_prn__void(Handle__void *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "(Handle ())");
  temp = Uint64_prn(p->index_MINUS_raw); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->generation_MINUS_raw); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Handle");
  temp = Uint64_prn(p->index_MINUS_raw);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Uint32_prn(p->generation_MINUS_raw);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

int Heap_lchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(1, _9);
    return _10;
}

int Heap_parent(int i) {
    int _8 = Int__MINUS_(i, 1);
    int _10 = Int__DIV_(_8, 2);
    return _10;
}

int Heap_rchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(2, _9);
    return _10;
}

void IO_Raw_fclose_BANG_(FILE* file) {
    /* let */ {
        int _8 = fclose(file);
        int _ = _8;
        /* () */
    }
}

void IO_Raw_fflush_BANG_(FILE* file) {
    /* let */ {
        int _8 = fflush(file);
        int _ = _8;
        /* () */
    }
}

FILE* IO_Raw_fopen(String* pathname, String* mode) {
    CChar* _8 = String_cstr(pathname);
    CChar* _11 = String_cstr(mode);
    FILE* _12 = fopen(_8, _11);
    return _12;
}

int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(file_MINUS_name);
    int _14 = fread(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(data);
    int _14 = fwrite(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    /* let */ {
        int _14 = IO_Raw_fwrite(data, item_MINUS_size, items_MINUS_count, file);
        int _ = _14;
        /* () */
    }
}

int IO_Raw_unlink(String* file_MINUS_name) {
    CChar* _7 = String_cstr(file_MINUS_name);
    int _8 = unlink(_7);
    return _8;
}

void IO_Raw_unlink_BANG_(String* file_MINUS_name) {
    /* let */ {
        int _8 = IO_Raw_unlink(file_MINUS_name);
        int _ = _8;
        /* () */
    }
}

Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "ab";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _1000010 = String_format(_29_ref, _34);
            String* _1000008 = &_1000010; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _1000013 = String_format(_39_ref, file_MINUS_name);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _45 = String_copy(_1000005);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_33);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _1000025 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _1000023 = &_1000025; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _1000028 = Int_format(_89_ref, bytes2write);
                    String* _1000026 = &_1000028; // ref
                    String _1000022 = String_append(_1000023, _1000026);
                    String* _1000020 = &_1000022; // ref
                    String _95 = String_copy(_1000020);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_1000022);
                    String_delete(_1000025);
                    String_delete(_1000028);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

void IO_color(ColorId cid) {
    String _8 = Color_color(cid);
    String* _9 = &_8; // ref
    IO_print(_9);
    String_delete(_8);
}

void IO_colorize(ColorId cid, String* s) {
    String _10 = Color_colorize(cid, s);
    String* _11 = &_10; // ref
    IO_print(_11);
    String_delete(_10);
}

Result__Char_String IO_fgetc(FILE* file) {
    Result__Char_String _43;
    /* let */ {
        int _8 = fgetc(file);
        int _CHAR_ = _8;
        Result__Char_String _42;
        bool _13 = feof(file);
        if (_13) {
            static String _17 = "couldn't read char from file, EOF reached";
            String *_17_ref = &_17;
            String _18 = String_copy(_17_ref);
            Result__Char_String _19 = Result_Error__String_Char(_18);
            Result__Char_String _20 = _19;
            _42 = _20;
        } else {
            Result__Char_String _40;
            bool _25 = ferror(file);
            if (_25) {
                static String _29 = "error while reading char from file";
                String *_29_ref = &_29;
                String _30 = String_copy(_29_ref);
                Result__Char_String _31 = Result_Error__String_Char(_30);
                Result__Char_String _32 = _31;
                _40 = _32;
            } else {
                Char _37 = Char_from_MINUS_int(_CHAR_);
                Result__Char_String _38 = Result_Success__Char_String(_37);
                Result__Char_String _39 = _38;
                _40 = _39;
            }
            Result__Char_String _41 = _40;
            _42 = _41;
        }
        _43 = _42;
    }
    return _43;
}

Maybe__String IO_getenv(String* s) {
    Maybe__String _28;
    /* let */ {
        CChar* _9 = String_cstr(s);
        CChar* _10 = getenv(_9);
        CChar* e = _10;
        Maybe__String _27;
        bool _15 = null_QMARK___CChar(e);
        if (_15) {
            Maybe__String _18 = Maybe_Nothing__String();
            Maybe__String _19 = _18;
            _27 = _19;
        } else {
            String _24 = String_from_MINUS_cstr(e);
            Maybe__String _25 = Maybe_Just__String(_24);
            Maybe__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode) {
    Result__FILE_MUL__String _28;
    /* let */ {
        FILE* _10 = IO_Raw_fopen(filename, mode);
        FILE* ptr = _10;
        Result__FILE_MUL__String _27;
        bool _15 = null_QMARK___FILE(ptr);
        if (_15) {
            String _19 = System_error_MINUS_text();
            Result__FILE_MUL__String _20 = Result_Error__String_FILE_MUL_(_19);
            Result__FILE_MUL__String _21 = _20;
            _27 = _21;
        } else {
            Result__FILE_MUL__String _25 = Result_Success__FILE_MUL__String(ptr);
            Result__FILE_MUL__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__String_String IO_read_MINUS__GT_EOF(String* filename) {
    Result__String_String _66;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String file_QMARK_ = _9;
        Result__String_String _65;
        if(file_QMARK_._tag == Result__FILE_MUL__String_Error_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            String x = _12_temp.u.Error.member0;
            // Case expr:
            Result__String_String _18 = Result_Error__String_String(x);
            _65 = _18;
        }
        else if(file_QMARK_._tag == Result__FILE_MUL__String_Success_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            FILE* f = _12_temp.u.Success.member0;
            // Case expr:
            Result__String_String _64;
            /* let */ {
                int _25 = Int_zero();
                int c = _25;
                Array _27 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
                Array__uint8_t r = _27;
                int _36 = fgetc(f);
                c = _36;  // Int = Int
                bool _41 = _DIV__EQ___int(c, EOF);
                bool _42 = _41;
                bool _52 = _42;
                while (_52) {
                    uint8_t _49 = Byte_from_MINUS_int(c);
                    Array__uint8_t _50 = Array_push_MINUS_back__uint8_t(r, _49);
                    r = _50;  // (Array Byte) = (Array Byte)
                    int _36 = fgetc(f);
                    c = _36;  // Int = Int
                    bool _41 = _DIV__EQ___int(c, EOF);
                    bool _42 = _41;
                    _52 = _42;
                }
                IO_Raw_fclose_BANG_(f);
                Array__uint8_t* _60 = &r; // ref
                String _61 = String_from_MINUS_bytes(_60);
                Result__String_String _62 = Result_Success__String_String(_61);
                Result__String_String _63 = _62;
                _64 = _63;
                Array_delete__uint8_t(r);
            }
            _65 = _64;
        }
        else UNHANDLED("IO.carp", 273);
        _66 = _65;
    }
    return _66;
}

Result__String_String IO_read_MINUS_file(String* filename) {
    Result__String_String _176;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String finput_QMARK_ = _9;
        Result__String_String _175;
        Result__FILE_MUL__String* _15 = &finput_QMARK_; // ref
        bool _16 = Result_error_QMARK___FILE_MUL__String(_15);
        if (_16) {
            static String _24 = "Failed to open file='%s', error='";
            String *_24_ref = &_24;
            String _1000010 = String_format(_24_ref, filename);
            String* _1000008 = &_1000010; // ref
            static String _30 = "%s'";
            String *_30_ref = &_30;
            String _34 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(finput_QMARK_);
            String* _35 = &_34; // ref
            String _1000013 = String_format(_30_ref, _35);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _40 = String_copy(_1000005);
            Result__String_String _41 = Result_Error__String_String(_40);
            Result__String_String _42 = _41;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_34);
            _175 = _42;
        } else {
            Result__String_String _173;
            /* let */ {
                FILE* _48 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(finput_QMARK_);
                FILE* finput = _48;
                fseek(finput, 0, SEEK_END);
                int _68;
                /* let */ {
                    int _60 = ftell(finput);
                    int flength = _60;
                    rewind(finput);
                    int _67 = flength;
                    _68 = _67;
                }
                int _69 = _68;
                int length = _69;
                String _74 = String_allocate(length, 48/*'0'*/);
                String buffer = _74;
                Result__String_String _172;
                String* _81 = &buffer; // ref
                bool _82 = String_allocated_QMARK_(_81);
                bool _83 = not(_82);
                if (_83) {
                    IO_Raw_fclose_BANG_(finput);
                    static String _94 = "Failed to open buffer with size=%d from file='";
                    String *_94_ref = &_94;
                    String _1000026 = Int_format(_94_ref, length);
                    String* _1000024 = &_1000026; // ref
                    static String _100 = "%s'";
                    String *_100_ref = &_100;
                    String _1000029 = String_format(_100_ref, filename);
                    String* _1000027 = &_1000029; // ref
                    String _1000023 = String_append(_1000024, _1000027);
                    String* _1000021 = &_1000023; // ref
                    String _106 = String_copy(_1000021);
                    Result__String_String _107 = Result_Error__String_String(_106);
                    Result__String_String _108 = _107;
                    String_delete(_1000023);
                    String_delete(_1000026);
                    String_delete(_1000029);
                    String_delete(buffer);
                    _172 = _108;
                } else {
                    Result__String_String _170;
                    /* let */ {
                        String* _115 = &buffer; // ref
                        int _119 = IO_Raw_fread(_115, 1, length, finput);
                        int bytes_MINUS_read = _119;
                        IO_Raw_fclose_BANG_(finput);
                        Result__String_String _169;
                        bool _130 = Int__EQ_(bytes_MINUS_read, length);
                        bool _131 = not(_130);
                        if (_131) {
                            static String _139 = "Error: file='%s' has length=";
                            String *_139_ref = &_139;
                            String _1000039 = String_format(_139_ref, filename);
                            String* _1000037 = &_1000039; // ref
                            static String _147 = "%d but bytes-read=";
                            String *_147_ref = &_147;
                            String _1000045 = Int_format(_147_ref, length);
                            String* _1000043 = &_1000045; // ref
                            static String _153 = "%d";
                            String *_153_ref = &_153;
                            String _1000048 = Int_format(_153_ref, bytes_MINUS_read);
                            String* _1000046 = &_1000048; // ref
                            String _1000042 = String_append(_1000043, _1000046);
                            String* _1000040 = &_1000042; // ref
                            String _1000036 = String_append(_1000037, _1000040);
                            String* _1000034 = &_1000036; // ref
                            String _161 = String_copy(_1000034);
                            Result__String_String _162 = Result_Error__String_String(_161);
                            Result__String_String _163 = _162;
                            String_delete(_1000036);
                            String_delete(_1000039);
                            String_delete(_1000042);
                            String_delete(_1000045);
                            String_delete(_1000048);
                            String_delete(buffer);
                            _169 = _163;
                        } else {
                            Result__String_String _167 = Result_Success__String_String(buffer);
                            Result__String_String _168 = _167;
                            _169 = _168;
                        }
                        _170 = _169;
                    }
                    Result__String_String _171 = _170;
                    _172 = _171;
                }
                _173 = _172;
            }
            Result__String_String _174 = _173;
            _175 = _174;
        }
        _176 = _175;
    }
    return _176;
}

Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "wb";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _1000010 = String_format(_29_ref, _34);
            String* _1000008 = &_1000010; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _1000013 = String_format(_39_ref, file_MINUS_name);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _45 = String_copy(_1000005);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_33);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _1000025 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _1000023 = &_1000025; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _1000028 = Int_format(_89_ref, bytes2write);
                    String* _1000026 = &_1000028; // ref
                    String _1000022 = String_append(_1000023, _1000026);
                    String* _1000020 = &_1000022; // ref
                    String _95 = String_copy(_1000020);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_1000022);
                    String_delete(_1000025);
                    String_delete(_1000028);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

int Int_blit(int x) {
    int _7 = x; // From the 'the' function.
    return _7;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

int Int_from_MINUS_int(int a) {
    return a;
}

Maybe__int Int_from_MINUS_string(String* s) {
    Maybe__int _25;
    /* let */ {
        int res = 0;
        Maybe__int _24;
        int* _13 = &res; // ref
        bool _14 = Int_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__int _18 = Maybe_Just__int(res);
            Maybe__int _19 = _18;
            _24 = _19;
        } else {
            Maybe__int _22 = Maybe_Nothing__int();
            Maybe__int _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Int_hash(int* k) {
    int _8 = Int_copy(k);
    int _9 = _8; // From the 'the' function.
    return _9;
}

bool Int_negative_QMARK_(int a) {
    bool _7 = Int__LT_(a, 0);
    return _7;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_positive_MINUS_mod(int k, int n) {
    int _27;
    /* let */ {
        int _10 = Int_mod(k, n);
        int r = _10;
        int _26;
        bool _16 = Int__GT_(0, r);
        if (_16) {
            int _21 = Int__PLUS_(r, n);
            int _22 = _21;
            _26 = _22;
        } else {
            int _25 = r;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

bool Int_positive_QMARK_(int a) {
    bool _7 = Int__GT_(a, 0);
    return _7;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = _DIV__EQ___int(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___int(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = _DIV__EQ___int(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_random() {
    int _6 = Int_random_MINUS_between(0, CARP_INT_MAX);
    return _6;
}

int Int_random_MINUS_between(int lower, int upper) {
    int _24;
    /* let */ {
        int _10 = Int__MINUS_(upper, lower);
        int diff = _10;
        double _17 = Double_from_MINUS_int(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        int _21 = Double_to_MINUS_int(_20);
        int _23 = Int__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

int Int_sign(int n) {
    int _26;
    bool _8 = Int__GT_(n, 0);
    if (_8) {
        int _11 = 1;
        _26 = _11;
    } else {
        int _24;
        bool _17 = Int__LT_(n, 0);
        if (_17) {
            int _20 = -1;
            _24 = _20;
        } else {
            int _23 = 0;
            _24 = _23;
        }
        int _25 = _24;
        _26 = _25;
    }
    return _26;
}

int Int_to_MINUS_int(int a) {
    return a;
}

int Int_zero() {
    return 0;
}

Int16 Int16_blit(Int16 x) {
    Int16 _7 = x; // From the 'the' function.
    return _7;
}

int Int16_hash(Int16* k) {
    Int16 _8 = Int16_copy(k);
    Long _9 = Int16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int16_prn(Int16 a) {
    String _6 = Int16_str(a);
    return _6;
}

Int16 Int16_zero() {
    Int16 _5 = Int16_from_MINUS_long(0l);
    return _5;
}

bool Int16Extra__EQ_(Int16* a, Int16* b) {
    Int16 _8 = Int16_copy(a);
    Int16 _11 = Int16_copy(b);
    bool _12 = Int16__EQ_(_8, _11);
    return _12;
}

String Int16Extra_prn(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_prn(_7);
    return _8;
}

String Int16Extra_str(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_str(_7);
    return _8;
}

Int32 Int32_blit(Int32 x) {
    Int32 _7 = x; // From the 'the' function.
    return _7;
}

int Int32_hash(Int32* k) {
    Int32 _8 = Int32_copy(k);
    Long _9 = Int32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int32_prn(Int32 a) {
    String _6 = Int32_str(a);
    return _6;
}

Int32 Int32_zero() {
    Int32 _5 = Int32_from_MINUS_long(0l);
    return _5;
}

bool Int32Extra__EQ_(Int32* a, Int32* b) {
    Int32 _8 = Int32_copy(a);
    Int32 _11 = Int32_copy(b);
    bool _12 = Int32__EQ_(_8, _11);
    return _12;
}

String Int32Extra_prn(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_prn(_7);
    return _8;
}

String Int32Extra_str(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_str(_7);
    return _8;
}

Int64 Int64_blit(Int64 x) {
    Int64 _7 = x; // From the 'the' function.
    return _7;
}

int Int64_hash(Int64* k) {
    Int64 _8 = Int64_copy(k);
    Long _9 = Int64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int64_prn(Int64 a) {
    String _6 = Int64_str(a);
    return _6;
}

Int64 Int64_zero() {
    Int64 _5 = Int64_from_MINUS_long(0l);
    return _5;
}

bool Int64Extra__EQ_(Int64* a, Int64* b) {
    Int64 _8 = Int64_copy(a);
    Int64 _11 = Int64_copy(b);
    bool _12 = Int64__EQ_(_8, _11);
    return _12;
}

String Int64Extra_prn(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_prn(_7);
    return _8;
}

String Int64Extra_str(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_str(_7);
    return _8;
}

Int8 Int8_blit(Int8 x) {
    Int8 _7 = x; // From the 'the' function.
    return _7;
}

int Int8_hash(Int8* k) {
    Int8 _8 = Int8_copy(k);
    Long _9 = Int8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int8_prn(Int8 a) {
    String _6 = Int8_str(a);
    return _6;
}

Int8 Int8_zero() {
    Int8 _5 = Int8_from_MINUS_long(0l);
    return _5;
}

bool Int8Extra__EQ_(Int8* a, Int8* b) {
    Int8 _8 = Int8_copy(a);
    Int8 _11 = Int8_copy(b);
    bool _12 = Int8__EQ_(_8, _11);
    return _12;
}

String Int8Extra_prn(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_prn(_7);
    return _8;
}

String Int8Extra_str(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_str(_7);
    return _8;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

String IntRef_format(String* s, int* x) {
    int _9 = Int_copy(x);
    String _10 = Int_format(s, _9);
    return _10;
}

String IntRef_prn(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

String IntRef_str(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

void Integrator_integrate_BANG_(Transform* t, Body* b, Vector3__double* accel, Vector3__double* ang_MINUS_accel, double dt) {
    /* let */ {
        Vector3__double* _13 = Body_velocity(b);
        double* _18 = Body_damping(b);
        double _19 = Double_copy(_18);
        double _21 = Double_pow(_19, dt);
        Vector3__double _22 = Vector3_mul__double(_13, _21);
        Vector3__double damped_MINUS_v = _22;
        Vector3__double* _27 = &damped_MINUS_v; // ref
        Vector3__double _32 = Vector3_mul__double(accel, dt);
        Vector3__double* _33 = &_32; // ref
        Vector3__double _34 = Vector3_add__double(_27, _33);
        Vector3__double new_MINUS_v = _34;
        Vector3__double* _39 = Body_angular_MINUS_velocity(b);
        double* _44 = Body_angular_MINUS_damping(b);
        double _45 = Double_copy(_44);
        double _47 = Double_pow(_45, dt);
        Vector3__double _48 = Vector3_mul__double(_39, _47);
        Vector3__double damped_MINUS_w = _48;
        Vector3__double* _53 = &damped_MINUS_w; // ref
        Vector3__double _58 = Vector3_mul__double(ang_MINUS_accel, dt);
        Vector3__double* _59 = &_58; // ref
        Vector3__double _60 = Vector3_add__double(_53, _59);
        Vector3__double new_MINUS_w = _60;
        Vector3__double* _65 = &new_MINUS_v; // ref
        Vector3__double _67 = Vector3_mul__double(_65, dt);
        Vector3__double dp = _67;
        Quaternion* _72 = Transform_rotation(t);
        Quaternion _73 = Quaternion_copy(_72);
        Quaternion q_MINUS_old = _73;
        Vector3__double* _80 = &new_MINUS_w; // ref
        double* _81 = Vector3_x__double(_80);
        double _82 = Double_copy(_81);
        Vector3__double* _87 = &new_MINUS_w; // ref
        double* _88 = Vector3_y__double(_87);
        double _89 = Double_copy(_88);
        Vector3__double* _94 = &new_MINUS_w; // ref
        double* _95 = Vector3_z__double(_94);
        double _96 = Double_copy(_95);
        Quaternion _98 = Quaternion_init(_82, _89, _96, 0.0);
        Quaternion w_MINUS_quat = _98;
        Quaternion* _103 = &w_MINUS_quat; // ref
        Quaternion* _106 = &q_MINUS_old; // ref
        Quaternion _107 = Quaternion_mul_MINUS_raw(_103, _106);
        Quaternion q_MINUS_dot = _107;
        Quaternion* _114 = &q_MINUS_old; // ref
        Quaternion* _119 = &q_MINUS_dot; // ref
        double _123 = Double__MUL_(0.5, dt);
        Quaternion _124 = Quaternion_scale(_119, _123);
        Quaternion* _125 = &_124; // ref
        Quaternion _126 = Quaternion_add(_114, _125);
        Quaternion* _127 = &_126; // ref
        Quaternion _128 = Quaternion_normalize(_127);
        Quaternion q_MINUS_new = _128;
        Body_set_MINUS_velocity_BANG_(b, new_MINUS_v);
        Body_set_MINUS_angular_MINUS_velocity_BANG_(b, new_MINUS_w);
        Vector3__double* _144 = Transform_position(t);
        Vector3__double* _147 = &dp; // ref
        Vector3__double _148 = Vector3_add__double(_144, _147);
        Transform_set_MINUS_position_BANG_(t, _148);
        Transform_set_MINUS_rotation_BANG_(t, q_MINUS_new);
        Quaternion_delete(_124);
        Quaternion_delete(_126);
        Quaternion_delete(q_MINUS_dot);
        Quaternion_delete(q_MINUS_old);
        Quaternion_delete(w_MINUS_quat);
        Vector3_delete__double(_32);
        Vector3_delete__double(_58);
        Vector3_delete__double(damped_MINUS_v);
        Vector3_delete__double(damped_MINUS_w);
        Vector3_delete__double(dp);
    }
}

void Integrator_step_BANG_(Transform* t, Body* b, double dt) {
    Integrator_step_MINUS_custom_BANG_(t, b, dt, 1.666e-2);
}

void Integrator_step_MINUS_custom_BANG_(Transform* t, Body* b, double dt, double sub_MINUS_step_MINUS_size) {
    BodyType* _10 = Body_body_MINUS_type(b);
    if(_10->_tag == BodyType_Dynamic_tag) {
        BodyType* _10_temp = _10;
        // Case expr:
        bool* _17 = Body_is_MINUS_sleeping(b);
        bool _18 = Bool_copy(_17);
        if (_18) {
            /* () */
        } else {
            /* let */ {
                double _28 = min__double(dt, 0.1);
                double accum = _28;
                Vector3__double* _33 = Body_force(b);
                double* _37 = Body_inv_MINUS_mass(b);
                double _38 = Double_copy(_37);
                Vector3__double _39 = Vector3_mul__double(_33, _38);
                Vector3__double accel = _39;
                Vector3__double* _44 = Body_torque(b);
                double* _48 = Body_inv_MINUS_inertia(b);
                double _49 = Double_copy(_48);
                Vector3__double _50 = Vector3_mul__double(_44, _49);
                Vector3__double ang_MINUS_accel = _50;
                bool _58 = Double__GT_(accum, 0.0);
                bool _87 = _58;
                while (_87) {
                    /* let */ {
                        double _64 = min__double(accum, sub_MINUS_step_MINUS_size);
                        double this_MINUS_dt = _64;
                        Vector3__double* _72 = &accel; // ref
                        Vector3__double* _75 = &ang_MINUS_accel; // ref
                        Integrator_integrate_BANG_(t, b, _72, _75, this_MINUS_dt);
                        double _83 = Double__MINUS_(accum, this_MINUS_dt);
                        accum = _83;  // Double = Double
                    }
                    bool _58 = Double__GT_(accum, 0.0);
                    _87 = _58;
                }
                Vector3__double _94 = Vector3_init__double(0.0, 0.0, 0.0);
                Body_set_MINUS_force_BANG_(b, _94);
                Vector3__double _102 = Vector3_init__double(0.0, 0.0, 0.0);
                Body_set_MINUS_torque_BANG_(b, _102);
                Vector3_delete__double(accel);
                Vector3_delete__double(ang_MINUS_accel);
            }
        }
    }
    else if(true) {
        BodyType* _10_temp = _10;
        BodyType* wildcard_109 = _10_temp;
        /* () */
    }
    else UNHANDLED("dynamics.carp", 121);
}

LocalCrater LocalCrater_copy(LocalCrater* pRef) {
    LocalCrater copy = *pRef;
    copy.pos = Vector3_copy__double(&(pRef->pos));
    /* Ignore non-managed member 'radius' : Double */
    return copy;
}

void LocalCrater_delete(LocalCrater p) {
    Vector3_delete__double(p.pos);
    /* Ignore non-managed member 'radius' : Double */
}

LocalCrater LocalCrater_init(Vector3__double pos, double radius) {
    LocalCrater instance;
    instance.pos = pos;
    instance.radius = radius;
    return instance;
}

Vector3__double* LocalCrater_pos(LocalCrater* p) { return (&(p->pos)); }

String LocalCrater_prn(LocalCrater *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "LocalCrater");
  temp = Vector3_prn__double(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LocalCrater");
  temp = Vector3_prn__double(&p->pos);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

double* LocalCrater_radius(LocalCrater* p) { return (&(p->radius)); }

LocalCrater LocalCrater_set_MINUS_pos(LocalCrater p, Vector3__double newValue) {
    Vector3_delete__double(p.pos);
    p.pos = newValue;
    return p;
}


void LocalCrater_set_MINUS_pos_BANG_(LocalCrater* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->pos);
    pRef->pos = newValue;
}


LocalCrater LocalCrater_set_MINUS_radius(LocalCrater p, double newValue) {
    /* Ignore non-managed member 'radius' : Double */
    p.radius = newValue;
    return p;
}


void LocalCrater_set_MINUS_radius_BANG_(LocalCrater* pRef, double newValue) {
    /* Ignore non-managed member 'radius' : Double */
    pRef->radius = newValue;
}


String LocalCrater_str(LocalCrater *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "LocalCrater");
  temp = Vector3_prn__double(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LocalCrater");
  temp = Vector3_prn__double(&p->pos);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

LocalCrater LocalCrater_update_MINUS_pos(LocalCrater p, Lambda *updater) {
    p.pos = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.pos) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.pos);
    return p;
}


LocalCrater LocalCrater_update_MINUS_radius(LocalCrater p, Lambda *updater) {
    p.radius = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.radius) : ((Fn__double_double)(*updater).callback)(p.radius);
    return p;
}


Long Long_add_MINUS_ref(Long* x, Long* y) {
    Long _8 = Long_copy(x);
    Long _11 = Long_copy(y);
    Long _12 = Long__PLUS_(_8, _11);
    return _12;
}

Long Long_blit(Long x) {
    Long _7 = x; // From the 'the' function.
    return _7;
}

bool Long_even_QMARK_(Long a) {
    Long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

Maybe__Long Long_from_MINUS_string(String* s) {
    Maybe__Long _25;
    /* let */ {
        Long res = 0l;
        Maybe__Long _24;
        Long* _13 = &res; // ref
        bool _14 = Long_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__Long _18 = Maybe_Just__Long(res);
            Maybe__Long _19 = _18;
            _24 = _19;
        } else {
            Maybe__Long _22 = Maybe_Nothing__Long();
            Maybe__Long _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Long_hash(Long* k) {
    Long _9 = Long_copy(k);
    Long _10 = _9; // From the 'the' function.
    int _11 = Long_to_MINUS_int(_10);
    return _11;
}

bool Long_negative_QMARK_(Long a) {
    bool _7 = Long__LT_(a, 0l);
    return _7;
}

bool Long_odd_QMARK_(Long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

bool Long_positive_QMARK_(Long a) {
    bool _7 = Long__GT_(a, 0l);
    return _7;
}

String Long_prn(Long x) {
    String _6 = Long_str(x);
    return _6;
}

Long Long_random() {
    Long _7 = Long_from_MINUS_int(CARP_INT_MAX);
    Long _8 = Long_random_MINUS_between(0l, _7);
    return _8;
}

Long Long_random_MINUS_between(Long lower, Long upper) {
    Long _24;
    /* let */ {
        Long _10 = Long__MINUS_(upper, lower);
        Long diff = _10;
        double _17 = Double_from_MINUS_long(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        Long _21 = Double_to_MINUS_long(_20);
        Long _23 = Long__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

Long Long_sign(Long n) {
    Long _26;
    bool _8 = Long__GT_(n, 0l);
    if (_8) {
        Long _11 = 1l;
        _26 = _11;
    } else {
        Long _24;
        bool _17 = Long__LT_(n, 0l);
        if (_17) {
            Long _20 = -1l;
            _24 = _20;
        } else {
            Long _23 = 0l;
            _24 = _23;
        }
        Long _25 = _24;
        _26 = _25;
    }
    return _26;
}

Long Long_zero() {
    return 0l;
}

bool LongRef__LT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

String LongRef_format(String* s, Long* x) {
    Long _9 = Long_copy(x);
    String _10 = Long_format(s, _9);
    return _10;
}

String LongRef_prn(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

String LongRef_str(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

Array__Bucket__ColorId_String* Map_buckets__ColorId_String(Map__ColorId_String* p) { return (&(p->buckets)); }

Map__ColorId_String Map_create__ColorId_String() {
    Lambda _9 = { .callback = (void*)Bucket_empty__ColorId_String, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Bucket.empty__ColorId_String (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Bucket__ColorId_String _11 = Array_repeat__Bucket__ColorId_String(Map_dflt_MINUS_len, _10);
    Map__ColorId_String _12 = Map_init__ColorId_String(0, Map_dflt_MINUS_len, _11);
    return _12;
}

void Map_delete__ColorId_String(Map__ColorId_String p) {
    /* Ignore non-managed member 'len' : Int */
    /* Ignore non-managed member 'n_MINUS_buckets' : Int */
    Array_delete__Bucket__ColorId_String(p.buckets);
}

Map__ColorId_String Map_from_MINUS_array__ColorId_String(Array__Pair__ColorId_String a) {
    Map__ColorId_String _61;
    /* let */ {
        Map__ColorId_String _7 = Map_create__ColorId_String();
        Map__ColorId_String m = _7;
        /* let */ {
            int i = 0;
            Array__Pair__ColorId_String* _20 = &a; // ref
            int _21 = Array_length__Pair__ColorId_String(_20);
            bool _1000008 = Int__LT_(i, _21);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    Array__Pair__ColorId_String* _29 = &a; // ref
                    Pair__ColorId_String* _31 = Array_unsafe_MINUS_nth__Pair__ColorId_String(_29, i);
                    Pair__ColorId_String* e = _31;
                    ColorId* _35 = Pair_a__ColorId_String(e);
                    ColorId* k = _35;
                    String* _39 = Pair_b__ColorId_String(e);
                    String* v = _39;
                    Map__ColorId_String* _44 = &m; // ref
                    Map_put_BANG___ColorId_String(_44, k, v);
                }
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                Array__Pair__ColorId_String* _20 = &a; // ref
                int _21 = Array_length__Pair__ColorId_String(_20);
                bool _1000008 = Int__LT_(i, _21);
                _1000006 = _1000008;
            }
        }
        Map__ColorId_String _60 = m;
        _61 = _60;
    }
    Array_delete__Pair__ColorId_String(a);
    return _61;
}

String Map_get_MINUS_with_MINUS_default__ColorId_String(Map__ColorId_String* m, ColorId* k, String* default_MINUS_value) {
    String _29;
    /* let */ {
        int _11 = Color_hash(k);
        int* _15 = Map_n_MINUS_buckets__ColorId_String(m);
        int _16 = Int_copy(_15);
        int _17 = Int_positive_MINUS_mod(_11, _16);
        int idx = _17;
        Array__Bucket__ColorId_String* _23 = Map_buckets__ColorId_String(m);
        Bucket__ColorId_String* _25 = Array_unsafe_MINUS_nth__Bucket__ColorId_String(_23, idx);
        String _28 = Bucket_get__ColorId_String(_25, k, default_MINUS_value);
        _29 = _28;
    }
    return _29;
}

String Map_get__ColorId_String(Map__ColorId_String* m, ColorId* k) {
    String _10 = String_zero();
    String* _11 = &_10; // ref
    String _12 = Map_get_MINUS_with_MINUS_default__ColorId_String(m, k, _11);
    String_delete(_10);
    return _12;
}

Map__ColorId_String Map_init__ColorId_String(int len, int n_MINUS_buckets, Array__Bucket__ColorId_String buckets) {
    Map__ColorId_String instance;
    instance.len = len;
    instance.n_MINUS_buckets = n_MINUS_buckets;
    instance.buckets = buckets;
    return instance;
}

int* Map_len__ColorId_String(Map__ColorId_String* p) { return (&(p->len)); }

int* Map_n_MINUS_buckets__ColorId_String(Map__ColorId_String* p) { return (&(p->n_MINUS_buckets)); }

void Map_put_BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v) {
    Map_put_MINUS__BANG___ColorId_String(m, k, v);
}

void Map_put_MINUS__BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v) {
    /* let */ {
        int _11 = Color_hash(k);
        int* _15 = Map_n_MINUS_buckets__ColorId_String(m);
        int _16 = Int_copy(_15);
        int _17 = Int_positive_MINUS_mod(_11, _16);
        int idx = _17;
        Array__Bucket__ColorId_String* _21 = Map_buckets__ColorId_String(m);
        Array__Bucket__ColorId_String* b = _21;
        Bucket__ColorId_String* _26 = Array_unsafe_MINUS_nth__Bucket__ColorId_String(b, idx);
        Bucket__ColorId_String* n = _26;
        int* _35 = Map_len__ColorId_String(m);
        int _36 = Int_copy(_35);
        int _37 = Int_inc(_36);
        Map_set_MINUS_len_BANG___ColorId_String(m, _37);
        Bucket_put_BANG___ColorId_String(n, k, v);
    }
}

void Map_set_MINUS_len_BANG___ColorId_String(Map__ColorId_String* pRef, int newValue) {
    /* Ignore non-managed member 'len' : Int */
    pRef->len = newValue;
}


Maybe__CollisionResult Maybe_Just__CollisionResult(CollisionResult member0) {
  Maybe__CollisionResult instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__CollisionResult_Just_tag;
    return instance;
}

Maybe__Contact Maybe_Just__Contact(Contact member0) {
  Maybe__Contact instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Contact_Just_tag;
    return instance;
}

Maybe__ContactSet Maybe_Just__ContactSet(ContactSet member0) {
  Maybe__ContactSet instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__ContactSet_Just_tag;
    return instance;
}

Maybe__Long Maybe_Just__Long(Long member0) {
  Maybe__Long instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Long_Just_tag;
    return instance;
}

Maybe__RayHit Maybe_Just__RayHit(RayHit member0) {
  Maybe__RayHit instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__RayHit_Just_tag;
    return instance;
}

Maybe__String Maybe_Just__String(String member0) {
  Maybe__String instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__String_Just_tag;
    return instance;
}

Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0) {
  Maybe__Uint16 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint16_Just_tag;
    return instance;
}

Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0) {
  Maybe__Uint32 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint32_Just_tag;
    return instance;
}

Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0) {
  Maybe__Uint64 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint64_Just_tag;
    return instance;
}

Maybe__double Maybe_Just__double(double member0) {
  Maybe__double instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__double_Just_tag;
    return instance;
}

Maybe__float Maybe_Just__float(float member0) {
  Maybe__float instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__float_Just_tag;
    return instance;
}

Maybe__int Maybe_Just__int(int member0) {
  Maybe__int instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__int_Just_tag;
    return instance;
}

Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0) {
  Maybe__uint8_t instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__uint8_t_Just_tag;
    return instance;
}

Maybe__CollisionResult Maybe_Nothing__CollisionResult() {
  Maybe__CollisionResult instance;

    instance._tag = Maybe__CollisionResult_Nothing_tag;
    return instance;
}

Maybe__Contact Maybe_Nothing__Contact() {
  Maybe__Contact instance;

    instance._tag = Maybe__Contact_Nothing_tag;
    return instance;
}

Maybe__ContactSet Maybe_Nothing__ContactSet() {
  Maybe__ContactSet instance;

    instance._tag = Maybe__ContactSet_Nothing_tag;
    return instance;
}

Maybe__Long Maybe_Nothing__Long() {
  Maybe__Long instance;

    instance._tag = Maybe__Long_Nothing_tag;
    return instance;
}

Maybe__RayHit Maybe_Nothing__RayHit() {
  Maybe__RayHit instance;

    instance._tag = Maybe__RayHit_Nothing_tag;
    return instance;
}

Maybe__String Maybe_Nothing__String() {
  Maybe__String instance;

    instance._tag = Maybe__String_Nothing_tag;
    return instance;
}

Maybe__Uint16 Maybe_Nothing__Uint16() {
  Maybe__Uint16 instance;

    instance._tag = Maybe__Uint16_Nothing_tag;
    return instance;
}

Maybe__Uint32 Maybe_Nothing__Uint32() {
  Maybe__Uint32 instance;

    instance._tag = Maybe__Uint32_Nothing_tag;
    return instance;
}

Maybe__Uint64 Maybe_Nothing__Uint64() {
  Maybe__Uint64 instance;

    instance._tag = Maybe__Uint64_Nothing_tag;
    return instance;
}

Maybe__double Maybe_Nothing__double() {
  Maybe__double instance;

    instance._tag = Maybe__double_Nothing_tag;
    return instance;
}

Maybe__float Maybe_Nothing__float() {
  Maybe__float instance;

    instance._tag = Maybe__float_Nothing_tag;
    return instance;
}

Maybe__int Maybe_Nothing__int() {
  Maybe__int instance;

    instance._tag = Maybe__int_Nothing_tag;
    return instance;
}

Maybe__uint8_t Maybe_Nothing__uint8_t() {
  Maybe__uint8_t instance;

    instance._tag = Maybe__uint8_t_Nothing_tag;
    return instance;
}

void Maybe_delete__CollisionResult(Maybe__CollisionResult p) {
  if(p._tag == Maybe__CollisionResult_Just_tag) {
    CollisionResult_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__CollisionResult_Nothing_tag) {

  }

}

void Maybe_delete__Contact(Maybe__Contact p) {
  if(p._tag == Maybe__Contact_Just_tag) {
    Contact_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__Contact_Nothing_tag) {

  }

}

void Maybe_delete__ContactSet(Maybe__ContactSet p) {
  if(p._tag == Maybe__ContactSet_Just_tag) {
    ContactSet_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__ContactSet_Nothing_tag) {

  }

}

void Maybe_delete__Long(Maybe__Long p) {
  if(p._tag == Maybe__Long_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Long */
  }
  else if(p._tag == Maybe__Long_Nothing_tag) {

  }

}

void Maybe_delete__RayHit(Maybe__RayHit p) {
  if(p._tag == Maybe__RayHit_Just_tag) {
    RayHit_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__RayHit_Nothing_tag) {

  }

}

void Maybe_delete__String(Maybe__String p) {
  if(p._tag == Maybe__String_Just_tag) {
    String_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__String_Nothing_tag) {

  }

}

void Maybe_delete__Uint16(Maybe__Uint16 p) {
  if(p._tag == Maybe__Uint16_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint16 */
  }
  else if(p._tag == Maybe__Uint16_Nothing_tag) {

  }

}

void Maybe_delete__Uint32(Maybe__Uint32 p) {
  if(p._tag == Maybe__Uint32_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint32 */
  }
  else if(p._tag == Maybe__Uint32_Nothing_tag) {

  }

}

void Maybe_delete__Uint64(Maybe__Uint64 p) {
  if(p._tag == Maybe__Uint64_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint64 */
  }
  else if(p._tag == Maybe__Uint64_Nothing_tag) {

  }

}

void Maybe_delete__bool(Maybe__bool p) {
  if(p._tag == Maybe__bool_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Bool */
  }
  else if(p._tag == Maybe__bool_Nothing_tag) {

  }

}

void Maybe_delete__double(Maybe__double p) {
  if(p._tag == Maybe__double_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Double */
  }
  else if(p._tag == Maybe__double_Nothing_tag) {

  }

}

void Maybe_delete__float(Maybe__float p) {
  if(p._tag == Maybe__float_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Float */
  }
  else if(p._tag == Maybe__float_Nothing_tag) {

  }

}

void Maybe_delete__int(Maybe__int p) {
  if(p._tag == Maybe__int_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Int */
  }
  else if(p._tag == Maybe__int_Nothing_tag) {

  }

}

void Maybe_delete__uint8_t(Maybe__uint8_t p) {
  if(p._tag == Maybe__uint8_t_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Byte */
  }
  else if(p._tag == Maybe__uint8_t_Nothing_tag) {

  }

}

String Maybe_from__String(Maybe__String a, String dflt) {
    String _14;
    if(a._tag == Maybe__String_Nothing_tag) {
        Maybe__String _6_temp = a;
        // Case expr:
        _14 = dflt;
    }
    else if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _6_temp = a;
        String x = _6_temp.u.Just.member0;
        // Case expr:
        _14 = x;
        String_delete(dflt);
    }
    else UNHANDLED("Maybe.carp", 22);
    return _14;
}

String Maybe_unsafe_MINUS_from__String(Maybe__String a) {
    String _10;
    if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _5_temp = a;
        String x = _5_temp.u.Just.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Maybe.carp", 17);
    return _10;
}

Opaque Opaque_copy(Opaque* pRef) {
    Opaque copy = *pRef;

    return copy;
}

void Opaque_delete(Opaque p) {

}

int Opaque_get_MINUS_tag(Opaque *p) { return p->_tag; }
String Opaque_prn(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

String Opaque_str(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->a)); }

Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->a)); }

Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->a)); }

ColorId* Pair_a__ColorId_String(Pair__ColorId_String* p) { return (&(p->a)); }

int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->b)); }

String* Pair_b__ColorId_String(Pair__ColorId_String* p) { return (&(p->b)); }

void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p) {
    Array_delete__Uint16(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p) {
    Array_delete__Uint32(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p) {
    Array_delete__Uint64(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__ColorId_String(Pair__ColorId_String p) {
    Color_Id_delete(p.a);
    String_delete(p.b);
}

Pair__ColorId_String Pair_init_MINUS_from_MINUS_refs__ColorId_String(ColorId* a_MINUS_val, String* b_MINUS_val) {
    ColorId _1000004 = Color_Id_copy(a_MINUS_val);
    String _1000005 = String_copy(b_MINUS_val);
    Pair__ColorId_String _1000003 = Pair_init__ColorId_String(_1000004, _1000005);
    return _1000003;
}

Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b) {
    Pair__Array__Uint16_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b) {
    Pair__Array__Uint32_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b) {
    Pair__Array__Uint64_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__ColorId_String Pair_init__ColorId_String(ColorId a, String b) {
    Pair__ColorId_String instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__ColorId_String Pair_set_MINUS_b__ColorId_String(Pair__ColorId_String p, String newValue) {
    String_delete(p.b);
    p.b = newValue;
    return p;
}


int* Pattern_MatchResult_end(PatternMatchResult* p) { return (&(p->end)); }

PatternMatchResult Pattern_MatchResult_init(int start, int end) {
    PatternMatchResult instance;
    instance.start = start;
    instance.end = end;
    return instance;
}

String Pattern_MatchResult_prn(PatternMatchResult *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Pattern.MatchResult");
  temp = Int_prn(p->start); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Pattern.MatchResult");
  temp = Int_prn(p->start);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres) {
    static String _9 = "(MatchResult start=%d end=";
    String *_9_ref = &_9;
    int* _12 = Pattern_MatchResult_start(ref_MINUS_matchres);
    String _1000007 = IntRef_format(_9_ref, _12);
    String* _1000005 = &_1000007; // ref
    static String _17 = "%d)";
    String *_17_ref = &_17;
    int* _20 = Pattern_MatchResult_end(ref_MINUS_matchres);
    String _1000010 = IntRef_format(_17_ref, _20);
    String* _1000008 = &_1000010; // ref
    String _1000004 = String_append(_1000005, _1000008);
    String* _1000002 = &_1000004; // ref
    String _25 = String_copy(_1000002);
    String_delete(_1000004);
    String_delete(_1000007);
    String_delete(_1000010);
    return _25;
}

PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    p.end = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    pRef->end = newValue;
}


PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    p.start = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    pRef->start = newValue;
}


int* Pattern_MatchResult_start(PatternMatchResult* p) { return (&(p->start)); }

String Pattern_MatchResult_str(PatternMatchResult matchres) {
    PatternMatchResult* _7 = &matchres; // ref
    String _8 = Pattern_MatchResult_ref_MINUS_str(_7);
    return _8;
}

PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater) {
    p.end = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.end) : ((Fn__int_int)(*updater).callback)(p.end);
    return p;
}


PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater) {
    p.start = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.start) : ((Fn__int_int)(*updater).callback)(p.start);
    return p;
}


int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m) {
    int* _13 = Pattern_MatchResult_start(m);
    int _14 = Int_copy(_13);
    return _14;
}

String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m) {
    Maybe__String _14 = Pattern_extract(m, _env->data);
    String _15 = Maybe_unsafe_MINUS_from__String(_14);
    return _15;
}

Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data) {
    Maybe__String _30;
    bool _8 = Pattern_non_MINUS_match_QMARK_(match_MINUS_res);
    if (_8) {
        Maybe__String _11 = Maybe_Nothing__String();
        Maybe__String _12 = _11;
        _30 = _12;
    } else {
        int* _20 = Pattern_MatchResult_start(match_MINUS_res);
        int _21 = Int_copy(_20);
        int* _25 = Pattern_MatchResult_end(match_MINUS_res);
        int _26 = Int_copy(_25);
        String _27 = String_slice(data, _21, _26);
        Maybe__String _28 = Maybe_Just__String(_27);
        Maybe__String _29 = _28;
        _30 = _29;
    }
    return _30;
}

int Pattern_find(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    int* _13 = Pattern_MatchResult_start(_12);
    int _14 = Int_copy(_13);
    return _14;
}

Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data) {
    // This lambda captures 0 variables: 
    Lambda _15 = {
      .callback = (void*)Pattern__Lambda_find_MINUS_all_15_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _16 = &_15; // ref
    Array__PatternMatchResult _21 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _22 = &_21; // ref
    Array__int _23 = Array_copy_MINUS_map__PatternMatchResult_int(_16, _22);
    Array_delete__PatternMatchResult(_21);
    Function_delete__PatternMatchResult_MUL__int(_15);
    return _23;
}

Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data) {
    Array__PatternMatchResult _77;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(PatternMatchResult) * 0) };
        Array__PatternMatchResult result = _7;
        int _11 = String_length(data);
        int stop = _11;
        PatternMatchResult _17 = Pattern_match_MINUS_from(pattern, data, 0);
        PatternMatchResult found = _17;
        PatternMatchResult* _23 = &found; // ref
        int* _24 = Pattern_MatchResult_end(_23);
        int _25 = Int_copy(_24);
        int start = _25;
        bool _46;
        bool _33 = _LT__EQ___int(start, stop);
        if (_33) {
            PatternMatchResult* _39 = &found; // ref
            bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
            bool _41 = not(_40);
            bool _42 = _41;
            _46 = _42;
        } else {
            bool _45 = false;
            _46 = _45;
        }
        bool _74 = _46;
        while (_74) {
            Array__PatternMatchResult _53 = Array_push_MINUS_back__PatternMatchResult(result, found);
            result = _53;  // (Array Pattern.MatchResult) = (Array Pattern.MatchResult)
            PatternMatchResult _61 = Pattern_match_MINUS_from(pattern, data, start);
            found = _61;  // Pattern.MatchResult = Pattern.MatchResult
            PatternMatchResult* _69 = &found; // ref
            int* _70 = Pattern_MatchResult_end(_69);
            int _71 = Int_copy(_70);
            start = _71;  // Int = Int
            bool _46;
            bool _33 = _LT__EQ___int(start, stop);
            if (_33) {
                PatternMatchResult* _39 = &found; // ref
                bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
                bool _41 = not(_40);
                bool _42 = _41;
                _46 = _42;
            } else {
                bool _45 = false;
                _46 = _45;
            }
            _74 = _46;
        }
        Array__PatternMatchResult _76 = result;
        _77 = _76;
    }
    return _77;
}

Pattern Pattern_from_MINUS_chars(Array__Char* chars) {
    static String _12 = "[";
    String *_12_ref = &_12;
    String _13 = String_copy(_12_ref);
    String _1000006 = StringCopy_str(_13);
    String* _1000005 = &_1000006; // ref
    String _22 = String_from_MINUS_chars(chars);
    String _1000010 = StringCopy_str(_22);
    String* _1000009 = &_1000010; // ref
    static String _28 = "]";
    String *_28_ref = &_28;
    String _29 = String_copy(_28_ref);
    String _1000012 = StringCopy_str(_29);
    String* _1000011 = &_1000012; // ref
    String _1000008 = String_append(_1000009, _1000011);
    String* _1000007 = &_1000008; // ref
    String _1000004 = String_append(_1000005, _1000007);
    String* _1000003 = &_1000004; // ref
    String _1000002 = String_copy(_1000003);
    String* _37 = &_1000002; // ref
    Pattern _38 = Pattern_init(_37);
    String_delete(_1000002);
    String_delete(_1000004);
    String_delete(_1000006);
    String_delete(_1000008);
    String_delete(_1000010);
    String_delete(_1000012);
    return _38;
}

Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data) {
    // This lambda captures 1 variables: data
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty *_16_env = CARP_MALLOC(sizeof(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty));
    _16_env->data = data;
    Lambda _16 = {
      .callback = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env,
      .env = _16_env,
      .delete = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete,
      .copy = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy
    };
    Lambda* _17 = &_16; // ref
    Array__PatternMatchResult _22 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _23 = &_22; // ref
    Array__String _24 = Array_copy_MINUS_map__PatternMatchResult_String(_17, _23);
    Array_delete__PatternMatchResult(_22);
    Function_delete__PatternMatchResult_MUL__String(_16);
    return _24;
}

PatternMatchResult Pattern_match(Pattern* pattern, String* data) {
    PatternMatchResult _9 = Pattern_match_MINUS_from(pattern, data, 0);
    return _9;
}

String Pattern_match_MINUS_str(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    Maybe__String _14 = Pattern_extract(_12, data);
    static String _16 = "";
    String *_16_ref = &_16;
    String _17 = String_copy(_16_ref);
    String _18 = Maybe_from__String(_14, _17);
    return _18;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = _DIV__EQ___int(_9, -1);
    return _11;
}

bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res) {
    bool _26;
    int* _9 = Pattern_MatchResult_start(match_MINUS_res);
    int _10 = Int_copy(_9);
    bool _12 = Int__LT_(_10, 0);
    if (_12) {
        bool _15 = true;
        _26 = _15;
    } else {
        int* _21 = Pattern_MatchResult_end(match_MINUS_res);
        int _22 = Int_copy(_21);
        bool _24 = Int__LT_(_22, 0);
        bool _25 = _24;
        _26 = _25;
    }
    return _26;
}

Array__String Pattern_split(Pattern* p, String* s) {
    Array__String _180;
    /* let */ {
        Array__int _10 = Pattern_find_MINUS_all(p, s);
        Array__int idx = _10;
        Array__String _15 = Pattern_global_MINUS_match_MINUS_str(p, s);
        Array__String strs = _15;
        Array__int* _20 = &idx; // ref
        int _21 = Array_length__int(_20);
        int lidx = _21;
        int _26 = Int_inc(lidx);
        Array__String _27 = Array_allocate__String(_26);
        Array__String result = _27;
        Array__String* _33 = &result; // ref
        int _58;
        bool _42 = Int__GT_(lidx, 0);
        if (_42) {
            Array__int* _48 = &idx; // ref
            int* _50 = Array_unsafe_MINUS_nth__int(_48, 0);
            int _51 = Int_copy(_50);
            int _52 = _51;
            _58 = _52;
        } else {
            int _56 = String_length(s);
            int _57 = _56;
            _58 = _57;
        }
        String _59 = String_slice(s, 0, _58);
        Array_aset_MINUS_uninitialized_BANG___String(_33, 0, _59);
        /* let */ {
            int i = 0;
            Array__int* _72 = &idx; // ref
            int _73 = Array_length__int(_72);
            int _74 = Int_dec(_73);
            bool _1000011 = Int__LT_(i, _74);
            bool _1000009 = _1000011;
            while (_1000009) {
                /* let */ {
                    Array__String* _83 = &strs; // ref
                    String* _85 = Array_unsafe_MINUS_nth__String(_83, i);
                    int _86 = String_length(_85);
                    int plen = _86;
                    Array__String* _91 = &result; // ref
                    int _94 = Int_inc(i);
                    Array__int* _102 = &idx; // ref
                    int* _104 = Array_unsafe_MINUS_nth__int(_102, i);
                    int _105 = Int_copy(_104);
                    int _107 = Int__PLUS_(_105, plen);
                    Array__int* _112 = &idx; // ref
                    int _115 = Int_inc(i);
                    int* _116 = Array_unsafe_MINUS_nth__int(_112, _115);
                    int _117 = Int_copy(_116);
                    String _118 = String_slice(s, _107, _117);
                    Array_aset_MINUS_uninitialized_BANG___String(_91, _94, _118);
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                Array__int* _72 = &idx; // ref
                int _73 = Array_length__int(_72);
                int _74 = Int_dec(_73);
                bool _1000011 = Int__LT_(i, _74);
                _1000009 = _1000011;
            }
        }
        bool _135 = Int__GT_(lidx, 0);
        if (_135) {
            /* let */ {
                Array__String* _143 = &strs; // ref
                int _146 = Int_dec(lidx);
                String* _147 = Array_unsafe_MINUS_nth__String(_143, _146);
                int _148 = String_length(_147);
                int plen = _148;
                Array__String* _153 = &result; // ref
                Array__int* _162 = &idx; // ref
                int _165 = Int_dec(lidx);
                int* _166 = Array_unsafe_MINUS_nth__int(_162, _165);
                int _167 = Int_copy(_166);
                int _169 = Int__PLUS_(_167, plen);
                String _170 = String_suffix(s, _169);
                Array_aset_MINUS_uninitialized_BANG___String(_153, lidx, _170);
            }
        } else {
            /* () */
        }
        Array__String _179 = result;
        _180 = _179;
        Array_delete__String(strs);
        Array_delete__int(idx);
    }
    return _180;
}

Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef) {
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
    return copy;
}

void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p) {
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
}

Plane Plane_copy(Plane* pRef) {
    Plane copy = *pRef;
    copy.normal = Vector3_copy__double(&(pRef->normal));
    /* Ignore non-managed member 'd' : Double */
    return copy;
}

double* Plane_d(Plane* p) { return (&(p->d)); }

void Plane_delete(Plane p) {
    Vector3_delete__double(p.normal);
    /* Ignore non-managed member 'd' : Double */
}

double Plane_distance_MINUS_to_MINUS_point(Plane* plane, Vector3__double* p) {
    Vector3__double* _9 = Plane_normal(plane);
    double _11 = Vector3_dot__double(_9, p);
    double* _15 = Plane_d(plane);
    double _16 = Double_copy(_15);
    double _17 = Double__PLUS_(_11, _16);
    return _17;
}

Plane Plane_init(Vector3__double normal, double d) {
    Plane instance;
    instance.normal = normal;
    instance.d = d;
    return instance;
}

Vector3__double* Plane_normal(Plane* p) { return (&(p->normal)); }

String Plane_prn(Plane *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Plane");
  temp = Vector3_prn__double(&p->normal); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->d); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Plane");
  temp = Vector3_prn__double(&p->normal);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->d);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Vector3__double Plane_project_MINUS_point(Plane* plane, Vector3__double* p) {
    Vector3__double _23;
    /* let */ {
        double _10 = Plane_distance_MINUS_to_MINUS_point(plane, p);
        double dist = _10;
        Vector3__double* _18 = Plane_normal(plane);
        Vector3__double _20 = Vector3_mul__double(_18, dist);
        Vector3__double* _21 = &_20; // ref
        Vector3__double _22 = Vector3_sub__double(p, _21);
        _23 = _22;
        Vector3_delete__double(_20);
    }
    return _23;
}

Plane Plane_set_MINUS_d(Plane p, double newValue) {
    /* Ignore non-managed member 'd' : Double */
    p.d = newValue;
    return p;
}


void Plane_set_MINUS_d_BANG_(Plane* pRef, double newValue) {
    /* Ignore non-managed member 'd' : Double */
    pRef->d = newValue;
}


Plane Plane_set_MINUS_normal(Plane p, Vector3__double newValue) {
    Vector3_delete__double(p.normal);
    p.normal = newValue;
    return p;
}


void Plane_set_MINUS_normal_BANG_(Plane* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->normal);
    pRef->normal = newValue;
}


String Plane_str(Plane *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Plane");
  temp = Vector3_prn__double(&p->normal); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->d); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Plane");
  temp = Vector3_prn__double(&p->normal);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->d);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Plane Plane_update_MINUS_d(Plane p, Lambda *updater) {
    p.d = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.d) : ((Fn__double_double)(*updater).callback)(p.d);
    return p;
}


Plane Plane_update_MINUS_normal(Plane p, Lambda *updater) {
    p.normal = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.normal) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.normal);
    return p;
}


int * Pointer_address__int(int * a) { return a; }
 bool Pointer_eq__CChar(CChar *p1, CChar *p2) { return p1 == p2; }
 bool Pointer_eq__FILE(FILE *p1, FILE *p2) { return p1 == p2; }
Quaternion Quaternion_add(Quaternion* a, Quaternion* b) {
    double* _10 = Quaternion_x(a);
    double _11 = Double_copy(_10);
    double* _15 = Quaternion_x(b);
    double _16 = Double_copy(_15);
    double _17 = Double__PLUS_(_11, _16);
    double* _22 = Quaternion_y(a);
    double _23 = Double_copy(_22);
    double* _27 = Quaternion_y(b);
    double _28 = Double_copy(_27);
    double _29 = Double__PLUS_(_23, _28);
    double* _34 = Quaternion_z(a);
    double _35 = Double_copy(_34);
    double* _39 = Quaternion_z(b);
    double _40 = Double_copy(_39);
    double _41 = Double__PLUS_(_35, _40);
    double* _46 = Quaternion_w(a);
    double _47 = Double_copy(_46);
    double* _51 = Quaternion_w(b);
    double _52 = Double_copy(_51);
    double _53 = Double__PLUS_(_47, _52);
    Quaternion _54 = Quaternion_init(_17, _29, _41, _53);
    return _54;
}

Quaternion Quaternion_conjugate(Quaternion* q) {
    double* _10 = Quaternion_x(q);
    double _11 = Double_copy(_10);
    double _12 = Double__MINUS_(0.0, _11);
    double* _18 = Quaternion_y(q);
    double _19 = Double_copy(_18);
    double _20 = Double__MINUS_(0.0, _19);
    double* _26 = Quaternion_z(q);
    double _27 = Double_copy(_26);
    double _28 = Double__MINUS_(0.0, _27);
    double* _32 = Quaternion_w(q);
    double _33 = Double_copy(_32);
    Quaternion _34 = Quaternion_init(_12, _20, _28, _33);
    return _34;
}

Quaternion Quaternion_copy(Quaternion* pRef) {
    Quaternion copy = *pRef;
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
    /* Ignore non-managed member 'w' : Double */
    return copy;
}

void Quaternion_delete(Quaternion p) {
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
    /* Ignore non-managed member 'w' : Double */
}

Quaternion Quaternion_from_MINUS_axis_MINUS_angle(Vector3__double axis, double angle) {
    Quaternion _58;
    /* let */ {
        double _11 = Double__MUL_(angle, 0.5);
        double _12 = Double_sin(_11);
        double s = _12;
        double _18 = Double__MUL_(angle, 0.5);
        double _19 = Double_cos(_18);
        double c = _19;
        Vector3__double* _29 = &axis; // ref
        double* _30 = Vector3_x__double(_29);
        double _31 = Double_copy(_30);
        double _33 = Double__MUL_(_31, s);
        Vector3__double* _39 = &axis; // ref
        double* _40 = Vector3_y__double(_39);
        double _41 = Double_copy(_40);
        double _43 = Double__MUL_(_41, s);
        Vector3__double* _49 = &axis; // ref
        double* _50 = Vector3_z__double(_49);
        double _51 = Double_copy(_50);
        double _53 = Double__MUL_(_51, s);
        Quaternion _55 = Quaternion_init(_33, _43, _53, c);
        Quaternion* _56 = &_55; // ref
        Quaternion _57 = Quaternion_normalize(_56);
        _58 = _57;
        Quaternion_delete(_55);
    }
    Vector3_delete__double(axis);
    return _58;
}

Quaternion Quaternion_from_MINUS_euler(double yaw, double pitch, double roll) {
    Quaternion _128;
    /* let */ {
        double _12 = Double__MUL_(yaw, 0.5);
        double _13 = Double_cos(_12);
        double cy = _13;
        double _19 = Double__MUL_(yaw, 0.5);
        double _20 = Double_sin(_19);
        double sy = _20;
        double _26 = Double__MUL_(pitch, 0.5);
        double _27 = Double_cos(_26);
        double cp = _27;
        double _33 = Double__MUL_(pitch, 0.5);
        double _34 = Double_sin(_33);
        double sp = _34;
        double _40 = Double__MUL_(roll, 0.5);
        double _41 = Double_cos(_40);
        double cr = _41;
        double _47 = Double__MUL_(roll, 0.5);
        double _48 = Double_sin(_47);
        double sr = _48;
        double _55 = Double__MUL_(cy, sp);
        double _57 = Double__MUL_(_55, cr);
        double _62 = Double__MUL_(sy, cp);
        double _64 = Double__MUL_(_62, sr);
        double _65 = Double__PLUS_(_57, _64);
        double qx = _65;
        double _72 = Double__MUL_(sy, cp);
        double _74 = Double__MUL_(_72, cr);
        double _79 = Double__MUL_(cy, sp);
        double _81 = Double__MUL_(_79, sr);
        double _82 = Double__MINUS_(_74, _81);
        double qy = _82;
        double _89 = Double__MUL_(cy, cp);
        double _91 = Double__MUL_(_89, sr);
        double _96 = Double__MUL_(sy, sp);
        double _98 = Double__MUL_(_96, cr);
        double _99 = Double__PLUS_(_91, _98);
        double qz = _99;
        double _106 = Double__MUL_(cy, cp);
        double _108 = Double__MUL_(_106, cr);
        double _113 = Double__MUL_(sy, sp);
        double _115 = Double__MUL_(_113, sr);
        double _116 = Double__MINUS_(_108, _115);
        double qw = _116;
        Quaternion _125 = Quaternion_init(qx, qy, qz, qw);
        Quaternion* _126 = &_125; // ref
        Quaternion _127 = Quaternion_normalize(_126);
        _128 = _127;
        Quaternion_delete(_125);
    }
    return _128;
}

Quaternion Quaternion_identity() {
    Quaternion _8 = Quaternion_init(0.0, 0.0, 0.0, 1.0);
    return _8;
}

Quaternion Quaternion_init(double x, double y, double z, double w) {
    Quaternion instance;
    instance.x = x;
    instance.y = y;
    instance.z = z;
    instance.w = w;
    return instance;
}

Quaternion Quaternion_inverse(Quaternion* q) {
    Quaternion _6 = Quaternion_conjugate(q);
    return _6;
}

Quaternion Quaternion_mul(Quaternion* a, Quaternion* b) {
    Quaternion _10 = Quaternion_mul_MINUS_raw(a, b);
    Quaternion* _11 = &_10; // ref
    Quaternion _12 = Quaternion_normalize(_11);
    Quaternion_delete(_10);
    return _12;
}

Quaternion Quaternion_mul_MINUS_raw(Quaternion* a, Quaternion* b) {
    Quaternion _145;
    /* let */ {
        double* _10 = Quaternion_w(a);
        double _11 = Double_copy(_10);
        double aw = _11;
        double* _16 = Quaternion_x(a);
        double _17 = Double_copy(_16);
        double ax = _17;
        double* _22 = Quaternion_y(a);
        double _23 = Double_copy(_22);
        double ay = _23;
        double* _28 = Quaternion_z(a);
        double _29 = Double_copy(_28);
        double az = _29;
        double* _34 = Quaternion_w(b);
        double _35 = Double_copy(_34);
        double bw = _35;
        double* _40 = Quaternion_x(b);
        double _41 = Double_copy(_40);
        double bx = _41;
        double* _46 = Quaternion_y(b);
        double _47 = Double_copy(_46);
        double by = _47;
        double* _52 = Quaternion_z(b);
        double _53 = Double_copy(_52);
        double bz = _53;
        double _62 = Double__MUL_(aw, bx);
        double _66 = Double__MUL_(az, by);
        double _67 = Double__MINUS_(_62, _66);
        double _71 = Double__MUL_(ay, bz);
        double _72 = Double__PLUS_(_67, _71);
        double _76 = Double__MUL_(ax, bw);
        double _77 = Double__PLUS_(_72, _76);
        double _84 = Double__MUL_(aw, by);
        double _88 = Double__MUL_(ax, bz);
        double _89 = Double__MINUS_(_84, _88);
        double _93 = Double__MUL_(az, bx);
        double _94 = Double__PLUS_(_89, _93);
        double _98 = Double__MUL_(ay, bw);
        double _99 = Double__PLUS_(_94, _98);
        double _106 = Double__MUL_(aw, bz);
        double _110 = Double__MUL_(ay, bx);
        double _111 = Double__MINUS_(_106, _110);
        double _115 = Double__MUL_(ax, by);
        double _116 = Double__PLUS_(_111, _115);
        double _120 = Double__MUL_(az, bw);
        double _121 = Double__PLUS_(_116, _120);
        double _128 = Double__MUL_(aw, bw);
        double _132 = Double__MUL_(ax, bx);
        double _133 = Double__MINUS_(_128, _132);
        double _137 = Double__MUL_(ay, by);
        double _138 = Double__MINUS_(_133, _137);
        double _142 = Double__MUL_(az, bz);
        double _143 = Double__MINUS_(_138, _142);
        Quaternion _144 = Quaternion_init(_77, _99, _121, _143);
        _145 = _144;
    }
    return _145;
}

Quaternion Quaternion_new(double x, double y, double z, double w) {
    Quaternion _12 = Quaternion_init(x, y, z, w);
    return _12;
}

Quaternion Quaternion_normalize(Quaternion* q) {
    Quaternion _85;
    /* let */ {
        double* _9 = Quaternion_x(q);
        double _10 = Double_copy(_9);
        double qx = _10;
        double* _15 = Quaternion_y(q);
        double _16 = Double_copy(_15);
        double qy = _16;
        double* _21 = Quaternion_z(q);
        double _22 = Double_copy(_21);
        double qz = _22;
        double* _27 = Quaternion_w(q);
        double _28 = Double_copy(_27);
        double qw = _28;
        double _37 = Double__MUL_(qx, qx);
        double _41 = Double__MUL_(qy, qy);
        double _42 = Double__PLUS_(_37, _41);
        double _46 = Double__MUL_(qz, qz);
        double _47 = Double__PLUS_(_42, _46);
        double _51 = Double__MUL_(qw, qw);
        double _52 = Double__PLUS_(_47, _51);
        double _53 = Double_sqrt(_52);
        double mag = _53;
        Quaternion _84;
        bool _59 = Double__GT_(mag, 0.0);
        if (_59) {
            double _65 = Double__DIV_(qx, mag);
            double _69 = Double__DIV_(qy, mag);
            double _73 = Double__DIV_(qz, mag);
            double _77 = Double__DIV_(qw, mag);
            Quaternion _78 = Quaternion_init(_65, _69, _73, _77);
            Quaternion _79 = _78;
            _84 = _79;
        } else {
            Quaternion _82 = Quaternion_identity();
            Quaternion _83 = _82;
            _84 = _83;
        }
        _85 = _84;
    }
    return _85;
}

String Quaternion_prn(Quaternion *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Quaternion");
  temp = Double_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Quaternion");
  temp = Double_prn(p->x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->w);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Vector3__double Quaternion_rotate(Quaternion* q, Vector3__double* v) {
    Vector3__double _72;
    /* let */ {
        double* _11 = Vector3_x__double(v);
        double _12 = Double_copy(_11);
        double* _16 = Vector3_y__double(v);
        double _17 = Double_copy(_16);
        double* _21 = Vector3_z__double(v);
        double _22 = Double_copy(_21);
        Quaternion _24 = Quaternion_init(_12, _17, _22, 0.0);
        Quaternion q_MINUS_v = _24;
        Quaternion _28 = Quaternion_inverse(q);
        Quaternion q_MINUS_inv = _28;
        Quaternion* _40 = &q_MINUS_v; // ref
        Quaternion _41 = Quaternion_mul_MINUS_raw(q, _40);
        Quaternion* _42 = &_41; // ref
        Quaternion* _43 = _42; // From the 'the' function.
        Quaternion* _46 = &q_MINUS_inv; // ref
        Quaternion _47 = Quaternion_mul_MINUS_raw(_43, _46);
        Quaternion res = _47;
        Quaternion* _54 = &res; // ref
        double* _55 = Quaternion_x(_54);
        double _56 = Double_copy(_55);
        Quaternion* _61 = &res; // ref
        double* _62 = Quaternion_y(_61);
        double _63 = Double_copy(_62);
        Quaternion* _68 = &res; // ref
        double* _69 = Quaternion_z(_68);
        double _70 = Double_copy(_69);
        Vector3__double _71 = Vector3_init__double(_56, _63, _70);
        _72 = _71;
        Quaternion_delete(_41);
        Quaternion_delete(q_MINUS_inv);
        Quaternion_delete(q_MINUS_v);
        Quaternion_delete(res);
    }
    return _72;
}

Quaternion Quaternion_scale(Quaternion* q, double s) {
    double* _10 = Quaternion_x(q);
    double _11 = Double_copy(_10);
    double _13 = Double__MUL_(_11, s);
    double* _18 = Quaternion_y(q);
    double _19 = Double_copy(_18);
    double _21 = Double__MUL_(_19, s);
    double* _26 = Quaternion_z(q);
    double _27 = Double_copy(_26);
    double _29 = Double__MUL_(_27, s);
    double* _34 = Quaternion_w(q);
    double _35 = Double_copy(_34);
    double _37 = Double__MUL_(_35, s);
    Quaternion _38 = Quaternion_init(_13, _21, _29, _37);
    return _38;
}

Quaternion Quaternion_set_MINUS_w(Quaternion p, double newValue) {
    /* Ignore non-managed member 'w' : Double */
    p.w = newValue;
    return p;
}


void Quaternion_set_MINUS_w_BANG_(Quaternion* pRef, double newValue) {
    /* Ignore non-managed member 'w' : Double */
    pRef->w = newValue;
}


Quaternion Quaternion_set_MINUS_x(Quaternion p, double newValue) {
    /* Ignore non-managed member 'x' : Double */
    p.x = newValue;
    return p;
}


void Quaternion_set_MINUS_x_BANG_(Quaternion* pRef, double newValue) {
    /* Ignore non-managed member 'x' : Double */
    pRef->x = newValue;
}


Quaternion Quaternion_set_MINUS_y(Quaternion p, double newValue) {
    /* Ignore non-managed member 'y' : Double */
    p.y = newValue;
    return p;
}


void Quaternion_set_MINUS_y_BANG_(Quaternion* pRef, double newValue) {
    /* Ignore non-managed member 'y' : Double */
    pRef->y = newValue;
}


Quaternion Quaternion_set_MINUS_z(Quaternion p, double newValue) {
    /* Ignore non-managed member 'z' : Double */
    p.z = newValue;
    return p;
}


void Quaternion_set_MINUS_z_BANG_(Quaternion* pRef, double newValue) {
    /* Ignore non-managed member 'z' : Double */
    pRef->z = newValue;
}


String Quaternion_str(Quaternion *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Quaternion");
  temp = Double_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Quaternion");
  temp = Double_prn(p->x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->w);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Vector3__double Quaternion_to_MINUS_euler(Quaternion* q) {
    Vector3__double _149;
    /* let */ {
        double* _9 = Quaternion_x(q);
        double _10 = Double_copy(_9);
        double qx = _10;
        double* _15 = Quaternion_y(q);
        double _16 = Double_copy(_15);
        double qy = _16;
        double* _21 = Quaternion_z(q);
        double _22 = Double_copy(_21);
        double qz = _22;
        double* _27 = Quaternion_w(q);
        double _28 = Double_copy(_27);
        double qw = _28;
        double _36 = Double__MUL_(qw, qy);
        double _40 = Double__MUL_(qz, qx);
        double _41 = Double__MINUS_(_36, _40);
        double _42 = Double__MUL_(2.0, _41);
        double sinp = _42;
        double _70;
        double _48 = Double_abs(sinp);
        bool _50 = _GT__EQ___double(_48, 1.0);
        if (_50) {
            double _57 = Double_abs(sinp);
            double _58 = Double__DIV_(sinp, _57);
            double _62 = Double__DIV_(3.1415926535, 2.0);
            double _63 = Double__MUL_(_58, _62);
            double _64 = _63;
            _70 = _64;
        } else {
            double _68 = Double_asin(sinp);
            double _69 = _68;
            _70 = _69;
        }
        double pitch = _70;
        double _78 = Double__MUL_(qw, qz);
        double _82 = Double__MUL_(qx, qy);
        double _83 = Double__PLUS_(_78, _82);
        double _84 = Double__MUL_(2.0, _83);
        double siny_cosp = _84;
        double _94 = Double__MUL_(qy, qy);
        double _98 = Double__MUL_(qz, qz);
        double _99 = Double__PLUS_(_94, _98);
        double _100 = Double__MUL_(2.0, _99);
        double _101 = Double__MINUS_(1.0, _100);
        double cosy_cosp = _101;
        double _106 = Double_atan2(siny_cosp, cosy_cosp);
        double yaw = _106;
        double _114 = Double__MUL_(qw, qx);
        double _118 = Double__MUL_(qy, qz);
        double _119 = Double__PLUS_(_114, _118);
        double _120 = Double__MUL_(2.0, _119);
        double sinr_cosp = _120;
        double _130 = Double__MUL_(qx, qx);
        double _134 = Double__MUL_(qy, qy);
        double _135 = Double__PLUS_(_130, _134);
        double _136 = Double__MUL_(2.0, _135);
        double _137 = Double__MINUS_(1.0, _136);
        double cosr_cosp = _137;
        double _142 = Double_atan2(sinr_cosp, cosr_cosp);
        double roll = _142;
        Vector3__double _148 = Vector3_init__double(yaw, pitch, roll);
        _149 = _148;
    }
    return _149;
}

Quaternion Quaternion_update_MINUS_w(Quaternion p, Lambda *updater) {
    p.w = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.w) : ((Fn__double_double)(*updater).callback)(p.w);
    return p;
}


Quaternion Quaternion_update_MINUS_x(Quaternion p, Lambda *updater) {
    p.x = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.x) : ((Fn__double_double)(*updater).callback)(p.x);
    return p;
}


Quaternion Quaternion_update_MINUS_y(Quaternion p, Lambda *updater) {
    p.y = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.y) : ((Fn__double_double)(*updater).callback)(p.y);
    return p;
}


Quaternion Quaternion_update_MINUS_z(Quaternion p, Lambda *updater) {
    p.z = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.z) : ((Fn__double_double)(*updater).callback)(p.z);
    return p;
}


double* Quaternion_w(Quaternion* p) { return (&(p->w)); }

double* Quaternion_x(Quaternion* p) { return (&(p->x)); }

double* Quaternion_y(Quaternion* p) { return (&(p->y)); }

double* Quaternion_z(Quaternion* p) { return (&(p->z)); }

bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_() {
    return Random__;
}

double Random_random() {
    double _11 = Double__MUL_(Random_s, Random_a);
    double _13 = Double__PLUS_(_11, Random_c);
    double _15 = Double_mod(_13, Random_m);
    Random_s = _15;  // Double = Double
    double _20 = Double__DIV_(Random_s, Random_m);
    double _21 = _20;
    return _21;
}

void Random_seed() {
    Uint64 _7 = System_nanotime();
    double _8 = Double_from_MINUS_uint64(_7);
    Random_s = _8;  // Double = Double
}

void Random_seed_MINUS_from(double new_MINUS_seed) {
    Random_s = new_MINUS_seed;  // Double = Double
}

Ray Ray_copy(Ray* pRef) {
    Ray copy = *pRef;
    copy.origin = Vector3_copy__double(&(pRef->origin));
    copy.direction = Vector3_copy__double(&(pRef->direction));
    return copy;
}

void Ray_delete(Ray p) {
    Vector3_delete__double(p.origin);
    Vector3_delete__double(p.direction);
}

Vector3__double* Ray_direction(Ray* p) { return (&(p->direction)); }

Ray Ray_init(Vector3__double origin, Vector3__double direction) {
    Ray instance;
    instance.origin = origin;
    instance.direction = direction;
    return instance;
}

Vector3__double* Ray_origin(Ray* p) { return (&(p->origin)); }

String Ray_prn(Ray *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Ray");
  temp = Vector3_prn__double(&p->origin); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->direction); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Ray");
  temp = Vector3_prn__double(&p->origin);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->direction);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Ray Ray_set_MINUS_direction(Ray p, Vector3__double newValue) {
    Vector3_delete__double(p.direction);
    p.direction = newValue;
    return p;
}


void Ray_set_MINUS_direction_BANG_(Ray* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->direction);
    pRef->direction = newValue;
}


Ray Ray_set_MINUS_origin(Ray p, Vector3__double newValue) {
    Vector3_delete__double(p.origin);
    p.origin = newValue;
    return p;
}


void Ray_set_MINUS_origin_BANG_(Ray* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->origin);
    pRef->origin = newValue;
}


String Ray_str(Ray *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Ray");
  temp = Vector3_prn__double(&p->origin); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->direction); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Ray");
  temp = Vector3_prn__double(&p->origin);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->direction);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Ray Ray_update_MINUS_direction(Ray p, Lambda *updater) {
    p.direction = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.direction) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.direction);
    return p;
}


Ray Ray_update_MINUS_origin(Ray p, Lambda *updater) {
    p.origin = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.origin) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.origin);
    return p;
}


RayHit RayHit_copy(RayHit* pRef) {
    RayHit copy = *pRef;
    /* Ignore non-managed member 't' : Double */
    copy.point = Vector3_copy__double(&(pRef->point));
    copy.normal = Vector3_copy__double(&(pRef->normal));
    return copy;
}

void RayHit_delete(RayHit p) {
    /* Ignore non-managed member 't' : Double */
    Vector3_delete__double(p.point);
    Vector3_delete__double(p.normal);
}

RayHit RayHit_init(double t, Vector3__double point, Vector3__double normal) {
    RayHit instance;
    instance.t = t;
    instance.point = point;
    instance.normal = normal;
    return instance;
}

Vector3__double* RayHit_normal(RayHit* p) { return (&(p->normal)); }

Vector3__double* RayHit_point(RayHit* p) { return (&(p->point)); }

String RayHit_prn(RayHit *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "RayHit");
  temp = Double_prn(p->t); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "RayHit");
  temp = Double_prn(p->t);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

RayHit RayHit_set_MINUS_normal(RayHit p, Vector3__double newValue) {
    Vector3_delete__double(p.normal);
    p.normal = newValue;
    return p;
}


void RayHit_set_MINUS_normal_BANG_(RayHit* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->normal);
    pRef->normal = newValue;
}


RayHit RayHit_set_MINUS_point(RayHit p, Vector3__double newValue) {
    Vector3_delete__double(p.point);
    p.point = newValue;
    return p;
}


void RayHit_set_MINUS_point_BANG_(RayHit* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->point);
    pRef->point = newValue;
}


RayHit RayHit_set_MINUS_t(RayHit p, double newValue) {
    /* Ignore non-managed member 't' : Double */
    p.t = newValue;
    return p;
}


void RayHit_set_MINUS_t_BANG_(RayHit* pRef, double newValue) {
    /* Ignore non-managed member 't' : Double */
    pRef->t = newValue;
}


String RayHit_str(RayHit *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "RayHit");
  temp = Double_prn(p->t); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "RayHit");
  temp = Double_prn(p->t);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->point);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->normal);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

double* RayHit_t(RayHit* p) { return (&(p->t)); }

RayHit RayHit_update_MINUS_normal(RayHit p, Lambda *updater) {
    p.normal = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.normal) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.normal);
    return p;
}


RayHit RayHit_update_MINUS_point(RayHit p, Lambda *updater) {
    p.point = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.point) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.point);
    return p;
}


RayHit RayHit_update_MINUS_t(RayHit p, Lambda *updater) {
    p.t = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.t) : ((Fn__double_double)(*updater).callback)(p.t);
    return p;
}


bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Error_tag;
    return instance;
}

Result__Char_String Result_Error__String_Char(String member0) {
  Result__Char_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Char_String_Error_tag;
    return instance;
}

Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0) {
  Result__FILE_MUL__String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Error_tag;
    return instance;
}

Result__String_String Result_Error__String_String(String member0) {
  Result__String_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__String_String_Error_tag;
    return instance;
}

Result__bool_String Result_Error__String_bool(String member0) {
  Result__bool_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__bool_String_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0) {
  Result__Array__Uint16_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Error_tag;
    return instance;
}

Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0) {
  Result__Array__Uint32_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Error_tag;
    return instance;
}

Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0) {
  Result__Array__Uint64_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0) {
  Result__Array__Uint16_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Success_tag;
    return instance;
}

Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0) {
  Result__Array__Uint32_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Success_tag;
    return instance;
}

Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0) {
  Result__Array__Uint64_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Success_tag;
    return instance;
}

Result__Char_String Result_Success__Char_String(Char member0) {
  Result__Char_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Char_String_Success_tag;
    return instance;
}

Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0) {
  Result__FILE_MUL__String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Success_tag;
    return instance;
}

Result__String_String Result_Success__String_String(String member0) {
  Result__String_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__String_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Success_tag;
    return instance;
}

Result__bool_String Result_Success__bool_String(bool member0) {
  Result__bool_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__bool_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef) {
    Result__Uint16_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
    }

    else if(pRef->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef) {
    Result__Uint32_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
    }

    else if(pRef->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef) {
    Result__Uint64_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
    }

    else if(pRef->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p) {
  if(p._tag == Result__Array__Uint16_int_Success_tag) {
    Array_delete__Uint16(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint16_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p) {
  if(p._tag == Result__Array__Uint32_int_Success_tag) {
    Array_delete__Uint32(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint32_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p) {
  if(p._tag == Result__Array__Uint64_int_Success_tag) {
    Array_delete__Uint64(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint64_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Char_String(Result__Char_String p) {
  if(p._tag == Result__Char_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Char */
  }
  else if(p._tag == Result__Char_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p) {
  if(p._tag == Result__FILE_MUL__String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : (Ptr FILE) */
  }
  else if(p._tag == Result__FILE_MUL__String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__String_String(Result__String_String p) {
  if(p._tag == Result__String_String_Success_tag) {
    String_delete(p.u.Success.member0);
  }
  else if(p._tag == Result__String_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p) {
  if(p._tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
  }
  else if(p._tag == Result__Uint16_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p) {
  if(p._tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
  }
  else if(p._tag == Result__Uint32_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p) {
  if(p._tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
  }
  else if(p._tag == Result__Uint64_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__bool_String(Result__bool_String p) {
  if(p._tag == Result__bool_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Bool */
  }
  else if(p._tag == Result__bool_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a) {
    bool _14;
    if(a->_tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        String* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        FILE** wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Uint16 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Uint32 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Uint64 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a) {
    String _10;
    if(a._tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String _5_temp = a;
        String x = _5_temp.u.Error.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 69);
    return _10;
}

FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a) {
    FILE* _10;
    if(a._tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String _5_temp = a;
        FILE* x = _5_temp.u.Success.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 58);
    return _10;
}

Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a) {
    Uint16 _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Uint16 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint16 _14 = Uint16_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a) {
    Uint32 _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Uint32 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint32 _14 = Uint32_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a) {
    Uint64 _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Uint64 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint64 _14 = Uint64_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

void RigidBody_apply_MINUS_angular_MINUS_impulse_BANG_(RigidBody* rb, Vector3__double* impulse) {
    Body* _8 = RigidBody_body(rb);
    Body_apply_MINUS_angular_MINUS_impulse_BANG_(_8, impulse);
}

void RigidBody_apply_MINUS_force_BANG_(RigidBody* rb, Vector3__double* f) {
    Body* _8 = RigidBody_body(rb);
    Body_apply_MINUS_force_BANG_(_8, f);
}

void RigidBody_apply_MINUS_impulse_BANG_(RigidBody* rb, Vector3__double* impulse) {
    Body* _8 = RigidBody_body(rb);
    Body_apply_MINUS_impulse_BANG_(_8, impulse);
}

void RigidBody_apply_MINUS_torque_BANG_(RigidBody* rb, Vector3__double* t) {
    Body* _8 = RigidBody_body(rb);
    Body_apply_MINUS_torque_BANG_(_8, t);
}

Body* RigidBody_body(RigidBody* p) { return (&(p->body)); }

RigidBody RigidBody_copy(RigidBody* pRef) {
    RigidBody copy = *pRef;
    copy.transform = Transform_copy(&(pRef->transform));
    copy.body = Body_copy(&(pRef->body));
    return copy;
}

void RigidBody_delete(RigidBody p) {
    Transform_delete(p.transform);
    Body_delete(p.body);
}

RigidBody RigidBody_init(Transform transform, Body body) {
    RigidBody instance;
    instance.transform = transform;
    instance.body = body;
    return instance;
}

RigidBody RigidBody_kinematic(Vector3__double pos, Quaternion rot, double restitution, double friction) {
    Vector3__double _15 = Vector3_init__double(1.0, 1.0, 1.0);
    Transform _16 = Transform_init(pos, rot, _15);
    Body _20 = Body_kinematic(restitution, friction);
    RigidBody _21 = RigidBody_init(_16, _20);
    return _21;
}

RigidBody RigidBody_new(Vector3__double pos, Quaternion rot, double mass, double restitution, double friction, double damping, double ang_MINUS_damping, double inertia) {
    Vector3__double _19 = Vector3_init__double(1.0, 1.0, 1.0);
    Transform _20 = Transform_init(pos, rot, _19);
    Body _28 = Body_new(mass, restitution, friction, damping, ang_MINUS_damping, inertia);
    RigidBody _29 = RigidBody_init(_20, _28);
    return _29;
}

Vector3__double* RigidBody_position(RigidBody* rb) {
    Transform* _7 = RigidBody_transform(rb);
    Vector3__double* _8 = Transform_position(_7);
    return _8;
}

String RigidBody_prn(RigidBody *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "RigidBody");
  temp = Transform_prn(&p->transform); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Body_prn(&p->body); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "RigidBody");
  temp = Transform_prn(&p->transform);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Body_prn(&p->body);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Quaternion* RigidBody_rotation(RigidBody* rb) {
    Transform* _7 = RigidBody_transform(rb);
    Quaternion* _8 = Transform_rotation(_7);
    return _8;
}

RigidBody RigidBody_set_MINUS_body(RigidBody p, Body newValue) {
    Body_delete(p.body);
    p.body = newValue;
    return p;
}


void RigidBody_set_MINUS_body_BANG_(RigidBody* pRef, Body newValue) {
    Body_delete(pRef->body);
    pRef->body = newValue;
}


void RigidBody_set_MINUS_position_BANG_(RigidBody* rb, Vector3__double pos) {
    Transform* _8 = RigidBody_transform(rb);
    Transform_set_MINUS_position_BANG_(_8, pos);
}

void RigidBody_set_MINUS_rotation_BANG_(RigidBody* rb, Quaternion rot) {
    Transform* _8 = RigidBody_transform(rb);
    Transform_set_MINUS_rotation_BANG_(_8, rot);
}

RigidBody RigidBody_set_MINUS_transform(RigidBody p, Transform newValue) {
    Transform_delete(p.transform);
    p.transform = newValue;
    return p;
}


void RigidBody_set_MINUS_transform_BANG_(RigidBody* pRef, Transform newValue) {
    Transform_delete(pRef->transform);
    pRef->transform = newValue;
}


RigidBody RigidBody__STATIC_(Vector3__double pos, Quaternion rot, double restitution, double friction) {
    Vector3__double _15 = Vector3_init__double(1.0, 1.0, 1.0);
    Transform _16 = Transform_init(pos, rot, _15);
    Body _20 = Body__STATIC_(restitution, friction);
    RigidBody _21 = RigidBody_init(_16, _20);
    return _21;
}

void RigidBody_step_BANG_(RigidBody* rb, double dt) {
    Transform* _8 = RigidBody_transform(rb);
    Body* _11 = RigidBody_body(rb);
    Integrator_step_BANG_(_8, _11, dt);
}

void RigidBody_step_MINUS_custom_BANG_(RigidBody* rb, double dt, double sub_MINUS_step) {
    Transform* _9 = RigidBody_transform(rb);
    Body* _12 = RigidBody_body(rb);
    Integrator_step_MINUS_custom_BANG_(_9, _12, dt, sub_MINUS_step);
}

String RigidBody_str(RigidBody *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "RigidBody");
  temp = Transform_prn(&p->transform); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Body_prn(&p->body); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "RigidBody");
  temp = Transform_prn(&p->transform);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Body_prn(&p->body);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Transform* RigidBody_transform(RigidBody* p) { return (&(p->transform)); }

RigidBody RigidBody_update_MINUS_body(RigidBody p, Lambda *updater) {
    p.body = (*updater).env ? ((Fn__LambdaEnv_Body_Body)(*updater).callback)((*updater).env, p.body) : ((Fn__Body_Body)(*updater).callback)(p.body);
    return p;
}


RigidBody RigidBody_update_MINUS_transform(RigidBody p, Lambda *updater) {
    p.transform = (*updater).env ? ((Fn__LambdaEnv_Transform_Transform)(*updater).callback)((*updater).env, p.transform) : ((Fn__Transform_Transform)(*updater).callback)(p.transform);
    return p;
}


void SDF_add_MINUS_crater_BANG_(SDF* sdf, LocalCrater c) {
    Array__LocalCrater* _8 = SDF_craters(sdf);
    Array_push_MINUS_back_BANG___LocalCrater(_8, c);
}

double SDF_apply_MINUS_craters(SDF* sdf, Vector3__double* p, double base_MINUS_d) {
    double _71;
    /* let */ {
        double d = base_MINUS_d;
        Array__LocalCrater* _12 = SDF_craters(sdf);
        Array__LocalCrater* craters = _12;
        /* let */ {
            int i = 0;
            int _24 = Array_length__LocalCrater(craters);
            bool _1000008 = Int__LT_(i, _24);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    LocalCrater* _32 = Array_unsafe_MINUS_nth__LocalCrater(craters, i);
                    LocalCrater* crater = _32;
                    Vector3__double* _39 = LocalCrater_pos(crater);
                    double _40 = Vector3_dist__double(p, _39);
                    double* _44 = LocalCrater_radius(crater);
                    double _45 = Double_copy(_44);
                    double _46 = Double__MINUS_(_40, _45);
                    double c_MINUS_dist = _46;
                    double _55 = Double__MINUS_(0.0, c_MINUS_dist);
                    double _56 = max__double(d, _55);
                    d = _56;  // Double = Double
                }
                int _1000015 = Int__PLUS_(i, 1);
                i = _1000015;  // Int = Int
                int _24 = Array_length__LocalCrater(craters);
                bool _1000008 = Int__LT_(i, _24);
                _1000006 = _1000008;
            }
        }
        double _70 = d;
        _71 = _70;
    }
    return _71;
}

BaseShape* SDF_base(SDF* p) { return (&(p->base)); }

SDF SDF_copy(SDF* pRef) {
    SDF copy = *pRef;
    copy.base = BaseShape_copy(&(pRef->base));
    copy.craters = Array_copy__LocalCrater(&(pRef->craters));
    copy.position = Vector3_copy__double(&(pRef->position));
    copy.rotation = Quaternion_copy(&(pRef->rotation));
    return copy;
}

Array__LocalCrater* SDF_craters(SDF* p) { return (&(p->craters)); }

void SDF_delete(SDF p) {
    BaseShape_delete(p.base);
    Array_delete__LocalCrater(p.craters);
    Vector3_delete__double(p.position);
    Quaternion_delete(p.rotation);
}

double SDF_distance(SDF* sdf, Vector3__double* p_MINUS_world) {
    double _8 = SDF_distance_MINUS_world(sdf, p_MINUS_world);
    return _8;
}

double SDF_distance_MINUS_local(SDF* sdf, Vector3__double* p) {
    BaseShape* _9 = SDF_base(sdf);
    BaseShape _10 = BaseShape_copy(_9);
    double _231;
    if(_10._tag == BaseShape_Ball_tag) {
        BaseShape _10_temp = _10;
        double ball_MINUS_r = _10_temp.u.Ball.member0;
        // Case expr:
        double _20 = Vector3_mag__double(p);
        double _22 = Double__MINUS_(_20, ball_MINUS_r);
        double _23 = SDF_apply_MINUS_craters(sdf, p, _22);
        _231 = _23;
    }
    else if(_10._tag == BaseShape_Surface_tag) {
        BaseShape _10_temp = _10;
        Plane surf_MINUS_pl = _10_temp.u.Surface.member0;
        // Case expr:
        Plane* _33 = &surf_MINUS_pl; // ref
        double _35 = Plane_distance_MINUS_to_MINUS_point(_33, p);
        double _36 = SDF_apply_MINUS_craters(sdf, p, _35);
        _231 = _36;
        Plane_delete(surf_MINUS_pl);
    }
    else if(_10._tag == BaseShape_Box_tag) {
        BaseShape _10_temp = _10;
        Vector3__double e = _10_temp.u.Box.member0;
        // Case expr:
        double _141;
        /* let */ {
            double* _46 = Vector3_x__double(p);
            double _47 = Double_copy(_46);
            double _48 = Double_abs(_47);
            double px = _48;
            double* _54 = Vector3_y__double(p);
            double _55 = Double_copy(_54);
            double _56 = Double_abs(_55);
            double py = _56;
            double* _62 = Vector3_z__double(p);
            double _63 = Double_copy(_62);
            double _64 = Double_abs(_63);
            double pz = _64;
            Vector3__double* _72 = &e; // ref
            double* _73 = Vector3_x__double(_72);
            double _74 = Double_copy(_73);
            double _75 = Double__MINUS_(px, _74);
            double qx = _75;
            Vector3__double* _83 = &e; // ref
            double* _84 = Vector3_y__double(_83);
            double _85 = Double_copy(_84);
            double _86 = Double__MINUS_(py, _85);
            double qy = _86;
            Vector3__double* _94 = &e; // ref
            double* _95 = Vector3_z__double(_94);
            double _96 = Double_copy(_95);
            double _97 = Double__MINUS_(pz, _96);
            double qz = _97;
            double _104 = max__double(qy, qz);
            double _105 = max__double(qx, _104);
            double max_MINUS_q = _105;
            double _111 = max__double(qx, 0.0);
            double _115 = max__double(qy, 0.0);
            double _119 = max__double(qz, 0.0);
            Vector3__double _120 = Vector3_init__double(_111, _115, _119);
            Vector3__double outside = _120;
            Vector3__double* _125 = &outside; // ref
            double _126 = Vector3_mag__double(_125);
            double dist_MINUS_outside = _126;
            double _131 = min__double(max_MINUS_q, 0.0);
            double dist_MINUS_inside = _131;
            double _139 = Double__PLUS_(dist_MINUS_outside, dist_MINUS_inside);
            double _140 = SDF_apply_MINUS_craters(sdf, p, _139);
            _141 = _140;
            Vector3_delete__double(outside);
        }
        _231 = _141;
        Vector3_delete__double(e);
    }
    else if(_10._tag == BaseShape_Cylinder_tag) {
        BaseShape _10_temp = _10;
        double r = _10_temp.u.Cylinder.member0;
        double h = _10_temp.u.Cylinder.member1;
        // Case expr:
        double _230;
        /* let */ {
            double* _155 = Vector3_x__double(p);
            double _156 = Double_copy(_155);
            double* _160 = Vector3_x__double(p);
            double _161 = Double_copy(_160);
            double _162 = Double__MUL_(_156, _161);
            double* _167 = Vector3_z__double(p);
            double _168 = Double_copy(_167);
            double* _172 = Vector3_z__double(p);
            double _173 = Double_copy(_172);
            double _174 = Double__MUL_(_168, _173);
            double _175 = Double__PLUS_(_162, _174);
            double _176 = Double_sqrt(_175);
            double _178 = Double__MINUS_(_176, r);
            double rad_MINUS_dist = _178;
            double* _185 = Vector3_y__double(p);
            double _186 = Double_copy(_185);
            double _187 = Double_abs(_186);
            double _189 = Double__MINUS_(_187, h);
            double ax_MINUS_dist = _189;
            double _194 = max__double(rad_MINUS_dist, 0.0);
            double dx = _194;
            double _199 = max__double(ax_MINUS_dist, 0.0);
            double dy = _199;
            double _206 = Double__MUL_(dx, dx);
            double _210 = Double__MUL_(dy, dy);
            double _211 = Double__PLUS_(_206, _210);
            double _212 = Double_sqrt(_211);
            double dist_MINUS_outside = _212;
            double _218 = max__double(rad_MINUS_dist, ax_MINUS_dist);
            double _220 = min__double(_218, 0.0);
            double dist_MINUS_inside = _220;
            double _228 = Double__PLUS_(dist_MINUS_outside, dist_MINUS_inside);
            double _229 = SDF_apply_MINUS_craters(sdf, p, _228);
            _230 = _229;
        }
        _231 = _230;
    }
    else UNHANDLED("geometry.carp", 119);
    return _231;
}

double SDF_distance_MINUS_world(SDF* sdf, Vector3__double* p_MINUS_world) {
    BaseShape* _9 = SDF_base(sdf);
    BaseShape _10 = BaseShape_copy(_9);
    double _50;
    if(_10._tag == BaseShape_Surface_tag) {
        BaseShape _10_temp = _10;
        Plane pl = _10_temp.u.Surface.member0;
        // Case expr:
        double _17 = SDF_distance_MINUS_local(sdf, p_MINUS_world);
        _50 = _17;
        Plane_delete(pl);
    }
    else if(true) {
        BaseShape _10_temp = _10;
        BaseShape wildcard_18 = _10_temp;
        double _49;
        /* let */ {
            Vector3__double* _23 = SDF_position(sdf);
            Vector3__double* pos = _23;
            Quaternion* _27 = SDF_rotation(sdf);
            Quaternion* rot = _27;
            Quaternion _33 = Quaternion_inverse(rot);
            Quaternion* _34 = &_33; // ref
            Vector3__double _39 = Vector3_sub__double(p_MINUS_world, pos);
            Vector3__double* _40 = &_39; // ref
            Vector3__double _41 = Quaternion_rotate(_34, _40);
            Vector3__double local_MINUS_p = _41;
            Vector3__double* _47 = &local_MINUS_p; // ref
            double _48 = SDF_distance_MINUS_local(sdf, _47);
            _49 = _48;
            Quaternion_delete(_33);
            Vector3_delete__double(_39);
            Vector3_delete__double(local_MINUS_p);
        }
        _50 = _49;
        BaseShape_delete(wildcard_18);
    }
    else UNHANDLED("geometry.carp", 146);
    return _50;
}

SDF SDF_init(BaseShape base, Array__LocalCrater craters, Vector3__double position, Quaternion rotation) {
    SDF instance;
    instance.base = base;
    instance.craters = craters;
    instance.position = position;
    instance.rotation = rotation;
    return instance;
}

SDF SDF_init_MINUS_box(Vector3__double e, Vector3__double pos, Quaternion rot) {
    BaseShape _9 = BaseShape_Box(e);
    Array _10 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(LocalCrater) * 0) };
    SDF _13 = SDF_init(_9, _10, pos, rot);
    return _13;
}

SDF SDF_init_MINUS_cylinder(double r, double h, Vector3__double pos, Quaternion rot) {
    BaseShape _11 = BaseShape_Cylinder(r, h);
    Array _12 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(LocalCrater) * 0) };
    SDF _15 = SDF_init(_11, _12, pos, rot);
    return _15;
}

SDF SDF_init_MINUS_plane(Plane pl, Vector3__double pos, Quaternion rot) {
    BaseShape _9 = BaseShape_Surface(pl);
    Array _10 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(LocalCrater) * 0) };
    SDF _13 = SDF_init(_9, _10, pos, rot);
    return _13;
}

SDF SDF_init_MINUS_sphere(double r, Vector3__double pos, Quaternion rot) {
    BaseShape _9 = BaseShape_Ball(r);
    Array _10 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(LocalCrater) * 0) };
    SDF _13 = SDF_init(_9, _10, pos, rot);
    return _13;
}

Vector3__double SDF_normal_MINUS_at(SDF* sdf, Vector3__double* p_MINUS_world) {
    Vector3__double _8 = SDF_normal_MINUS_world(sdf, p_MINUS_world);
    return _8;
}

Vector3__double SDF_normal_MINUS_local(SDF* sdf, Vector3__double* p) {
    Vector3__double _113;
    /* let */ {
        double eps = 1.0e-4;
        Vector3__double _13 = Vector3_init__double(eps, 0.0, 0.0);
        Vector3__double eps_MINUS_x = _13;
        Vector3__double _19 = Vector3_init__double(0.0, eps, 0.0);
        Vector3__double eps_MINUS_y = _19;
        Vector3__double _25 = Vector3_init__double(0.0, 0.0, eps);
        Vector3__double eps_MINUS_z = _25;
        Vector3__double* _35 = &eps_MINUS_x; // ref
        Vector3__double _36 = Vector3_add__double(p, _35);
        Vector3__double* _37 = &_36; // ref
        double _38 = SDF_distance_MINUS_local(sdf, _37);
        Vector3__double* _46 = &eps_MINUS_x; // ref
        Vector3__double _47 = Vector3_sub__double(p, _46);
        Vector3__double* _48 = &_47; // ref
        double _49 = SDF_distance_MINUS_local(sdf, _48);
        double _50 = Double__MINUS_(_38, _49);
        double dx = _50;
        Vector3__double* _60 = &eps_MINUS_y; // ref
        Vector3__double _61 = Vector3_add__double(p, _60);
        Vector3__double* _62 = &_61; // ref
        double _63 = SDF_distance_MINUS_local(sdf, _62);
        Vector3__double* _71 = &eps_MINUS_y; // ref
        Vector3__double _72 = Vector3_sub__double(p, _71);
        Vector3__double* _73 = &_72; // ref
        double _74 = SDF_distance_MINUS_local(sdf, _73);
        double _75 = Double__MINUS_(_63, _74);
        double dy = _75;
        Vector3__double* _85 = &eps_MINUS_z; // ref
        Vector3__double _86 = Vector3_add__double(p, _85);
        Vector3__double* _87 = &_86; // ref
        double _88 = SDF_distance_MINUS_local(sdf, _87);
        Vector3__double* _96 = &eps_MINUS_z; // ref
        Vector3__double _97 = Vector3_sub__double(p, _96);
        Vector3__double* _98 = &_97; // ref
        double _99 = SDF_distance_MINUS_local(sdf, _98);
        double _100 = Double__MINUS_(_88, _99);
        double dz = _100;
        Vector3__double _106 = Vector3_init__double(dx, dy, dz);
        Vector3__double grad = _106;
        Vector3__double* _111 = &grad; // ref
        Vector3__double _112 = Vector3_normalize__double(_111);
        _113 = _112;
        Vector3_delete__double(_36);
        Vector3_delete__double(_47);
        Vector3_delete__double(_61);
        Vector3_delete__double(_72);
        Vector3_delete__double(_86);
        Vector3_delete__double(_97);
        Vector3_delete__double(eps_MINUS_x);
        Vector3_delete__double(eps_MINUS_y);
        Vector3_delete__double(eps_MINUS_z);
        Vector3_delete__double(grad);
    }
    return _113;
}

Vector3__double SDF_normal_MINUS_world(SDF* sdf, Vector3__double* p_MINUS_world) {
    BaseShape* _9 = SDF_base(sdf);
    BaseShape _10 = BaseShape_copy(_9);
    Vector3__double _57;
    if(_10._tag == BaseShape_Surface_tag) {
        BaseShape _10_temp = _10;
        Plane pl = _10_temp.u.Surface.member0;
        // Case expr:
        Vector3__double _17 = SDF_normal_MINUS_local(sdf, p_MINUS_world);
        _57 = _17;
        Plane_delete(pl);
    }
    else if(true) {
        BaseShape _10_temp = _10;
        BaseShape wildcard_18 = _10_temp;
        Vector3__double _56;
        /* let */ {
            Vector3__double* _23 = SDF_position(sdf);
            Vector3__double* pos = _23;
            Quaternion* _27 = SDF_rotation(sdf);
            Quaternion* rot = _27;
            Quaternion _33 = Quaternion_inverse(rot);
            Quaternion* _34 = &_33; // ref
            Vector3__double _39 = Vector3_sub__double(p_MINUS_world, pos);
            Vector3__double* _40 = &_39; // ref
            Vector3__double _41 = Quaternion_rotate(_34, _40);
            Vector3__double local_MINUS_p = _41;
            Vector3__double* _47 = &local_MINUS_p; // ref
            Vector3__double _48 = SDF_normal_MINUS_local(sdf, _47);
            Vector3__double local_MINUS_n = _48;
            Vector3__double* _54 = &local_MINUS_n; // ref
            Vector3__double _55 = Quaternion_rotate(rot, _54);
            _56 = _55;
            Quaternion_delete(_33);
            Vector3_delete__double(_39);
            Vector3_delete__double(local_MINUS_n);
            Vector3_delete__double(local_MINUS_p);
        }
        _57 = _56;
        BaseShape_delete(wildcard_18);
    }
    else UNHANDLED("geometry.carp", 170);
    return _57;
}

Vector3__double* SDF_position(SDF* p) { return (&(p->position)); }

String SDF_prn(SDF *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDF");
  temp = BaseShape_prn(&p->base); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__LocalCrater(&p->craters); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->position); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "SDF");
  temp = BaseShape_prn(&p->base);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__LocalCrater(&p->craters);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->position);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Quaternion* SDF_rotation(SDF* p) { return (&(p->rotation)); }

SDF SDF_set_MINUS_base(SDF p, BaseShape newValue) {
    BaseShape_delete(p.base);
    p.base = newValue;
    return p;
}


void SDF_set_MINUS_base_BANG_(SDF* pRef, BaseShape newValue) {
    BaseShape_delete(pRef->base);
    pRef->base = newValue;
}


SDF SDF_set_MINUS_craters(SDF p, Array__LocalCrater newValue) {
    Array_delete__LocalCrater(p.craters);
    p.craters = newValue;
    return p;
}


void SDF_set_MINUS_craters_BANG_(SDF* pRef, Array__LocalCrater newValue) {
    Array_delete__LocalCrater(pRef->craters);
    pRef->craters = newValue;
}


SDF SDF_set_MINUS_position(SDF p, Vector3__double newValue) {
    Vector3_delete__double(p.position);
    p.position = newValue;
    return p;
}


void SDF_set_MINUS_position_BANG_(SDF* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->position);
    pRef->position = newValue;
}


SDF SDF_set_MINUS_rotation(SDF p, Quaternion newValue) {
    Quaternion_delete(p.rotation);
    p.rotation = newValue;
    return p;
}


void SDF_set_MINUS_rotation_BANG_(SDF* pRef, Quaternion newValue) {
    Quaternion_delete(pRef->rotation);
    pRef->rotation = newValue;
}


String SDF_str(SDF *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDF");
  temp = BaseShape_prn(&p->base); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__LocalCrater(&p->craters); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->position); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "SDF");
  temp = BaseShape_prn(&p->base);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__LocalCrater(&p->craters);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->position);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

SDF SDF_update_MINUS_base(SDF p, Lambda *updater) {
    p.base = (*updater).env ? ((Fn__LambdaEnv_BaseShape_BaseShape)(*updater).callback)((*updater).env, p.base) : ((Fn__BaseShape_BaseShape)(*updater).callback)(p.base);
    return p;
}


SDF SDF_update_MINUS_craters(SDF p, Lambda *updater) {
    p.craters = (*updater).env ? ((Fn__LambdaEnv_Array__LocalCrater_Array__LocalCrater)(*updater).callback)((*updater).env, p.craters) : ((Fn__Array__LocalCrater_Array__LocalCrater)(*updater).callback)(p.craters);
    return p;
}


SDF SDF_update_MINUS_position(SDF p, Lambda *updater) {
    p.position = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.position) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.position);
    return p;
}


SDF SDF_update_MINUS_rotation(SDF p, Lambda *updater) {
    p.rotation = (*updater).env ? ((Fn__LambdaEnv_Quaternion_Quaternion)(*updater).callback)((*updater).env, p.rotation) : ((Fn__Quaternion_Quaternion)(*updater).callback)(p.rotation);
    return p;
}


Segment Segment_copy(Segment* pRef) {
    Segment copy = *pRef;
    copy.start = Vector3_copy__double(&(pRef->start));
    copy.end = Vector3_copy__double(&(pRef->end));
    return copy;
}

void Segment_delete(Segment p) {
    Vector3_delete__double(p.start);
    Vector3_delete__double(p.end);
}

Vector3__double* Segment_end(Segment* p) { return (&(p->end)); }

Segment Segment_init(Vector3__double start, Vector3__double end) {
    Segment instance;
    instance.start = start;
    instance.end = end;
    return instance;
}

String Segment_prn(Segment *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Segment");
  temp = Vector3_prn__double(&p->start); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->end); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Segment");
  temp = Vector3_prn__double(&p->start);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->end);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Segment Segment_set_MINUS_end(Segment p, Vector3__double newValue) {
    Vector3_delete__double(p.end);
    p.end = newValue;
    return p;
}


void Segment_set_MINUS_end_BANG_(Segment* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->end);
    pRef->end = newValue;
}


Segment Segment_set_MINUS_start(Segment p, Vector3__double newValue) {
    Vector3_delete__double(p.start);
    p.start = newValue;
    return p;
}


void Segment_set_MINUS_start_BANG_(Segment* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->start);
    pRef->start = newValue;
}


Vector3__double* Segment_start(Segment* p) { return (&(p->start)); }

String Segment_str(Segment *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Segment");
  temp = Vector3_prn__double(&p->start); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->end); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Segment");
  temp = Vector3_prn__double(&p->start);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->end);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Segment Segment_update_MINUS_end(Segment p, Lambda *updater) {
    p.end = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.end) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.end);
    return p;
}


Segment Segment_update_MINUS_start(Segment p, Lambda *updater) {
    p.start = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.start) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.start);
    return p;
}


void Solver_solve_BANG_(RigidBody* rb_MINUS_a, RigidBody* rb_MINUS_b, ContactSet* contact_MINUS_set) {
    /* let */ {
        Transform* _10 = RigidBody_transform(rb_MINUS_a);
        Transform* t_MINUS_a = _10;
        Body* _14 = RigidBody_body(rb_MINUS_a);
        Body* b_MINUS_a = _14;
        Transform* _18 = RigidBody_transform(rb_MINUS_b);
        Transform* t_MINUS_b = _18;
        Body* _22 = RigidBody_body(rb_MINUS_b);
        Body* b_MINUS_b = _22;
        Array__Contact* _26 = ContactSet_contacts(contact_MINUS_set);
        Array__Contact* contacts = _26;
        double* _31 = Body_inv_MINUS_mass(b_MINUS_a);
        double _32 = Double_copy(_31);
        double inv_MINUS_m_MINUS_a = _32;
        double* _37 = Body_inv_MINUS_mass(b_MINUS_b);
        double _38 = Double_copy(_37);
        double inv_MINUS_m_MINUS_b = _38;
        double* _43 = Body_inv_MINUS_inertia(b_MINUS_a);
        double _44 = Double_copy(_43);
        double inv_MINUS_i_MINUS_a = _44;
        double* _49 = Body_inv_MINUS_inertia(b_MINUS_b);
        double _50 = Double_copy(_49);
        double inv_MINUS_i_MINUS_b = _50;
        double _55 = Double__PLUS_(inv_MINUS_m_MINUS_a, inv_MINUS_m_MINUS_b);
        double total_MINUS_inv_MINUS_mass = _55;
        bool _61 = _LT__EQ___double(total_MINUS_inv_MINUS_mass, 0.0);
        if (_61) {
            /* () */
        } else {
            /* let */ {
                int ci = 0;
                int _75 = Array_length__Contact(contacts);
                bool _1000011 = Int__LT_(ci, _75);
                bool _1000009 = _1000011;
                while (_1000009) {
                    /* let */ {
                        Contact* _83 = Array_unsafe_MINUS_nth__Contact(contacts, ci);
                        Contact* contact = _83;
                        Vector3__double* _87 = Contact_normal(contact);
                        Vector3__double* normal = _87;
                        Vector3__double* _91 = Contact_point(contact);
                        Vector3__double* cp = _91;
                        double* _96 = Contact_depth(contact);
                        double _97 = Double_copy(_96);
                        double depth = _97;
                        Vector3__double* _103 = Transform_position(t_MINUS_a);
                        Vector3__double _104 = Vector3_sub__double(cp, _103);
                        Vector3__double r_MINUS_a = _104;
                        Vector3__double* _110 = Transform_position(t_MINUS_b);
                        Vector3__double _111 = Vector3_sub__double(cp, _110);
                        Vector3__double r_MINUS_b = _111;
                        Vector3__double* _115 = Body_velocity(b_MINUS_a);
                        Vector3__double* v_MINUS_lin_MINUS_a = _115;
                        Vector3__double* _119 = Body_velocity(b_MINUS_b);
                        Vector3__double* v_MINUS_lin_MINUS_b = _119;
                        Vector3__double* _123 = Body_angular_MINUS_velocity(b_MINUS_a);
                        Vector3__double* w_MINUS_a = _123;
                        Vector3__double* _127 = Body_angular_MINUS_velocity(b_MINUS_b);
                        Vector3__double* w_MINUS_b = _127;
                        Vector3__double* _136 = &r_MINUS_a; // ref
                        Vector3__double _137 = Vector3_cross__double(w_MINUS_a, _136);
                        Vector3__double* _138 = &_137; // ref
                        Vector3__double _139 = Vector3_add__double(v_MINUS_lin_MINUS_a, _138);
                        Vector3__double v_MINUS_at_MINUS_a = _139;
                        Vector3__double* _148 = &r_MINUS_b; // ref
                        Vector3__double _149 = Vector3_cross__double(w_MINUS_b, _148);
                        Vector3__double* _150 = &_149; // ref
                        Vector3__double _151 = Vector3_add__double(v_MINUS_lin_MINUS_b, _150);
                        Vector3__double v_MINUS_at_MINUS_b = _151;
                        Vector3__double* _156 = &v_MINUS_at_MINUS_a; // ref
                        Vector3__double* _159 = &v_MINUS_at_MINUS_b; // ref
                        Vector3__double _160 = Vector3_sub__double(_156, _159);
                        Vector3__double rel_MINUS_v = _160;
                        Vector3__double* _165 = &rel_MINUS_v; // ref
                        double _167 = Vector3_dot__double(_165, normal);
                        double vel_MINUS_along_MINUS_normal = _167;
                        bool _174 = Double__LT_(vel_MINUS_along_MINUS_normal, 0.0);
                        if (_174) {
                            /* let */ {
                                double* _182 = Body_restitution(b_MINUS_a);
                                double _183 = Double_copy(_182);
                                double* _187 = Body_restitution(b_MINUS_b);
                                double _188 = Double_copy(_187);
                                double _189 = min__double(_183, _188);
                                double e = _189;
                                Vector3__double* _194 = &r_MINUS_a; // ref
                                Vector3__double _196 = Vector3_cross__double(_194, normal);
                                Vector3__double r_MINUS_a_MINUS_cross_MINUS_n = _196;
                                Vector3__double* _201 = &r_MINUS_b; // ref
                                Vector3__double _203 = Vector3_cross__double(_201, normal);
                                Vector3__double r_MINUS_b_MINUS_cross_MINUS_n = _203;
                                Vector3__double* _208 = &r_MINUS_a_MINUS_cross_MINUS_n; // ref
                                Vector3__double* _213 = &r_MINUS_a_MINUS_cross_MINUS_n; // ref
                                Vector3__double _215 = Vector3_mul__double(_213, inv_MINUS_i_MINUS_a);
                                Vector3__double* _216 = &_215; // ref
                                double _217 = Vector3_dot__double(_208, _216);
                                double ang_MINUS_a = _217;
                                Vector3__double* _222 = &r_MINUS_b_MINUS_cross_MINUS_n; // ref
                                Vector3__double* _227 = &r_MINUS_b_MINUS_cross_MINUS_n; // ref
                                Vector3__double _229 = Vector3_mul__double(_227, inv_MINUS_i_MINUS_b);
                                Vector3__double* _230 = &_229; // ref
                                double _231 = Vector3_dot__double(_222, _230);
                                double ang_MINUS_b = _231;
                                double _239 = Double__PLUS_(1.0, e);
                                double _241 = Double__MUL_(_239, vel_MINUS_along_MINUS_normal);
                                double _242 = Double__MINUS_(0.0, _241);
                                double j_MINUS_num = _242;
                                double _251 = Double__PLUS_(ang_MINUS_a, ang_MINUS_b);
                                double _252 = Double__PLUS_(total_MINUS_inv_MINUS_mass, _251);
                                double _253 = Double__DIV_(j_MINUS_num, _252);
                                double j = _253;
                                Vector3__double _258 = Vector3_mul__double(normal, j);
                                Vector3__double impulse = _258;
                                Vector3__double* _265 = &impulse; // ref
                                Body_apply_MINUS_impulse_BANG_(b_MINUS_a, _265);
                                Vector3__double* _273 = &impulse; // ref
                                Vector3__double _275 = Vector3_mul__double(_273, -1.0);
                                Vector3__double* _276 = &_275; // ref
                                Body_apply_MINUS_impulse_BANG_(b_MINUS_b, _276);
                                /* let */ {
                                    Vector3__double* _283 = &r_MINUS_a; // ref
                                    Vector3__double* _286 = &impulse; // ref
                                    Vector3__double _287 = Vector3_cross__double(_283, _286);
                                    Vector3__double torque_MINUS_a = _287;
                                    Vector3__double* _292 = &r_MINUS_b; // ref
                                    Vector3__double* _297 = &impulse; // ref
                                    Vector3__double _299 = Vector3_mul__double(_297, -1.0);
                                    Vector3__double* _300 = &_299; // ref
                                    Vector3__double _301 = Vector3_cross__double(_292, _300);
                                    Vector3__double torque_MINUS_b = _301;
                                    Vector3__double* _308 = &torque_MINUS_a; // ref
                                    Body_apply_MINUS_angular_MINUS_impulse_BANG_(b_MINUS_a, _308);
                                    Vector3__double* _314 = &torque_MINUS_b; // ref
                                    Body_apply_MINUS_angular_MINUS_impulse_BANG_(b_MINUS_b, _314);
                                    Vector3_delete__double(_299);
                                    Vector3_delete__double(torque_MINUS_a);
                                    Vector3_delete__double(torque_MINUS_b);
                                }
                                /* let */ {
                                    Vector3__double* _323 = Body_velocity(b_MINUS_a);
                                    Vector3__double* _328 = Body_angular_MINUS_velocity(b_MINUS_a);
                                    Vector3__double* _331 = &r_MINUS_a; // ref
                                    Vector3__double _332 = Vector3_cross__double(_328, _331);
                                    Vector3__double* _333 = &_332; // ref
                                    Vector3__double _334 = Vector3_add__double(_323, _333);
                                    Vector3__double v_MINUS_at_MINUS_a2 = _334;
                                    Vector3__double* _339 = Body_velocity(b_MINUS_b);
                                    Vector3__double* _344 = Body_angular_MINUS_velocity(b_MINUS_b);
                                    Vector3__double* _347 = &r_MINUS_b; // ref
                                    Vector3__double _348 = Vector3_cross__double(_344, _347);
                                    Vector3__double* _349 = &_348; // ref
                                    Vector3__double _350 = Vector3_add__double(_339, _349);
                                    Vector3__double v_MINUS_at_MINUS_b2 = _350;
                                    Vector3__double* _355 = &v_MINUS_at_MINUS_a2; // ref
                                    Vector3__double* _358 = &v_MINUS_at_MINUS_b2; // ref
                                    Vector3__double _359 = Vector3_sub__double(_355, _358);
                                    Vector3__double rel_MINUS_v2 = _359;
                                    Vector3__double* _366 = &rel_MINUS_v2; // ref
                                    double _368 = Vector3_dot__double(_366, normal);
                                    Vector3__double _369 = Vector3_mul__double(normal, _368);
                                    Vector3__double v_MINUS_n2 = _369;
                                    Vector3__double* _374 = &rel_MINUS_v2; // ref
                                    Vector3__double* _377 = &v_MINUS_n2; // ref
                                    Vector3__double _378 = Vector3_sub__double(_374, _377);
                                    Vector3__double v_MINUS_tan = _378;
                                    Vector3__double* _385 = &v_MINUS_tan; // ref
                                    double _386 = Vector3_mag_MINUS_sq__double(_385);
                                    bool _388 = Double__GT_(_386, 1.0e-4);
                                    if (_388) {
                                        /* let */ {
                                            Vector3__double* _395 = &v_MINUS_tan; // ref
                                            Vector3__double _396 = Vector3_normalize__double(_395);
                                            Vector3__double t_MINUS_norm = _396;
                                            double* _402 = Body_friction(b_MINUS_a);
                                            double _403 = Double_copy(_402);
                                            double* _407 = Body_friction(b_MINUS_b);
                                            double _408 = Double_copy(_407);
                                            double _409 = min__double(_403, _408);
                                            double f_MINUS_mu = _409;
                                            Vector3__double* _414 = &r_MINUS_a; // ref
                                            Vector3__double* _417 = &t_MINUS_norm; // ref
                                            Vector3__double _418 = Vector3_cross__double(_414, _417);
                                            Vector3__double r_MINUS_a_MINUS_cross_MINUS_t = _418;
                                            Vector3__double* _423 = &r_MINUS_b; // ref
                                            Vector3__double* _426 = &t_MINUS_norm; // ref
                                            Vector3__double _427 = Vector3_cross__double(_423, _426);
                                            Vector3__double r_MINUS_b_MINUS_cross_MINUS_t = _427;
                                            Vector3__double* _432 = &r_MINUS_a_MINUS_cross_MINUS_t; // ref
                                            Vector3__double* _437 = &r_MINUS_a_MINUS_cross_MINUS_t; // ref
                                            Vector3__double _439 = Vector3_mul__double(_437, inv_MINUS_i_MINUS_a);
                                            Vector3__double* _440 = &_439; // ref
                                            double _441 = Vector3_dot__double(_432, _440);
                                            double ang_MINUS_a_MINUS_t = _441;
                                            Vector3__double* _446 = &r_MINUS_b_MINUS_cross_MINUS_t; // ref
                                            Vector3__double* _451 = &r_MINUS_b_MINUS_cross_MINUS_t; // ref
                                            Vector3__double _453 = Vector3_mul__double(_451, inv_MINUS_i_MINUS_b);
                                            Vector3__double* _454 = &_453; // ref
                                            double _455 = Vector3_dot__double(_446, _454);
                                            double ang_MINUS_b_MINUS_t = _455;
                                            Vector3__double* _462 = &rel_MINUS_v2; // ref
                                            Vector3__double* _465 = &t_MINUS_norm; // ref
                                            double _466 = Vector3_dot__double(_462, _465);
                                            double _467 = Double__MINUS_(0.0, _466);
                                            double jt_MINUS_num = _467;
                                            double _476 = Double__PLUS_(ang_MINUS_a_MINUS_t, ang_MINUS_b_MINUS_t);
                                            double _477 = Double__PLUS_(total_MINUS_inv_MINUS_mass, _476);
                                            double _478 = Double__DIV_(jt_MINUS_num, _477);
                                            double jt = _478;
                                            double _483 = Double__MUL_(j, f_MINUS_mu);
                                            double max_MINUS_f = _483;
                                            double _489 = Double__MINUS_(0.0, max_MINUS_f);
                                            double _492 = clamp__double(_489, max_MINUS_f, jt);
                                            double jt_MINUS_clamped = _492;
                                            Vector3__double* _497 = &t_MINUS_norm; // ref
                                            Vector3__double _499 = Vector3_mul__double(_497, jt_MINUS_clamped);
                                            Vector3__double f_MINUS_impulse = _499;
                                            Vector3__double* _506 = &f_MINUS_impulse; // ref
                                            Body_apply_MINUS_impulse_BANG_(b_MINUS_a, _506);
                                            Vector3__double* _514 = &f_MINUS_impulse; // ref
                                            Vector3__double _516 = Vector3_mul__double(_514, -1.0);
                                            Vector3__double* _517 = &_516; // ref
                                            Body_apply_MINUS_impulse_BANG_(b_MINUS_b, _517);
                                            Vector3__double* _525 = &r_MINUS_a; // ref
                                            Vector3__double* _528 = &f_MINUS_impulse; // ref
                                            Vector3__double _529 = Vector3_cross__double(_525, _528);
                                            Vector3__double* _530 = &_529; // ref
                                            Body_apply_MINUS_angular_MINUS_impulse_BANG_(b_MINUS_a, _530);
                                            Vector3__double* _538 = &r_MINUS_b; // ref
                                            Vector3__double* _543 = &f_MINUS_impulse; // ref
                                            Vector3__double _545 = Vector3_mul__double(_543, -1.0);
                                            Vector3__double* _546 = &_545; // ref
                                            Vector3__double _547 = Vector3_cross__double(_538, _546);
                                            Vector3__double* _548 = &_547; // ref
                                            Body_apply_MINUS_angular_MINUS_impulse_BANG_(b_MINUS_b, _548);
                                            Vector3_delete__double(_439);
                                            Vector3_delete__double(_453);
                                            Vector3_delete__double(_516);
                                            Vector3_delete__double(_529);
                                            Vector3_delete__double(_545);
                                            Vector3_delete__double(_547);
                                            Vector3_delete__double(f_MINUS_impulse);
                                            Vector3_delete__double(r_MINUS_a_MINUS_cross_MINUS_t);
                                            Vector3_delete__double(r_MINUS_b_MINUS_cross_MINUS_t);
                                            Vector3_delete__double(t_MINUS_norm);
                                        }
                                    } else {
                                        /* () */
                                    }
                                    Vector3_delete__double(_332);
                                    Vector3_delete__double(_348);
                                    Vector3_delete__double(rel_MINUS_v2);
                                    Vector3_delete__double(v_MINUS_at_MINUS_a2);
                                    Vector3_delete__double(v_MINUS_at_MINUS_b2);
                                    Vector3_delete__double(v_MINUS_n2);
                                    Vector3_delete__double(v_MINUS_tan);
                                }
                                Vector3_delete__double(_215);
                                Vector3_delete__double(_229);
                                Vector3_delete__double(_275);
                                Vector3_delete__double(impulse);
                                Vector3_delete__double(r_MINUS_a_MINUS_cross_MINUS_n);
                                Vector3_delete__double(r_MINUS_b_MINUS_cross_MINUS_n);
                            }
                        } else {
                            /* () */
                        }
                        /* let */ {
                            double percent = 0.4;
                            double slop = 1.0e-2;
                            double max_MINUS_corr = 0.1;
                            double _578 = Double__MINUS_(depth, slop);
                            double _580 = max__double(_578, 0.0);
                            double _582 = min__double(_580, max_MINUS_corr);
                            double depth_MINUS_clamped = _582;
                            double _588 = Double__DIV_(depth_MINUS_clamped, total_MINUS_inv_MINUS_mass);
                            double _590 = Double__MUL_(_588, percent);
                            double corr_MINUS_mag = _590;
                            Vector3__double _595 = Vector3_mul__double(normal, corr_MINUS_mag);
                            Vector3__double correction = _595;
                            Vector3__double* _603 = Transform_position(t_MINUS_a);
                            Vector3__double* _608 = &correction; // ref
                            Vector3__double _610 = Vector3_mul__double(_608, inv_MINUS_m_MINUS_a);
                            Vector3__double* _611 = &_610; // ref
                            Vector3__double _612 = Vector3_add__double(_603, _611);
                            Transform_set_MINUS_position_BANG_(t_MINUS_a, _612);
                            Vector3__double* _619 = Transform_position(t_MINUS_b);
                            Vector3__double* _624 = &correction; // ref
                            Vector3__double _626 = Vector3_mul__double(_624, inv_MINUS_m_MINUS_b);
                            Vector3__double* _627 = &_626; // ref
                            Vector3__double _628 = Vector3_sub__double(_619, _627);
                            Transform_set_MINUS_position_BANG_(t_MINUS_b, _628);
                            Vector3_delete__double(_610);
                            Vector3_delete__double(_626);
                            Vector3_delete__double(correction);
                        }
                        Vector3_delete__double(_137);
                        Vector3_delete__double(_149);
                        Vector3_delete__double(r_MINUS_a);
                        Vector3_delete__double(r_MINUS_b);
                        Vector3_delete__double(rel_MINUS_v);
                        Vector3_delete__double(v_MINUS_at_MINUS_a);
                        Vector3_delete__double(v_MINUS_at_MINUS_b);
                    }
                    int _1000033 = Int__PLUS_(ci, 1);
                    ci = _1000033;  // Int = Int
                    int _75 = Array_length__Contact(contacts);
                    bool _1000011 = Int__LT_(ci, _75);
                    _1000009 = _1000011;
                }
            }
        }
    }
}

Array__Array__Uint64* SpatialGrid_buckets__Uint64(SpatialGrid__Uint64* p) { return (&(p->buckets)); }

double* SpatialGrid_cell_MINUS_size__Uint64(SpatialGrid__Uint64* p) { return (&(p->cell_MINUS_size)); }

int* SpatialGrid_cols__Uint64(SpatialGrid__Uint64* p) { return (&(p->cols)); }

CellRange SpatialGrid_get_MINUS_range__Uint64(SpatialGrid__Uint64* grid, AABB* aabb) {
    CellRange _81;
    /* let */ {
        Vector3__double* _9 = AABB_min(aabb);
        Vector3__double* amin = _9;
        Vector3__double* _13 = AABB_max(aabb);
        Vector3__double* amax = _13;
        Vector3__double _18 = SpatialGrid_pos_MINUS_to_MINUS_coord__Uint64(grid, amin);
        Vector3__double cmin = _18;
        Vector3__double _23 = SpatialGrid_pos_MINUS_to_MINUS_coord__Uint64(grid, amax);
        Vector3__double cmax = _23;
        Vector3__double* _31 = &cmin; // ref
        double* _32 = Vector3_x__double(_31);
        double _33 = Double_copy(_32);
        int _34 = Double_to_MINUS_int(_33);
        Vector3__double* _40 = &cmax; // ref
        double* _41 = Vector3_x__double(_40);
        double _42 = Double_copy(_41);
        int _43 = Double_to_MINUS_int(_42);
        Vector3__double* _49 = &cmin; // ref
        double* _50 = Vector3_y__double(_49);
        double _51 = Double_copy(_50);
        int _52 = Double_to_MINUS_int(_51);
        Vector3__double* _58 = &cmax; // ref
        double* _59 = Vector3_y__double(_58);
        double _60 = Double_copy(_59);
        int _61 = Double_to_MINUS_int(_60);
        Vector3__double* _67 = &cmin; // ref
        double* _68 = Vector3_z__double(_67);
        double _69 = Double_copy(_68);
        int _70 = Double_to_MINUS_int(_69);
        Vector3__double* _76 = &cmax; // ref
        double* _77 = Vector3_z__double(_76);
        double _78 = Double_copy(_77);
        int _79 = Double_to_MINUS_int(_78);
        CellRange _80 = CellRange_init(_34, _43, _52, _61, _70, _79);
        _81 = _80;
        Vector3_delete__double(cmax);
        Vector3_delete__double(cmin);
    }
    return _81;
}

int* SpatialGrid_layers__Uint64(SpatialGrid__Uint64* p) { return (&(p->layers)); }

Vector3__double* SpatialGrid_origin__Uint64(SpatialGrid__Uint64* p) { return (&(p->origin)); }

Array__Uint64* SpatialGrid_overflow__Uint64(SpatialGrid__Uint64* p) { return (&(p->overflow)); }

Vector3__double SpatialGrid_pos_MINUS_to_MINUS_coord__Uint64(SpatialGrid__Uint64* grid, Vector3__double* p) {
    Vector3__double _70;
    /* let */ {
        double* _10 = SpatialGrid_cell_MINUS_size__Uint64(grid);
        double _11 = Double_copy(_10);
        double cs = _11;
        Vector3__double* _15 = SpatialGrid_origin__Uint64(grid);
        Vector3__double* o = _15;
        double* _24 = Vector3_x__double(p);
        double _25 = Double_copy(_24);
        double* _29 = Vector3_x__double(o);
        double _30 = Double_copy(_29);
        double _31 = Double__MINUS_(_25, _30);
        double _33 = Double__DIV_(_31, cs);
        double _34 = Double_floor(_33);
        double* _41 = Vector3_y__double(p);
        double _42 = Double_copy(_41);
        double* _46 = Vector3_y__double(o);
        double _47 = Double_copy(_46);
        double _48 = Double__MINUS_(_42, _47);
        double _50 = Double__DIV_(_48, cs);
        double _51 = Double_floor(_50);
        double* _58 = Vector3_z__double(p);
        double _59 = Double_copy(_58);
        double* _63 = Vector3_z__double(o);
        double _64 = Double_copy(_63);
        double _65 = Double__MINUS_(_59, _64);
        double _67 = Double__DIV_(_65, cs);
        double _68 = Double_floor(_67);
        Vector3__double _69 = Vector3_init__double(_34, _51, _68);
        _70 = _69;
    }
    return _70;
}

Array__Uint64 SpatialGrid_query_MINUS_unique__Uint64(SpatialGrid__Uint64* grid, AABB* aabb) {
    Array__Uint64 _9 = SpatialGrid_query__Uint64(grid, aabb);
    Array__Uint64 _10 = SpatialGrid_unique_MINUS_results__Uint64(_9);
    return _10;
}

Array__Uint64 SpatialGrid_query__Uint64(SpatialGrid__Uint64* grid, AABB* aabb) {
    Array__Uint64 _301;
    /* let */ {
        CellRange _10 = SpatialGrid_get_MINUS_range__Uint64(grid, aabb);
        CellRange r = _10;
        Array__Array__Uint64* _14 = SpatialGrid_buckets__Uint64(grid);
        Array__Array__Uint64* buckets = _14;
        int* _19 = SpatialGrid_cols__Uint64(grid);
        int _20 = Int_copy(_19);
        int cols = _20;
        int* _25 = SpatialGrid_rows__Uint64(grid);
        int _26 = Int_copy(_25);
        int rows = _26;
        int* _31 = SpatialGrid_layers__Uint64(grid);
        int _32 = Int_copy(_31);
        int layers = _32;
        Array__Uint64* _36 = SpatialGrid_overflow__Uint64(grid);
        Array__Uint64* ov = _36;
        Array _38 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Uint64) * 0) };
        Array__Uint64 results = _38;
        CellRange* _44 = &r; // ref
        int* _45 = CellRange_min_MINUS_z(_44);
        int _46 = Int_copy(_45);
        int z = _46;
        CellRange* _53 = &r; // ref
        int* _54 = CellRange_max_MINUS_z(_53);
        int _55 = Int_copy(_54);
        int _56 = Int_inc(_55);
        int z_MINUS_end = _56;
        CellRange* _62 = &r; // ref
        int* _63 = CellRange_min_MINUS_y(_62);
        int _64 = Int_copy(_63);
        int y_MINUS_start = _64;
        CellRange* _71 = &r; // ref
        int* _72 = CellRange_max_MINUS_y(_71);
        int _73 = Int_copy(_72);
        int _74 = Int_inc(_73);
        int y_MINUS_end = _74;
        CellRange* _80 = &r; // ref
        int* _81 = CellRange_min_MINUS_x(_80);
        int _82 = Int_copy(_81);
        int x_MINUS_start = _82;
        CellRange* _89 = &r; // ref
        int* _90 = CellRange_max_MINUS_x(_89);
        int _91 = Int_copy(_90);
        int _92 = Int_inc(_91);
        int x_MINUS_end = _92;
        bool _99 = Int__LT_(z, z_MINUS_end);
        bool _265 = _99;
        while (_265) {
            /* let */ {
                int y = y_MINUS_start;
                bool _109 = Int__LT_(y, y_MINUS_end);
                bool _256 = _109;
                while (_256) {
                    /* let */ {
                        int x = x_MINUS_start;
                        bool _119 = Int__LT_(x, x_MINUS_end);
                        bool _247 = _119;
                        while (_247) {
                            bool _180;
                            bool _159;
                            bool _138;
                            bool _128 = _GT__EQ___int(x, 0);
                            if (_128) {
                                bool _133 = Int__LT_(x, cols);
                                bool _134 = _133;
                                _138 = _134;
                            } else {
                                bool _137 = false;
                                _138 = _137;
                            }
                            if (_138) {
                                bool _154;
                                bool _144 = _GT__EQ___int(y, 0);
                                if (_144) {
                                    bool _149 = Int__LT_(y, rows);
                                    bool _150 = _149;
                                    _154 = _150;
                                } else {
                                    bool _153 = false;
                                    _154 = _153;
                                }
                                bool _155 = _154;
                                _159 = _155;
                            } else {
                                bool _158 = false;
                                _159 = _158;
                            }
                            if (_159) {
                                bool _175;
                                bool _165 = _GT__EQ___int(z, 0);
                                if (_165) {
                                    bool _170 = Int__LT_(z, layers);
                                    bool _171 = _170;
                                    _175 = _171;
                                } else {
                                    bool _174 = false;
                                    _175 = _174;
                                }
                                bool _176 = _175;
                                _180 = _176;
                            } else {
                                bool _179 = false;
                                _180 = _179;
                            }
                            if (_180) {
                                /* let */ {
                                    int _195 = Int__MUL_(rows, z);
                                    int _196 = Int__PLUS_(y, _195);
                                    int _197 = Int__MUL_(cols, _196);
                                    int _198 = Int__PLUS_(x, _197);
                                    Array__Uint64* _199 = Array_unsafe_MINUS_nth__Array__Uint64(buckets, _198);
                                    Array__Uint64* bucket = _199;
                                    /* let */ {
                                        int i = 0;
                                        int _210 = Array_length__Uint64(bucket);
                                        bool _1000034 = Int__LT_(i, _210);
                                        bool _1000032 = _1000034;
                                        while (_1000032) {
                                            Array__Uint64* _216 = &results; // ref
                                            Uint64* _221 = Array_unsafe_MINUS_nth__Uint64(bucket, i);
                                            Uint64 _222 = Uint64_copy(_221);
                                            Array_push_MINUS_back_BANG___Uint64(_216, _222);
                                            int _1000039 = Int__PLUS_(i, 1);
                                            i = _1000039;  // Int = Int
                                            int _210 = Array_length__Uint64(bucket);
                                            bool _1000034 = Int__LT_(i, _210);
                                            _1000032 = _1000034;
                                        }
                                    }
                                }
                            } else {
                                /* () */
                            }
                            int _244 = Int_inc(x);
                            x = _244;  // Int = Int
                            bool _119 = Int__LT_(x, x_MINUS_end);
                            _247 = _119;
                        }
                    }
                    int _253 = Int_inc(y);
                    y = _253;  // Int = Int
                    bool _109 = Int__LT_(y, y_MINUS_end);
                    _256 = _109;
                }
            }
            int _262 = Int_inc(z);
            z = _262;  // Int = Int
            bool _99 = Int__LT_(z, z_MINUS_end);
            _265 = _99;
        }
        /* let */ {
            int i = 0;
            int _275 = Array_length__Uint64(ov);
            bool _1000048 = Int__LT_(i, _275);
            bool _1000046 = _1000048;
            while (_1000046) {
                Array__Uint64* _281 = &results; // ref
                Uint64* _286 = Array_unsafe_MINUS_nth__Uint64(ov, i);
                Uint64 _287 = Uint64_copy(_286);
                Array_push_MINUS_back_BANG___Uint64(_281, _287);
                int _1000053 = Int__PLUS_(i, 1);
                i = _1000053;  // Int = Int
                int _275 = Array_length__Uint64(ov);
                bool _1000048 = Int__LT_(i, _275);
                _1000046 = _1000048;
            }
        }
        Array__Uint64 _300 = results;
        _301 = _300;
        CellRange_delete(r);
    }
    return _301;
}

int* SpatialGrid_rows__Uint64(SpatialGrid__Uint64* p) { return (&(p->rows)); }

Array__Uint64 SpatialGrid_unique_MINUS_results__Uint64(Array__Uint64 ids) {
    Array__Uint64 _66;
    /* let */ {
        Array _6 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Uint64) * 0) };
        Array__Uint64 res = _6;
        /* let */ {
            int i = 0;
            Array__Uint64* _19 = &ids; // ref
            int _20 = Array_length__Uint64(_19);
            bool _1000008 = Int__LT_(i, _20);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    Array__Uint64* _28 = &ids; // ref
                    Uint64* _30 = Array_unsafe_MINUS_nth__Uint64(_28, i);
                    Uint64* id = _30;
                    Array__Uint64* _36 = &res; // ref
                    bool _38 = Array_contains_QMARK___Uint64(_36, id);
                    if (_38) {
                        /* () */
                    } else {
                        Array__Uint64* _46 = &res; // ref
                        Uint64 _49 = Uint64_copy(id);
                        Array_push_MINUS_back_BANG___Uint64(_46, _49);
                    }
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                Array__Uint64* _19 = &ids; // ref
                int _20 = Array_length__Uint64(_19);
                bool _1000008 = Int__LT_(i, _20);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _65 = res;
        _66 = _65;
    }
    Array_delete__Uint64(ids);
    return _66;
}

Vector3__double* Sphere_center(Sphere* p) { return (&(p->center)); }

Sphere Sphere_copy(Sphere* pRef) {
    Sphere copy = *pRef;
    copy.center = Vector3_copy__double(&(pRef->center));
    /* Ignore non-managed member 'radius' : Double */
    return copy;
}

void Sphere_delete(Sphere p) {
    Vector3_delete__double(p.center);
    /* Ignore non-managed member 'radius' : Double */
}

Sphere Sphere_init(Vector3__double center, double radius) {
    Sphere instance;
    instance.center = center;
    instance.radius = radius;
    return instance;
}

String Sphere_prn(Sphere *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Sphere");
  temp = Vector3_prn__double(&p->center); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Sphere");
  temp = Vector3_prn__double(&p->center);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

double* Sphere_radius(Sphere* p) { return (&(p->radius)); }

Sphere Sphere_set_MINUS_center(Sphere p, Vector3__double newValue) {
    Vector3_delete__double(p.center);
    p.center = newValue;
    return p;
}


void Sphere_set_MINUS_center_BANG_(Sphere* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->center);
    pRef->center = newValue;
}


Sphere Sphere_set_MINUS_radius(Sphere p, double newValue) {
    /* Ignore non-managed member 'radius' : Double */
    p.radius = newValue;
    return p;
}


void Sphere_set_MINUS_radius_BANG_(Sphere* pRef, double newValue) {
    /* Ignore non-managed member 'radius' : Double */
    pRef->radius = newValue;
}


String Sphere_str(Sphere *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Sphere");
  temp = Vector3_prn__double(&p->center); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Sphere");
  temp = Vector3_prn__double(&p->center);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->radius);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Sphere Sphere_update_MINUS_center(Sphere p, Lambda *updater) {
    p.center = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.center) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.center);
    return p;
}


Sphere Sphere_update_MINUS_radius(Sphere p, Lambda *updater) {
    p.radius = (*updater).env ? ((Fn__LambdaEnv_double_double)(*updater).callback)((*updater).env, p.radius) : ((Fn__double_double)(*updater).callback)(p.radius);
    return p;
}


uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c) {
    uint8_t _13 = tolower(c);
    return _13;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c) {
    uint8_t _13 = toupper(c);
    return _13;
}

bool String__Lambda_words_14_env(String* s) {
    bool _12 = String_empty_QMARK_(s);
    bool _13 = not(_12);
    return _13;
}

bool String_allocated_QMARK_(String* s) {
    CChar* _8 = String_cstr(s);
    bool _9 = null_QMARK___CChar(_8);
    bool _10 = not(_9);
    return _10;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_ascii_MINUS_to_MINUS_lower(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_lower_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_ascii_MINUS_to_MINUS_upper(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_upper_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_chomp(String* s) {
    static String _5 = "\\r$";
    String *_5_ref = &_5;
    static String _8 = "\\n$";
    String *_8_ref = &_8;
    static String _10 = "";
    String *_10_ref = &_10;
    String _12 = Pattern_substitute(_8_ref, s, _10_ref, 1);
    String* _13 = &_12; // ref
    static String _14 = "";
    String *_14_ref = &_14;
    String _16 = Pattern_substitute(_5_ref, _13, _14_ref, 1);
    String_delete(_12);
    return _16;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

String String_concat(Array__String* strings) {
    String _70;
    /* let */ {
        int j = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        int _15 = String_sum_MINUS_length(strings);
        String _17 = String_allocate(_15, 32/*' '*/);
        String result = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _35 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _35;
                    int _39 = String_length(str);
                    int len = _39;
                    String* _45 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_45, j, str);
                    int _54 = Int__PLUS_(j, len);
                    j = _54;  // Int = Int
                }
                int _1000016 = Int__PLUS_(i, 1);
                i = _1000016;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _69 = result;
        _70 = _69;
    }
    return _70;
}

bool String_contains_MINUS_string_QMARK_(String* s, String* needle) {
    int _9 = String_index_MINUS_of_MINUS_string(s, needle);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

bool String_contains_QMARK_(String* s, Char c) {
    int _9 = String_index_MINUS_of(s, c);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

int String_count_MINUS_char(String* s, Char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_length(s);
            bool _1000008 = Int__LT_(i, _19);
            bool _1000006 = _1000008;
            while (_1000006) {
                Char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                int _19 = String_length(s);
                bool _1000008 = Int__LT_(i, _19);
                _1000006 = _1000008;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_length(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    bool _38;
    /* let */ {
        int _9 = String_length(s);
        int ls = _9;
        int _13 = String_length(sub);
        int lsub = _13;
        bool _37;
        bool _19 = _GT__EQ___int(ls, lsub);
        if (_19) {
            int _29 = Int__MINUS_(ls, lsub);
            String _30 = String_suffix(s, _29);
            String* _31 = &_30; // ref
            bool _32 = String__EQ_(sub, _31);
            bool _33 = _32;
            String_delete(_30);
            _37 = _33;
        } else {
            bool _36 = false;
            _37 = _36;
        }
        _38 = _37;
    }
    return _38;
}

int String_hash(String* k) {
    int _50;
    /* let */ {
        int h = 5381;
        /* let */ {
            int x = 0;
            int _18 = String_length(k);
            bool _1000008 = Int__LT_(x, _18);
            bool _1000006 = _1000008;
            while (_1000006) {
                int _27 = Int__MUL_(h, 33);
                Char _32 = String_char_MINUS_at(k, x);
                int _33 = Char_to_MINUS_int(_32);
                int _34 = Int__PLUS_(_27, _33);
                h = _34;  // Int = Int
                int _1000014 = Int__PLUS_(x, 1);
                x = _1000014;  // Int = Int
                int _18 = String_length(k);
                bool _1000008 = Int__LT_(x, _18);
                _1000006 = _1000008;
            }
        }
        int _48 = Int_abs(h);
        int _49 = _48;
        _50 = _49;
    }
    return _50;
}

Char String_head(String* s) {
    Char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

int String_index_MINUS_of(String* s, Char c) {
    Array _9 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_9.data)[0] = c;
    Array__Char* _10 = &_9; // ref
    int _12 = String_index_MINUS_of_MINUS_any_MINUS_from(s, _10, -1);
    Array_delete__Char(_9);
    return _12;
}

int String_index_MINUS_of_MINUS_from(String* s, Char c, int i) {
    Array _10 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_10.data)[0] = c;
    Array__Char* _11 = &_10; // ref
    int _13 = String_index_MINUS_of_MINUS_any_MINUS_from(s, _11, i);
    Array_delete__Char(_10);
    return _13;
}

String String_join(String* sep, Array__String* strings) {
    String _116;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int num_MINUS_seps = _19;
        int _23 = String_length(sep);
        int sep_MINUS_length = _23;
        int _28 = Int__MUL_(num_MINUS_seps, sep_MINUS_length);
        int seps_MINUS_size = _28;
        int _35 = String_sum_MINUS_length(strings);
        int _36 = Int__PLUS_(seps_MINUS_size, _35);
        String _38 = String_allocate(_36, 32/*' '*/);
        String result = _38;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _56 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _56;
                    int _60 = String_length(str);
                    int len = _60;
                    bool _67 = Int__GT_(i, 0);
                    if (_67) {
                        String* _72 = &result; // ref
                        String_string_MINUS_set_MINUS_at_BANG_(_72, j, sep);
                        int _81 = Int__PLUS_(j, sep_MINUS_length);
                        j = _81;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _91 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_91, j, str);
                    int _100 = Int__PLUS_(j, len);
                    j = _100;  // Int = Int
                }
                int _1000020 = Int__PLUS_(i, 1);
                i = _1000020;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _115 = result;
        _116 = _115;
    }
    return _116;
}

String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings) {
    String _107;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int sep_MINUS_length = _19;
        int _26 = String_sum_MINUS_length(strings);
        int _27 = Int__PLUS_(sep_MINUS_length, _26);
        String _29 = String_allocate(_27, 32/*' '*/);
        String result = _29;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _47 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _47;
                    int _51 = String_length(str);
                    int len = _51;
                    bool _58 = Int__GT_(i, 0);
                    if (_58) {
                        String* _63 = &result; // ref
                        String_string_MINUS_set_BANG_(_63, j, sep);
                        int _72 = Int__PLUS_(j, 1);
                        j = _72;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _82 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_82, j, str);
                    int _91 = Int__PLUS_(j, len);
                    j = _91;  // Int = Int
                }
                int _1000020 = Int__PLUS_(i, 1);
                i = _1000020;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _106 = result;
        _107 = _106;
    }
    return _107;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_8.data)[0] = '\n';
    Array__Char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__Char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _26 = &pad; // ref
        Array__Char _27 = Array_replicate__Char(x, _26);
        Array__Char* _28 = &_27; // ref
        String _29 = String_from_MINUS_chars(_28);
        String* _30 = &_29; // ref
        String _32 = String_append(_30, s);
        _33 = _32;
        Array_delete__Char(_27);
        String_delete(_29);
    }
    return _33;
}

String String_pad_MINUS_right(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _27 = &pad; // ref
        Array__Char _28 = Array_replicate__Char(x, _27);
        Array__Char* _29 = &_28; // ref
        String _30 = String_from_MINUS_chars(_29);
        String* _31 = &_30; // ref
        String _32 = String_append(s, _31);
        _33 = _32;
        Array_delete__Char(_28);
        String_delete(_30);
    }
    return _33;
}

String String_prefix(String* s, int a) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_prefix__Array__Char(_12, a);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

String String_random_MINUS_sized(int n) {
    Lambda _9 = { .callback = (void*)Char_random, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Char.random (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Char _11 = Array_repeat__Char(n, _10);
    Array__Char* _12 = &_11; // ref
    String _13 = String_from_MINUS_chars(_12);
    Array_delete__Char(_11);
    return _13;
}

String String_repeat(int n, String* inpt) {
    String _52;
    /* let */ {
        int _9 = String_length(inpt);
        int l = _9;
        int _15 = Int__MUL_(n, l);
        String _17 = String_allocate(_15, 48/*'0'*/);
        String str = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                String* _33 = &str; // ref
                int _37 = Int__MUL_(i, l);
                String_string_MINUS_set_MINUS_at_BANG_(_33, _37, inpt);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        String _51 = str;
        _52 = _51;
    }
    return _52;
}

String String_reverse(String* s) {
    Array__Char _9 = String_chars(s);
    Array__Char _10 = Array_reverse__Char(_9);
    Array__Char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__Char(_10);
    return _12;
}

String String_slice(String* s, int a, int b) {
    Array__Char _12 = String_chars(s);
    Array__Char* _13 = &_12; // ref
    Array__Char _16 = Array_slice__Char(_13, a, b);
    Array__Char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__Char(_12);
    Array_delete__Char(_16);
    return _18;
}

Array__String String_split_MINUS_by(String* s, Array__Char* separators) {
    Array__String _62;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String result = _7;
        int start = 0;
        int _15 = String_index_MINUS_of_MINUS_any_MINUS_from(s, separators, -1);
        int idx = _15;
        bool _22 = _DIV__EQ___int(idx, -1);
        bool _50 = _22;
        while (_50) {
            String _32 = String_byte_MINUS_slice(s, start, idx);
            Array__String _33 = Array_push_MINUS_back__String(result, _32);
            result = _33;  // (Array String) = (Array String)
            int _39 = Int_inc(idx);
            start = _39;  // Int = Int
            int _47 = String_index_MINUS_of_MINUS_any_MINUS_from(s, separators, idx);
            idx = _47;  // Int = Int
            bool _22 = _DIV__EQ___int(idx, -1);
            _50 = _22;
        }
        int _58 = String_length(s);
        String _59 = String_byte_MINUS_slice(s, start, _58);
        Array__String _60 = Array_push_MINUS_back__String(result, _59);
        Array__String _61 = _60;
        _62 = _61;
    }
    return _62;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    bool _33;
    /* let */ {
        int _9 = String_length(sub);
        int ls = _9;
        bool _32;
        int _15 = String_length(s);
        bool _17 = _GT__EQ___int(_15, ls);
        if (_17) {
            String _25 = String_prefix(s, ls);
            String* _26 = &_25; // ref
            bool _27 = String__EQ_(sub, _26);
            bool _28 = _27;
            String_delete(_25);
            _32 = _28;
        } else {
            bool _31 = false;
            _32 = _31;
        }
        _33 = _32;
    }
    return _33;
}

String String_suffix(String* s, int b) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_suffix__Char(_12, b);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

int String_sum_MINUS_length(Array__String* strings) {
    int _47;
    /* let */ {
        int sum = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                String* _31 = Array_unsafe_MINUS_nth__String(strings, i);
                int _32 = String_length(_31);
                int _33 = Int__PLUS_(sum, _32);
                sum = _33;  // Int = Int
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        int _46 = sum;
        _47 = _46;
    }
    return _47;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_words_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array _22 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(Char) * 3) };
    ((Char*)_22.data)[0] = '\t';
    ((Char*)_22.data)[1] = 32/*' '*/;
    ((Char*)_22.data)[2] = '\n';
    Array__Char* _23 = &_22; // ref
    Array__String _24 = String_split_MINUS_by(s, _23);
    Array__String _25 = Array_endo_MINUS_filter__String(_15, _24);
    Array_delete__Char(_22);
    Function_delete__String_MUL__bool(_14);
    return _25;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__LT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__LT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__GT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__GT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

String StringCopy_prn(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_prn(_10);
    String_delete(_9);
    return _11;
}

String StringCopy_str(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_str(_10);
    String_delete(_9);
    return _11;
}

String System_error_MINUS_text() {
    String _5 = System_strerror(errno);
    return _5;
}

void System_exit__void(int code) { exit(code); }
String System_strerror(int error_MINUS_no) {
    CChar* _7 = strerror(error_MINUS_no);
    String _8 = String_from_MINUS_cstr(_7);
    return _8;
}

TestState Test_State_copy(TestState* pRef) {
    TestState copy = *pRef;
    /* Ignore non-managed member 'passed' : Int */
    /* Ignore non-managed member 'failed' : Int */
    return copy;
}

void Test_State_delete(TestState p) {
    /* Ignore non-managed member 'passed' : Int */
    /* Ignore non-managed member 'failed' : Int */
}

int* Test_State_failed(TestState* p) { return (&(p->failed)); }

TestState Test_State_init(int passed, int failed) {
    TestState instance;
    instance.passed = passed;
    instance.failed = failed;
    return instance;
}

int* Test_State_passed(TestState* p) { return (&(p->passed)); }

String Test_State_prn(TestState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Test.State");
  temp = Int_prn(p->passed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Test.State");
  temp = Int_prn(p->passed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TestState Test_State_set_MINUS_failed(TestState p, int newValue) {
    /* Ignore non-managed member 'failed' : Int */
    p.failed = newValue;
    return p;
}


void Test_State_set_MINUS_failed_BANG_(TestState* pRef, int newValue) {
    /* Ignore non-managed member 'failed' : Int */
    pRef->failed = newValue;
}


TestState Test_State_set_MINUS_passed(TestState p, int newValue) {
    /* Ignore non-managed member 'passed' : Int */
    p.passed = newValue;
    return p;
}


void Test_State_set_MINUS_passed_BANG_(TestState* pRef, int newValue) {
    /* Ignore non-managed member 'passed' : Int */
    pRef->passed = newValue;
}


String Test_State_str(TestState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Test.State");
  temp = Int_prn(p->passed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Test.State");
  temp = Int_prn(p->passed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TestState Test_State_update_MINUS_failed(TestState p, Lambda *updater) {
    p.failed = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.failed) : ((Fn__int_int)(*updater).callback)(p.failed);
    return p;
}


TestState Test_State_update_MINUS_passed(TestState p, Lambda *updater) {
    p.passed = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.passed) : ((Fn__int_int)(*updater).callback)(p.passed);
    return p;
}


TestState Test_assert_MINUS_equal__bool_String(TestState* state, bool x, bool y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Bool__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Bool.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__bool_bool_String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_true__String(TestState* state, bool x, String* descr) {
    TestState _11 = Test_assert_MINUS_equal__bool_String(state, true, x, descr);
    return _11;
}

TestState Test_display_MINUS_test__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _1000008 = StringCopy_str(_23);
        String* _1000007 = &_1000008; // ref
        String _32 = String_copy(descr);
        String _1000012 = StringCopy_str(_32);
        String* _1000011 = &_1000012; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _1000014 = StringCopy_str(_39);
        String* _1000013 = &_1000014; // ref
        String _1000010 = String_append(_1000011, _1000013);
        String* _1000009 = &_1000010; // ref
        String _1000006 = String_append(_1000007, _1000009);
        String* _1000005 = &_1000006; // ref
        String _1000004 = String_copy(_1000005);
        String* _47 = &_1000004; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_1000004);
        String_delete(_1000006);
        String_delete(_1000008);
        String_delete(_1000010);
        String_delete(_1000012);
        String_delete(_1000014);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _1000020 = StringCopy_str(_72);
        String* _1000019 = &_1000020; // ref
        String _81 = String_copy(descr);
        String _1000024 = StringCopy_str(_81);
        String* _1000023 = &_1000024; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _1000026 = StringCopy_str(_88);
        String* _1000025 = &_1000026; // ref
        String _1000022 = String_append(_1000023, _1000025);
        String* _1000021 = &_1000022; // ref
        String _1000018 = String_append(_1000019, _1000021);
        String* _1000017 = &_1000018; // ref
        String _1000016 = String_copy(_1000017);
        String* _96 = &_1000016; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _1000031 = StringCopy_str(_107);
        String* _1000030 = &_1000031; // ref
        String _116 = String_copy(what);
        String _1000035 = StringCopy_str(_116);
        String* _1000034 = &_1000035; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _1000037 = StringCopy_str(_123);
        String* _1000036 = &_1000037; // ref
        String _1000033 = String_append(_1000034, _1000036);
        String* _1000032 = &_1000033; // ref
        String _1000029 = String_append(_1000030, _1000032);
        String* _1000028 = &_1000029; // ref
        String _1000027 = String_copy(_1000028);
        String* _131 = &_1000027; // ref
        IO_print(_131);
        String _137 = Bool_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _1000042 = StringCopy_str(_149);
        String* _1000041 = &_1000042; // ref
        String _158 = Bool_str(actual);
        String _1000046 = StringCopy_str(_158);
        String* _1000045 = &_1000046; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _1000048 = StringCopy_str(_165);
        String* _1000047 = &_1000048; // ref
        String _1000044 = String_append(_1000045, _1000047);
        String* _1000043 = &_1000044; // ref
        String _1000040 = String_append(_1000041, _1000043);
        String* _1000039 = &_1000040; // ref
        String _1000038 = String_copy(_1000039);
        String* _173 = &_1000038; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_1000016);
        String_delete(_1000018);
        String_delete(_1000020);
        String_delete(_1000022);
        String_delete(_1000024);
        String_delete(_1000026);
        String_delete(_1000027);
        String_delete(_1000029);
        String_delete(_1000031);
        String_delete(_1000033);
        String_delete(_1000035);
        String_delete(_1000037);
        String_delete(_1000038);
        String_delete(_1000040);
        String_delete(_1000042);
        String_delete(_1000044);
        String_delete(_1000046);
        String_delete(_1000048);
        String_delete(_137);
        _188 = _187;
    }
    return _188;
}

void Test_handle_MINUS_signal__void(int x) {
    System_exit__void(x);
}

TestState Test_handler__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, bool, bool))op.callback)(op.env, expected, actual) : ((bool(*)(bool, bool))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__bool_bool_String_String(state, expected, actual, descr, what, _18);
    Function_delete__bool_bool_bool(op);
    return _19;
}

void Test_print_MINUS_test_MINUS_results(TestState* state) {
    /* let */ {
        int* _9 = Test_State_passed(state);
        int _10 = Int_copy(_9);
        int passed = _10;
        int* _15 = Test_State_failed(state);
        int _16 = Int_copy(_15);
        int failed = _16;
        static String _20 = "Results:";
        String *_20_ref = &_20;
        IO_println(_20_ref);
        int _27 = Int__PLUS_(passed, failed);
        bool _29 = Int__GT_(_27, 0);
        if (_29) {
            ColorId _33 = Color_Id_Green();
            IO_color(_33);
            bool _39 = Int__GT_(passed, 0);
            if (_39) {
                static String _44 = "\t|";
                String *_44_ref = &_44;
                String _49 = String_allocate(passed, 61/*'='*/);
                String* _50 = &_49; // ref
                String _51 = String_append(_44_ref, _50);
                String* _52 = &_51; // ref
                IO_print(_52);
                String_delete(_49);
                String_delete(_51);
            } else {
                /* () */
            }
            bool _63 = Int__EQ_(failed, 0);
            if (_63) {
                static String _66 = "|";
                String *_66_ref = &_66;
                IO_print(_66_ref);
            } else {
                /* () */
            }
            ColorId _75 = Color_Id_Red();
            IO_color(_75);
            bool _81 = Int__EQ_(passed, 0);
            if (_81) {
                static String _84 = "\t|";
                String *_84_ref = &_84;
                IO_print(_84_ref);
            } else {
                /* () */
            }
            bool _95 = Int__GT_(failed, 0);
            if (_95) {
                String _104 = String_allocate(failed, 61/*'='*/);
                String* _105 = &_104; // ref
                static String _106 = "|";
                String *_106_ref = &_106;
                String _107 = String_append(_105, _106_ref);
                String* _108 = &_107; // ref
                IO_print(_108);
                String_delete(_104);
                String_delete(_107);
            } else {
                /* () */
            }
            static String _116 = "";
            String *_116_ref = &_116;
            IO_println(_116_ref);
        } else {
            /* () */
        }
        ColorId _125 = Color_Id_Green();
        IO_color(_125);
        static String _128 = "\tPassed: ";
        String *_128_ref = &_128;
        IO_print(_128_ref);
        String _134 = Int_str(passed);
        String* _135 = &_134; // ref
        IO_print(_135);
        ColorId _139 = Color_Id_Red();
        IO_color(_139);
        static String _142 = "\tFailed: ";
        String *_142_ref = &_142;
        IO_print(_142_ref);
        String _148 = Int_str(failed);
        String* _149 = &_148; // ref
        IO_println(_149);
        ColorId _153 = Color_Id_Reset();
        IO_color(_153);
        String_delete(_134);
        String_delete(_148);
    }
}

TestState Test_reset(TestState state) {
    TestState _8 = Test_State_set_MINUS_passed(state, 0);
    TestState _10 = Test_State_set_MINUS_failed(_8, 0);
    return _10;
}

int Test_run_MINUS_child(Lambda x) {
    int _39;
    /* let */ {
        int _7 = fork();
        int pid = _7;
        int status = 0;
        int _38;
        bool _15 = Int__EQ_(pid, 0);
        if (_15) {
            x.env ? ((void(*)(LambdaEnv))x.callback)(x.env) : ((void(*)())x.callback)();
            int _20 = 0;
            _38 = _20;
        } else {
            /* let */ {
                int* _28 = &status; // ref
                int* _29 = Pointer_address__int(_28);
                int _30 = wait(_29);
                int _ = _30;
                /* () */
            }
            int _36 = WEXITSTATUS(status);
            int _37 = _36;
            _38 = _37;
        }
        _39 = _38;
    }
    Function_delete__void(x);
    return _39;
}

int Test_run_MINUS_child_MINUS_signals(Lambda x) {
    int _59;
    /* let */ {
        int _7 = fork();
        int pid = _7;
        int status = 0;
        int _58;
        bool _15 = Int__EQ_(pid, 0);
        if (_15) {
            Lambda _19 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGABRT, _19.callback);
            Lambda _23 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGFPE, _23.callback);
            Lambda _27 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGILL, _27.callback);
            Lambda _31 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGSEGV, _31.callback);
            Lambda _35 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGTERM, _35.callback);
            x.env ? ((void(*)(LambdaEnv))x.callback)(x.env) : ((void(*)())x.callback)();
            int _40 = 0;
            _58 = _40;
        } else {
            /* let */ {
                int* _48 = &status; // ref
                int* _49 = Pointer_address__int(_48);
                int _50 = wait(_49);
                int _ = _50;
                /* () */
            }
            int _56 = WEXITSTATUS(status);
            int _57 = _56;
            _58 = _57;
        }
        _59 = _58;
    }
    Function_delete__void(x);
    return _59;
}

Transform Transform_copy(Transform* pRef) {
    Transform copy = *pRef;
    copy.position = Vector3_copy__double(&(pRef->position));
    copy.rotation = Quaternion_copy(&(pRef->rotation));
    copy.scale = Vector3_copy__double(&(pRef->scale));
    return copy;
}

void Transform_delete(Transform p) {
    Vector3_delete__double(p.position);
    Quaternion_delete(p.rotation);
    Vector3_delete__double(p.scale);
}

Vector3__double Transform_forward(Transform* t) {
    TransformMat4 _8 = Transform_to_MINUS_matrix(t);
    TransformMat4* _9 = &_8; // ref
    Vector3__double _11 = TransformMat4_get_MINUS_column(_9, 2);
    TransformMat4_delete(_8);
    return _11;
}

Vector3__double Transform_forward_MINUS_quat(Quaternion* q) {
    Vector3__double _12 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double* _13 = &_12; // ref
    Vector3__double _20 = Vector3_init__double(1.0, 1.0, 1.0);
    Vector3__double* _21 = &_20; // ref
    TransformMat4 _22 = TransformMat4_from_MINUS_trs(_13, q, _21);
    TransformMat4* _23 = &_22; // ref
    Vector3__double _25 = TransformMat4_get_MINUS_column(_23, 2);
    TransformMat4_delete(_22);
    Vector3_delete__double(_12);
    Vector3_delete__double(_20);
    return _25;
}

Transform Transform_identity() {
    Vector3__double _8 = Vector3_init__double(0.0, 0.0, 0.0);
    Quaternion _10 = Quaternion_identity();
    Vector3__double _15 = Vector3_init__double(1.0, 1.0, 1.0);
    Transform _16 = Transform_init(_8, _10, _15);
    return _16;
}

Transform Transform_init(Vector3__double position, Quaternion rotation, Vector3__double scale) {
    Transform instance;
    instance.position = position;
    instance.rotation = rotation;
    instance.scale = scale;
    return instance;
}

Transform Transform_new(Vector3__double p, Quaternion r, Vector3__double s) {
    Transform _10 = Transform_init(p, r, s);
    return _10;
}

Vector3__double* Transform_position(Transform* p) { return (&(p->position)); }

String Transform_prn(Transform *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Transform");
  temp = Vector3_prn__double(&p->position); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->scale); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Transform");
  temp = Vector3_prn__double(&p->position);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->scale);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Vector3__double Transform_right(Transform* t) {
    TransformMat4 _8 = Transform_to_MINUS_matrix(t);
    TransformMat4* _9 = &_8; // ref
    Vector3__double _11 = TransformMat4_get_MINUS_column(_9, 0);
    TransformMat4_delete(_8);
    return _11;
}

Vector3__double Transform_right_MINUS_quat(Quaternion* q) {
    Vector3__double _12 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double* _13 = &_12; // ref
    Vector3__double _20 = Vector3_init__double(1.0, 1.0, 1.0);
    Vector3__double* _21 = &_20; // ref
    TransformMat4 _22 = TransformMat4_from_MINUS_trs(_13, q, _21);
    TransformMat4* _23 = &_22; // ref
    Vector3__double _25 = TransformMat4_get_MINUS_column(_23, 0);
    TransformMat4_delete(_22);
    Vector3_delete__double(_12);
    Vector3_delete__double(_20);
    return _25;
}

Quaternion* Transform_rotation(Transform* p) { return (&(p->rotation)); }

Vector3__double* Transform_scale(Transform* p) { return (&(p->scale)); }

Transform Transform_set_MINUS_position(Transform p, Vector3__double newValue) {
    Vector3_delete__double(p.position);
    p.position = newValue;
    return p;
}


void Transform_set_MINUS_position_BANG_(Transform* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->position);
    pRef->position = newValue;
}


Transform Transform_set_MINUS_rotation(Transform p, Quaternion newValue) {
    Quaternion_delete(p.rotation);
    p.rotation = newValue;
    return p;
}


void Transform_set_MINUS_rotation_BANG_(Transform* pRef, Quaternion newValue) {
    Quaternion_delete(pRef->rotation);
    pRef->rotation = newValue;
}


Transform Transform_set_MINUS_rotation_MINUS_val_BANG_(Transform t, Quaternion r) {
    Transform _8 = Transform_set_MINUS_rotation(t, r);
    return _8;
}

Transform Transform_set_MINUS_scale(Transform p, Vector3__double newValue) {
    Vector3_delete__double(p.scale);
    p.scale = newValue;
    return p;
}


void Transform_set_MINUS_scale_BANG_(Transform* pRef, Vector3__double newValue) {
    Vector3_delete__double(pRef->scale);
    pRef->scale = newValue;
}


String Transform_str(Transform *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Transform");
  temp = Vector3_prn__double(&p->position); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->scale); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Transform");
  temp = Vector3_prn__double(&p->position);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Quaternion_prn(&p->rotation);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Vector3_prn__double(&p->scale);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TransformMat4 Transform_to_MINUS_inverse_MINUS_matrix(Transform* t) {
    TransformMat4 _671;
    /* let */ {
        Vector3__double* _8 = Transform_position(t);
        Vector3__double* p = _8;
        Quaternion* _12 = Transform_rotation(t);
        Quaternion* q = _12;
        Vector3__double* _16 = Transform_scale(t);
        Vector3__double* s = _16;
        double eps = 1.0e-4;
        double _56;
        /* let */ {
            double* _25 = Vector3_x__double(s);
            double _26 = Double_copy(_25);
            double val = _26;
            double _55;
            double _32 = Double_abs(val);
            bool _34 = Double__LT_(_32, eps);
            if (_34) {
                double _50;
                bool _40 = Double__LT_(val, 0.0);
                if (_40) {
                    double _45 = Double__MINUS_(0.0, eps);
                    double _46 = _45;
                    _50 = _46;
                } else {
                    double _49 = eps;
                    _50 = _49;
                }
                double _51 = _50;
                _55 = _51;
            } else {
                double _54 = val;
                _55 = _54;
            }
            _56 = _55;
        }
        double sx = _56;
        double _94;
        /* let */ {
            double* _63 = Vector3_y__double(s);
            double _64 = Double_copy(_63);
            double val = _64;
            double _93;
            double _70 = Double_abs(val);
            bool _72 = Double__LT_(_70, eps);
            if (_72) {
                double _88;
                bool _78 = Double__LT_(val, 0.0);
                if (_78) {
                    double _83 = Double__MINUS_(0.0, eps);
                    double _84 = _83;
                    _88 = _84;
                } else {
                    double _87 = eps;
                    _88 = _87;
                }
                double _89 = _88;
                _93 = _89;
            } else {
                double _92 = val;
                _93 = _92;
            }
            _94 = _93;
        }
        double sy = _94;
        double _132;
        /* let */ {
            double* _101 = Vector3_z__double(s);
            double _102 = Double_copy(_101);
            double val = _102;
            double _131;
            double _108 = Double_abs(val);
            bool _110 = Double__LT_(_108, eps);
            if (_110) {
                double _126;
                bool _116 = Double__LT_(val, 0.0);
                if (_116) {
                    double _121 = Double__MINUS_(0.0, eps);
                    double _122 = _121;
                    _126 = _122;
                } else {
                    double _125 = eps;
                    _126 = _125;
                }
                double _127 = _126;
                _131 = _127;
            } else {
                double _130 = val;
                _131 = _130;
            }
            _132 = _131;
        }
        double sz = _132;
        double _138 = Double__DIV_(1.0, sx);
        double _142 = Double__DIV_(1.0, sy);
        double _146 = Double__DIV_(1.0, sz);
        Vector3__double _147 = Vector3_init__double(_138, _142, _146);
        Vector3__double inv_MINUS_s = _147;
        Quaternion _151 = Quaternion_conjugate(q);
        Quaternion inv_MINUS_q = _151;
        static float _157_lit = 0.0f;
        float* _157 = &_157_lit; // ref
        Array__float _158 = Array_replicate__float(16, _157);
        Array__float m = _158;
        Quaternion* _164 = &inv_MINUS_q; // ref
        double* _165 = Quaternion_x(_164);
        double _166 = Double_copy(_165);
        double qx = _166;
        Quaternion* _172 = &inv_MINUS_q; // ref
        double* _173 = Quaternion_y(_172);
        double _174 = Double_copy(_173);
        double qy = _174;
        Quaternion* _180 = &inv_MINUS_q; // ref
        double* _181 = Quaternion_z(_180);
        double _182 = Double_copy(_181);
        double qz = _182;
        Quaternion* _188 = &inv_MINUS_q; // ref
        double* _189 = Quaternion_w(_188);
        double _190 = Double_copy(_189);
        double qw = _190;
        Vector3__double* _199 = &inv_MINUS_s; // ref
        double* _200 = Vector3_x__double(_199);
        double _201 = Double_copy(_200);
        float _202 = Double_to_MINUS_float(_201);
        float _203 = _202; // From the 'the' function.
        float isx = _203;
        Vector3__double* _212 = &inv_MINUS_s; // ref
        double* _213 = Vector3_y__double(_212);
        double _214 = Double_copy(_213);
        float _215 = Double_to_MINUS_float(_214);
        float _216 = _215; // From the 'the' function.
        float isy = _216;
        Vector3__double* _225 = &inv_MINUS_s; // ref
        double* _226 = Vector3_z__double(_225);
        double _227 = Double_copy(_226);
        float _228 = Double_to_MINUS_float(_227);
        float _229 = _228; // From the 'the' function.
        float isz = _229;
        Array__float* _235 = &m; // ref
        double _250 = Double__MUL_(qy, qy);
        double _254 = Double__MUL_(qz, qz);
        double _255 = Double__PLUS_(_250, _254);
        double _256 = Double__MUL_(2.0, _255);
        double _257 = Double__MINUS_(1.0, _256);
        float _258 = Double_to_MINUS_float(_257);
        float _259 = _258; // From the 'the' function.
        float _260 = Float__MUL_(isx, _259);
        Array_aset_BANG___float(_235, 0, _260);
        Array__float* _265 = &m; // ref
        double _278 = Double__MUL_(qx, qy);
        double _282 = Double__MUL_(qz, qw);
        double _283 = Double__PLUS_(_278, _282);
        double _284 = Double__MUL_(2.0, _283);
        float _285 = Double_to_MINUS_float(_284);
        float _286 = _285; // From the 'the' function.
        float _287 = Float__MUL_(isx, _286);
        Array_aset_BANG___float(_265, 4, _287);
        Array__float* _292 = &m; // ref
        double _305 = Double__MUL_(qx, qz);
        double _309 = Double__MUL_(qy, qw);
        double _310 = Double__MINUS_(_305, _309);
        double _311 = Double__MUL_(2.0, _310);
        float _312 = Double_to_MINUS_float(_311);
        float _313 = _312; // From the 'the' function.
        float _314 = Float__MUL_(isx, _313);
        Array_aset_BANG___float(_292, 8, _314);
        Array__float* _319 = &m; // ref
        double _332 = Double__MUL_(qx, qy);
        double _336 = Double__MUL_(qz, qw);
        double _337 = Double__MINUS_(_332, _336);
        double _338 = Double__MUL_(2.0, _337);
        float _339 = Double_to_MINUS_float(_338);
        float _340 = _339; // From the 'the' function.
        float _341 = Float__MUL_(isy, _340);
        Array_aset_BANG___float(_319, 1, _341);
        Array__float* _346 = &m; // ref
        double _361 = Double__MUL_(qx, qx);
        double _365 = Double__MUL_(qz, qz);
        double _366 = Double__PLUS_(_361, _365);
        double _367 = Double__MUL_(2.0, _366);
        double _368 = Double__MINUS_(1.0, _367);
        float _369 = Double_to_MINUS_float(_368);
        float _370 = _369; // From the 'the' function.
        float _371 = Float__MUL_(isy, _370);
        Array_aset_BANG___float(_346, 5, _371);
        Array__float* _376 = &m; // ref
        double _389 = Double__MUL_(qy, qz);
        double _393 = Double__MUL_(qx, qw);
        double _394 = Double__PLUS_(_389, _393);
        double _395 = Double__MUL_(2.0, _394);
        float _396 = Double_to_MINUS_float(_395);
        float _397 = _396; // From the 'the' function.
        float _398 = Float__MUL_(isy, _397);
        Array_aset_BANG___float(_376, 9, _398);
        Array__float* _403 = &m; // ref
        double _416 = Double__MUL_(qx, qz);
        double _420 = Double__MUL_(qy, qw);
        double _421 = Double__PLUS_(_416, _420);
        double _422 = Double__MUL_(2.0, _421);
        float _423 = Double_to_MINUS_float(_422);
        float _424 = _423; // From the 'the' function.
        float _425 = Float__MUL_(isz, _424);
        Array_aset_BANG___float(_403, 2, _425);
        Array__float* _430 = &m; // ref
        double _443 = Double__MUL_(qy, qz);
        double _447 = Double__MUL_(qx, qw);
        double _448 = Double__MINUS_(_443, _447);
        double _449 = Double__MUL_(2.0, _448);
        float _450 = Double_to_MINUS_float(_449);
        float _451 = _450; // From the 'the' function.
        float _452 = Float__MUL_(isz, _451);
        Array_aset_BANG___float(_430, 6, _452);
        Array__float* _457 = &m; // ref
        double _472 = Double__MUL_(qx, qx);
        double _476 = Double__MUL_(qy, qy);
        double _477 = Double__PLUS_(_472, _476);
        double _478 = Double__MUL_(2.0, _477);
        double _479 = Double__MINUS_(1.0, _478);
        float _480 = Double_to_MINUS_float(_479);
        float _481 = _480; // From the 'the' function.
        float _482 = Float__MUL_(isz, _481);
        Array_aset_BANG___float(_457, 10, _482);
        /* let */ {
            double* _492 = Vector3_x__double(p);
            double _493 = Double_copy(_492);
            float _494 = Double_to_MINUS_float(_493);
            float _495 = _494; // From the 'the' function.
            float rx = _495;
            double* _503 = Vector3_y__double(p);
            double _504 = Double_copy(_503);
            float _505 = Double_to_MINUS_float(_504);
            float _506 = _505; // From the 'the' function.
            float ry = _506;
            double* _514 = Vector3_z__double(p);
            double _515 = Double_copy(_514);
            float _516 = Double_to_MINUS_float(_515);
            float _517 = _516; // From the 'the' function.
            float rz = _517;
            Array__float* _523 = &m; // ref
            Array__float* _533 = &m; // ref
            float* _535 = Array_unsafe_MINUS_nth__float(_533, 0);
            float _536 = Float_copy(_535);
            float _538 = Float__MUL_(_536, rx);
            Array__float* _545 = &m; // ref
            float* _547 = Array_unsafe_MINUS_nth__float(_545, 4);
            float _548 = Float_copy(_547);
            float _550 = Float__MUL_(_548, ry);
            Array__float* _556 = &m; // ref
            float* _558 = Array_unsafe_MINUS_nth__float(_556, 8);
            float _559 = Float_copy(_558);
            float _561 = Float__MUL_(_559, rz);
            float _562 = Float__PLUS_(_550, _561);
            float _563 = Float__PLUS_(_538, _562);
            float _564 = Float__MINUS_(0.0f, _563);
            Array_aset_BANG___float(_523, 12, _564);
            Array__float* _569 = &m; // ref
            Array__float* _579 = &m; // ref
            float* _581 = Array_unsafe_MINUS_nth__float(_579, 1);
            float _582 = Float_copy(_581);
            float _584 = Float__MUL_(_582, rx);
            Array__float* _591 = &m; // ref
            float* _593 = Array_unsafe_MINUS_nth__float(_591, 5);
            float _594 = Float_copy(_593);
            float _596 = Float__MUL_(_594, ry);
            Array__float* _602 = &m; // ref
            float* _604 = Array_unsafe_MINUS_nth__float(_602, 9);
            float _605 = Float_copy(_604);
            float _607 = Float__MUL_(_605, rz);
            float _608 = Float__PLUS_(_596, _607);
            float _609 = Float__PLUS_(_584, _608);
            float _610 = Float__MINUS_(0.0f, _609);
            Array_aset_BANG___float(_569, 13, _610);
            Array__float* _615 = &m; // ref
            Array__float* _625 = &m; // ref
            float* _627 = Array_unsafe_MINUS_nth__float(_625, 2);
            float _628 = Float_copy(_627);
            float _630 = Float__MUL_(_628, rx);
            Array__float* _637 = &m; // ref
            float* _639 = Array_unsafe_MINUS_nth__float(_637, 6);
            float _640 = Float_copy(_639);
            float _642 = Float__MUL_(_640, ry);
            Array__float* _648 = &m; // ref
            float* _650 = Array_unsafe_MINUS_nth__float(_648, 10);
            float _651 = Float_copy(_650);
            float _653 = Float__MUL_(_651, rz);
            float _654 = Float__PLUS_(_642, _653);
            float _655 = Float__PLUS_(_630, _654);
            float _656 = Float__MINUS_(0.0f, _655);
            Array_aset_BANG___float(_615, 14, _656);
            Array__float* _661 = &m; // ref
            Array_aset_BANG___float(_661, 15, 1.0f);
        }
        TransformMat4 _669 = TransformMat4_init(m);
        TransformMat4 _670 = _669;
        _671 = _670;
        Quaternion_delete(inv_MINUS_q);
        Vector3_delete__double(inv_MINUS_s);
    }
    return _671;
}

TransformMat4 Transform_to_MINUS_matrix(Transform* t) {
    Vector3__double* _7 = Transform_position(t);
    Quaternion* _10 = Transform_rotation(t);
    Vector3__double* _13 = Transform_scale(t);
    TransformMat4 _14 = TransformMat4_from_MINUS_trs(_7, _10, _13);
    return _14;
}

Vector3__double Transform_up(Transform* t) {
    TransformMat4 _8 = Transform_to_MINUS_matrix(t);
    TransformMat4* _9 = &_8; // ref
    Vector3__double _11 = TransformMat4_get_MINUS_column(_9, 1);
    TransformMat4_delete(_8);
    return _11;
}

Vector3__double Transform_up_MINUS_quat(Quaternion* q) {
    Vector3__double _12 = Vector3_init__double(0.0, 0.0, 0.0);
    Vector3__double* _13 = &_12; // ref
    Vector3__double _20 = Vector3_init__double(1.0, 1.0, 1.0);
    Vector3__double* _21 = &_20; // ref
    TransformMat4 _22 = TransformMat4_from_MINUS_trs(_13, q, _21);
    TransformMat4* _23 = &_22; // ref
    Vector3__double _25 = TransformMat4_get_MINUS_column(_23, 1);
    TransformMat4_delete(_22);
    Vector3_delete__double(_12);
    Vector3_delete__double(_20);
    return _25;
}

Transform Transform_update_MINUS_position(Transform p, Lambda *updater) {
    p.position = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.position) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.position);
    return p;
}


Transform Transform_update_MINUS_rotation(Transform p, Lambda *updater) {
    p.rotation = (*updater).env ? ((Fn__LambdaEnv_Quaternion_Quaternion)(*updater).callback)((*updater).env, p.rotation) : ((Fn__Quaternion_Quaternion)(*updater).callback)(p.rotation);
    return p;
}


Transform Transform_update_MINUS_scale(Transform p, Lambda *updater) {
    p.scale = (*updater).env ? ((Fn__LambdaEnv_Vector3__double_Vector3__double)(*updater).callback)((*updater).env, p.scale) : ((Fn__Vector3__double_Vector3__double)(*updater).callback)(p.scale);
    return p;
}


TransformMat4 TransformMat4_copy(TransformMat4* pRef) {
    TransformMat4 copy = *pRef;
    copy.data = Array_copy__float(&(pRef->data));
    return copy;
}

Array__float* TransformMat4_data(TransformMat4* p) { return (&(p->data)); }

void TransformMat4_delete(TransformMat4 p) {
    Array_delete__float(p.data);
}

TransformMat4 TransformMat4_from_MINUS_trs(Vector3__double* pos, Quaternion* rot, Vector3__double* scale) {
    TransformMat4 _390;
    /* let */ {
        static float _12_lit = 0.0f;
        float* _12 = &_12_lit; // ref
        Array__float _13 = Array_replicate__float(16, _12);
        Array__float m = _13;
        double* _18 = Quaternion_x(rot);
        double _19 = Double_copy(_18);
        double qx = _19;
        double* _24 = Quaternion_y(rot);
        double _25 = Double_copy(_24);
        double qy = _25;
        double* _30 = Quaternion_z(rot);
        double _31 = Double_copy(_30);
        double qz = _31;
        double* _36 = Quaternion_w(rot);
        double _37 = Double_copy(_36);
        double qw = _37;
        double* _45 = Vector3_x__double(scale);
        double _46 = Double_copy(_45);
        float _47 = Double_to_MINUS_float(_46);
        float _48 = _47; // From the 'the' function.
        float sx = _48;
        double* _56 = Vector3_y__double(scale);
        double _57 = Double_copy(_56);
        float _58 = Double_to_MINUS_float(_57);
        float _59 = _58; // From the 'the' function.
        float sy = _59;
        double* _67 = Vector3_z__double(scale);
        double _68 = Double_copy(_67);
        float _69 = Double_to_MINUS_float(_68);
        float _70 = _69; // From the 'the' function.
        float sz = _70;
        double* _78 = Vector3_x__double(pos);
        double _79 = Double_copy(_78);
        float _80 = Double_to_MINUS_float(_79);
        float _81 = _80; // From the 'the' function.
        float tx = _81;
        double* _89 = Vector3_y__double(pos);
        double _90 = Double_copy(_89);
        float _91 = Double_to_MINUS_float(_90);
        float _92 = _91; // From the 'the' function.
        float ty = _92;
        double* _100 = Vector3_z__double(pos);
        double _101 = Double_copy(_100);
        float _102 = Double_to_MINUS_float(_101);
        float _103 = _102; // From the 'the' function.
        float tz = _103;
        Array__float* _109 = &m; // ref
        double _124 = Double__MUL_(qy, qy);
        double _128 = Double__MUL_(qz, qz);
        double _129 = Double__PLUS_(_124, _128);
        double _130 = Double__MUL_(2.0, _129);
        double _131 = Double__MINUS_(1.0, _130);
        float _132 = Double_to_MINUS_float(_131);
        float _133 = _132; // From the 'the' function.
        float _134 = Float__MUL_(sx, _133);
        Array_aset_BANG___float(_109, 0, _134);
        Array__float* _139 = &m; // ref
        double _152 = Double__MUL_(qx, qy);
        double _156 = Double__MUL_(qz, qw);
        double _157 = Double__PLUS_(_152, _156);
        double _158 = Double__MUL_(2.0, _157);
        float _159 = Double_to_MINUS_float(_158);
        float _160 = _159; // From the 'the' function.
        float _161 = Float__MUL_(sx, _160);
        Array_aset_BANG___float(_139, 1, _161);
        Array__float* _166 = &m; // ref
        double _179 = Double__MUL_(qx, qz);
        double _183 = Double__MUL_(qy, qw);
        double _184 = Double__MINUS_(_179, _183);
        double _185 = Double__MUL_(2.0, _184);
        float _186 = Double_to_MINUS_float(_185);
        float _187 = _186; // From the 'the' function.
        float _188 = Float__MUL_(sx, _187);
        Array_aset_BANG___float(_166, 2, _188);
        Array__float* _193 = &m; // ref
        double _206 = Double__MUL_(qx, qy);
        double _210 = Double__MUL_(qz, qw);
        double _211 = Double__MINUS_(_206, _210);
        double _212 = Double__MUL_(2.0, _211);
        float _213 = Double_to_MINUS_float(_212);
        float _214 = _213; // From the 'the' function.
        float _215 = Float__MUL_(sy, _214);
        Array_aset_BANG___float(_193, 4, _215);
        Array__float* _220 = &m; // ref
        double _235 = Double__MUL_(qx, qx);
        double _239 = Double__MUL_(qz, qz);
        double _240 = Double__PLUS_(_235, _239);
        double _241 = Double__MUL_(2.0, _240);
        double _242 = Double__MINUS_(1.0, _241);
        float _243 = Double_to_MINUS_float(_242);
        float _244 = _243; // From the 'the' function.
        float _245 = Float__MUL_(sy, _244);
        Array_aset_BANG___float(_220, 5, _245);
        Array__float* _250 = &m; // ref
        double _263 = Double__MUL_(qy, qz);
        double _267 = Double__MUL_(qx, qw);
        double _268 = Double__PLUS_(_263, _267);
        double _269 = Double__MUL_(2.0, _268);
        float _270 = Double_to_MINUS_float(_269);
        float _271 = _270; // From the 'the' function.
        float _272 = Float__MUL_(sy, _271);
        Array_aset_BANG___float(_250, 6, _272);
        Array__float* _277 = &m; // ref
        double _290 = Double__MUL_(qx, qz);
        double _294 = Double__MUL_(qy, qw);
        double _295 = Double__PLUS_(_290, _294);
        double _296 = Double__MUL_(2.0, _295);
        float _297 = Double_to_MINUS_float(_296);
        float _298 = _297; // From the 'the' function.
        float _299 = Float__MUL_(sz, _298);
        Array_aset_BANG___float(_277, 8, _299);
        Array__float* _304 = &m; // ref
        double _317 = Double__MUL_(qy, qz);
        double _321 = Double__MUL_(qx, qw);
        double _322 = Double__MINUS_(_317, _321);
        double _323 = Double__MUL_(2.0, _322);
        float _324 = Double_to_MINUS_float(_323);
        float _325 = _324; // From the 'the' function.
        float _326 = Float__MUL_(sz, _325);
        Array_aset_BANG___float(_304, 9, _326);
        Array__float* _331 = &m; // ref
        double _346 = Double__MUL_(qx, qx);
        double _350 = Double__MUL_(qy, qy);
        double _351 = Double__PLUS_(_346, _350);
        double _352 = Double__MUL_(2.0, _351);
        double _353 = Double__MINUS_(1.0, _352);
        float _354 = Double_to_MINUS_float(_353);
        float _355 = _354; // From the 'the' function.
        float _356 = Float__MUL_(sz, _355);
        Array_aset_BANG___float(_331, 10, _356);
        Array__float* _361 = &m; // ref
        Array_aset_BANG___float(_361, 12, tx);
        Array__float* _368 = &m; // ref
        Array_aset_BANG___float(_368, 13, ty);
        Array__float* _375 = &m; // ref
        Array_aset_BANG___float(_375, 14, tz);
        Array__float* _382 = &m; // ref
        Array_aset_BANG___float(_382, 15, 1.0f);
        TransformMat4 _388 = TransformMat4_init(m);
        TransformMat4 _389 = _388;
        _390 = _389;
    }
    return _390;
}

Vector3__double TransformMat4_get_MINUS_column(TransformMat4* m, int col) {
    Vector3__double _57;
    /* let */ {
        Array__float* _9 = TransformMat4_data(m);
        Array__float* d = _9;
        int _14 = Int__MUL_(col, 4);
        int idx = _14;
        float* _24 = Array_unsafe_MINUS_nth__float(d, idx);
        float _25 = Float_copy(_24);
        double _26 = Double_from_MINUS_float(_25);
        double _27 = _26; // From the 'the' function.
        int _37 = Int__PLUS_(idx, 1);
        float* _38 = Array_unsafe_MINUS_nth__float(d, _37);
        float _39 = Float_copy(_38);
        double _40 = Double_from_MINUS_float(_39);
        double _41 = _40; // From the 'the' function.
        int _51 = Int__PLUS_(idx, 2);
        float* _52 = Array_unsafe_MINUS_nth__float(d, _51);
        float _53 = Float_copy(_52);
        double _54 = Double_from_MINUS_float(_53);
        double _55 = _54; // From the 'the' function.
        Vector3__double _56 = Vector3_init__double(_27, _41, _55);
        _57 = _56;
    }
    return _57;
}

TransformMat4 TransformMat4_identity() {
    TransformMat4 _45;
    /* let */ {
        static float _9_lit = 0.0f;
        float* _9 = &_9_lit; // ref
        Array__float _10 = Array_replicate__float(16, _9);
        Array__float m = _10;
        Array__float* _16 = &m; // ref
        Array_aset_BANG___float(_16, 0, 1.0f);
        Array__float* _23 = &m; // ref
        Array_aset_BANG___float(_23, 5, 1.0f);
        Array__float* _30 = &m; // ref
        Array_aset_BANG___float(_30, 10, 1.0f);
        Array__float* _37 = &m; // ref
        Array_aset_BANG___float(_37, 15, 1.0f);
        TransformMat4 _43 = TransformMat4_init(m);
        TransformMat4 _44 = _43;
        _45 = _44;
    }
    return _45;
}

TransformMat4 TransformMat4_init(Array__float data) {
    TransformMat4 instance;
    instance.data = data;
    return instance;
}

String TransformMat4_prn(TransformMat4 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "TransformMat4");
  temp = Array_prn__float(&p->data); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "TransformMat4");
  temp = Array_prn__float(&p->data);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TransformMat4 TransformMat4_set_MINUS_data(TransformMat4 p, Array__float newValue) {
    Array_delete__float(p.data);
    p.data = newValue;
    return p;
}


void TransformMat4_set_MINUS_data_BANG_(TransformMat4* pRef, Array__float newValue) {
    Array_delete__float(pRef->data);
    pRef->data = newValue;
}


String TransformMat4_str(TransformMat4 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "TransformMat4");
  temp = Array_prn__float(&p->data); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "TransformMat4");
  temp = Array_prn__float(&p->data);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TransformMat4 TransformMat4_update_MINUS_data(TransformMat4 p, Lambda *updater) {
    p.data = (*updater).env ? ((Fn__LambdaEnv_Array__float_Array__float)(*updater).callback)((*updater).env, p.data) : ((Fn__Array__float_Array__float)(*updater).callback)(p.data);
    return p;
}


Handle__void* Trigger_a(Trigger* p) { return (&(p->a)); }

Handle__void* Trigger_b(Trigger* p) { return (&(p->b)); }

Trigger Trigger_copy(Trigger* pRef) {
    Trigger copy = *pRef;
    copy.a = Handle_copy__void(&(pRef->a));
    copy.b = Handle_copy__void(&(pRef->b));
    return copy;
}

void Trigger_delete(Trigger p) {
    Handle_delete__void(p.a);
    Handle_delete__void(p.b);
}

Trigger Trigger_init(Handle__void a, Handle__void b) {
    Trigger instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

String Trigger_prn(Trigger *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Trigger");
  temp = Handle_prn__void(&p->a); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Trigger");
  temp = Handle_prn__void(&p->a);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Trigger Trigger_set_MINUS_a(Trigger p, Handle__void newValue) {
    Handle_delete__void(p.a);
    p.a = newValue;
    return p;
}


void Trigger_set_MINUS_a_BANG_(Trigger* pRef, Handle__void newValue) {
    Handle_delete__void(pRef->a);
    pRef->a = newValue;
}


Trigger Trigger_set_MINUS_b(Trigger p, Handle__void newValue) {
    Handle_delete__void(p.b);
    p.b = newValue;
    return p;
}


void Trigger_set_MINUS_b_BANG_(Trigger* pRef, Handle__void newValue) {
    Handle_delete__void(pRef->b);
    pRef->b = newValue;
}


String Trigger_str(Trigger *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Trigger");
  temp = Handle_prn__void(&p->a); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Trigger");
  temp = Handle_prn__void(&p->a);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Handle_prn__void(&p->b);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Trigger Trigger_update_MINUS_a(Trigger p, Lambda *updater) {
    p.a = (*updater).env ? ((Fn__LambdaEnv_Handle__void_Handle__void)(*updater).callback)((*updater).env, p.a) : ((Fn__Handle__void_Handle__void)(*updater).callback)(p.a);
    return p;
}


Trigger Trigger_update_MINUS_b(Trigger p, Lambda *updater) {
    p.b = (*updater).env ? ((Fn__LambdaEnv_Handle__void_Handle__void)(*updater).callback)((*updater).env, p.b) : ((Fn__Handle__void_Handle__void)(*updater).callback)(p.b);
    return p;
}


Uint16 Uint16_blit(Uint16 x) {
    Uint16 _7 = x; // From the 'the' function.
    return _7;
}

int Uint16_hash(Uint16* k) {
    Uint16 _8 = Uint16_copy(k);
    Long _9 = Uint16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint16_prn(Uint16 a) {
    String _6 = Uint16_str(a);
    return _6;
}

Uint16 Uint16_zero() {
    Uint16 _5 = Uint16_from_MINUS_long(0l);
    return _5;
}

bool Uint16Extra__EQ_(Uint16* a, Uint16* b) {
    Uint16 _8 = Uint16_copy(a);
    Uint16 _11 = Uint16_copy(b);
    bool _12 = Uint16__EQ_(_8, _11);
    return _12;
}

String Uint16Extra_prn(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_prn(_7);
    return _8;
}

String Uint16Extra_str(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_str(_7);
    return _8;
}

Uint32 Uint32_blit(Uint32 x) {
    Uint32 _7 = x; // From the 'the' function.
    return _7;
}

int Uint32_hash(Uint32* k) {
    Uint32 _8 = Uint32_copy(k);
    Long _9 = Uint32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint32_prn(Uint32 a) {
    String _6 = Uint32_str(a);
    return _6;
}

Uint32 Uint32_zero() {
    Uint32 _5 = Uint32_from_MINUS_long(0l);
    return _5;
}

bool Uint32Extra__EQ_(Uint32* a, Uint32* b) {
    Uint32 _8 = Uint32_copy(a);
    Uint32 _11 = Uint32_copy(b);
    bool _12 = Uint32__EQ_(_8, _11);
    return _12;
}

String Uint32Extra_prn(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_prn(_7);
    return _8;
}

String Uint32Extra_str(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_str(_7);
    return _8;
}

Uint64 Uint64_blit(Uint64 x) {
    Uint64 _7 = x; // From the 'the' function.
    return _7;
}

int Uint64_hash(Uint64* k) {
    Uint64 _8 = Uint64_copy(k);
    Long _9 = Uint64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint64_prn(Uint64 a) {
    String _6 = Uint64_str(a);
    return _6;
}

Uint64 Uint64_zero() {
    Uint64 _5 = Uint64_from_MINUS_long(0l);
    return _5;
}

bool Uint64Extra__EQ_(Uint64* a, Uint64* b) {
    Uint64 _8 = Uint64_copy(a);
    Uint64 _11 = Uint64_copy(b);
    bool _12 = Uint64__EQ_(_8, _11);
    return _12;
}

String Uint64Extra_prn(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_prn(_7);
    return _8;
}

String Uint64Extra_str(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_str(_7);
    return _8;
}

Uint8 Uint8_blit(Uint8 x) {
    Uint8 _7 = x; // From the 'the' function.
    return _7;
}

int Uint8_hash(Uint8* k) {
    Uint8 _8 = Uint8_copy(k);
    Long _9 = Uint8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint8_prn(Uint8 a) {
    String _6 = Uint8_str(a);
    return _6;
}

Uint8 Uint8_zero() {
    Uint8 _5 = Uint8_from_MINUS_long(0l);
    return _5;
}

bool Uint8Extra__EQ_(Uint8* a, Uint8* b) {
    Uint8 _8 = Uint8_copy(a);
    Uint8 _11 = Uint8_copy(b);
    bool _12 = Uint8__EQ_(_8, _11);
    return _12;
}

String Uint8Extra_prn(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_prn(_7);
    return _8;
}

String Uint8Extra_str(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_str(_7);
    return _8;
}

bool Unit__EQ_() {
    return true;
}

void Unit_copy() {
    /* () */
}

String Unit_prn() {
    static String _5 = "()";
    String *_5_ref = &_5;
    String _6 = String_copy(_5_ref);
    return _6;
}

void Unit_zero() {
    /* () */
}

bool UnitRef__EQ_() {
    return true;
}

bool Vector2__Lambda_vapprox_19_env(bool i, bool v) {
    bool _18;
    if (i) {
        bool _14 = v;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

void Vector2_delete__bool(Vector2__bool p) {
    /* Ignore non-managed member 'x' : Bool */
    /* Ignore non-managed member 'y' : Bool */
}

bool Vector2_vreduce__bool_bool(Lambda f, bool i, Vector2__bool* v) {
    bool* _12 = Vector2_x__bool(v);
    bool _13 = Bool_copy(_12);
    bool _14 = f.env ? ((bool(*)(LambdaEnv, bool, bool))f.callback)(f.env, i, _13) : ((bool(*)(bool, bool))f.callback)(i, _13);
    bool* _18 = Vector2_y__bool(v);
    bool _19 = Bool_copy(_18);
    bool _20 = f.env ? ((bool(*)(LambdaEnv, bool, bool))f.callback)(f.env, _14, _19) : ((bool(*)(bool, bool))f.callback)(_14, _19);
    Function_delete__bool_bool_bool(f);
    return _20;
}

bool* Vector2_x__bool(Vector2__bool* p) { return (&(p->x)); }

bool* Vector2_y__bool(Vector2__bool* p) { return (&(p->y)); }

double Vector3__Lambda_div__double_13_env(Vector3__Lambda_div__double_13_env_ty* _env, double c) {
    double _12 = Double__DIV_(c, _env->n);
    return _12;
}

double Vector3__Lambda_mul__double_13_env(Vector3__Lambda_mul__double_13_env_ty* _env, double c) {
    double _12 = Double__MUL_(_env->n, c);
    return _12;
}

bool Vector3__Lambda_vapprox_19_env(bool i, bool v) {
    bool _18;
    if (i) {
        bool _14 = v;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Vector3__double Vector3_add__double(Vector3__double* a, Vector3__double* b) {
    Lambda _6 = { .callback = (void*)Double__PLUS_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.+ (LookupGlobal ExternalCode AFunction)
    Vector3__double _9 = Vector3_zip__double_double_double(_6, a, b);
    return _9;
}

Vector3__double Vector3_copy__double(Vector3__double* pRef) {
    Vector3__double copy = *pRef;
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
    return copy;
}

Vector3__double Vector3_cross__double(Vector3__double* a, Vector3__double* b) {
    double* _11 = Vector3_y__double(a);
    double _12 = Double_copy(_11);
    double* _16 = Vector3_z__double(b);
    double _17 = Double_copy(_16);
    double _18 = Double__MUL_(_12, _17);
    double* _23 = Vector3_z__double(a);
    double _24 = Double_copy(_23);
    double* _28 = Vector3_y__double(b);
    double _29 = Double_copy(_28);
    double _30 = Double__MUL_(_24, _29);
    double _31 = Double__MINUS_(_18, _30);
    double* _37 = Vector3_z__double(a);
    double _38 = Double_copy(_37);
    double* _42 = Vector3_x__double(b);
    double _43 = Double_copy(_42);
    double _44 = Double__MUL_(_38, _43);
    double* _49 = Vector3_x__double(a);
    double _50 = Double_copy(_49);
    double* _54 = Vector3_z__double(b);
    double _55 = Double_copy(_54);
    double _56 = Double__MUL_(_50, _55);
    double _57 = Double__MINUS_(_44, _56);
    double* _63 = Vector3_x__double(a);
    double _64 = Double_copy(_63);
    double* _68 = Vector3_y__double(b);
    double _69 = Double_copy(_68);
    double _70 = Double__MUL_(_64, _69);
    double* _75 = Vector3_y__double(a);
    double _76 = Double_copy(_75);
    double* _80 = Vector3_x__double(b);
    double _81 = Double_copy(_80);
    double _82 = Double__MUL_(_76, _81);
    double _83 = Double__MINUS_(_70, _82);
    Vector3__double _84 = Vector3_init__double(_31, _57, _83);
    return _84;
}

void Vector3_delete__bool(Vector3__bool p) {
    /* Ignore non-managed member 'x' : Bool */
    /* Ignore non-managed member 'y' : Bool */
    /* Ignore non-managed member 'z' : Bool */
}

void Vector3_delete__double(Vector3__double p) {
    /* Ignore non-managed member 'x' : Double */
    /* Ignore non-managed member 'y' : Double */
    /* Ignore non-managed member 'z' : Double */
}

double Vector3_dist__double(Vector3__double* a, Vector3__double* b) {
    double _17;
    /* let */ {
        Vector3__double _10 = Vector3_sub__double(b, a);
        Vector3__double s = _10;
        Vector3__double* _15 = &s; // ref
        double _16 = Vector3_mag__double(_15);
        _17 = _16;
        Vector3_delete__double(s);
    }
    return _17;
}

Vector3__double Vector3_div__double(Vector3__double* v, double n) {
    // This lambda captures 1 variables: n
    Vector3__Lambda_div__double_13_env_ty *_13_env = CARP_MALLOC(sizeof(Vector3__Lambda_div__double_13_env_ty));
    _13_env->n = n;
    Lambda _13 = {
      .callback = (void*)Vector3__Lambda_div__double_13_env,
      .env = _13_env,
      .delete = (void*)Vector3__Lambda_div__double_13_env_ty_delete,
      .copy = (void*)Vector3__Lambda_div__double_13_env_ty_copy
    };
    Vector3__double _15 = Vector3_map__double_double(_13, v);
    return _15;
}

double Vector3_dot__double(Vector3__double* a, Vector3__double* b) {
    Lambda _8 = { .callback = (void*)Double__MUL_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.* (LookupGlobal ExternalCode AFunction)
    Vector3__double _11 = Vector3_zip__double_double_double(_8, a, b);
    Vector3__double* _12 = &_11; // ref
    double _13 = Vector3_sum__double(_12);
    Vector3_delete__double(_11);
    return _13;
}

Vector3__double Vector3_init__double(double x, double y, double z) {
    Vector3__double instance;
    instance.x = x;
    instance.y = y;
    instance.z = z;
    return instance;
}

double Vector3_mag_MINUS_sq__double(Vector3__double* o) {
    double _7 = Vector3_dot__double(o, o);
    return _7;
}

double Vector3_mag__double(Vector3__double* o) {
    double _7 = Vector3_mag_MINUS_sq__double(o);
    double _8 = Double_sqrt(_7);
    return _8;
}

Vector3__double Vector3_map__double_double(Lambda f, Vector3__double* v) {
    double* _10 = Vector3_x__double(v);
    double _11 = Double_copy(_10);
    double _12 = f.env ? ((double(*)(LambdaEnv, double))f.callback)(f.env, _11) : ((double(*)(double))f.callback)(_11);
    double* _17 = Vector3_y__double(v);
    double _18 = Double_copy(_17);
    double _19 = f.env ? ((double(*)(LambdaEnv, double))f.callback)(f.env, _18) : ((double(*)(double))f.callback)(_18);
    double* _24 = Vector3_z__double(v);
    double _25 = Double_copy(_24);
    double _26 = f.env ? ((double(*)(LambdaEnv, double))f.callback)(f.env, _25) : ((double(*)(double))f.callback)(_25);
    Vector3__double _27 = Vector3_init__double(_12, _19, _26);
    Function_delete__double_double(f);
    return _27;
}

Vector3__double Vector3_mul__double(Vector3__double* v, double n) {
    // This lambda captures 1 variables: n
    Vector3__Lambda_mul__double_13_env_ty *_13_env = CARP_MALLOC(sizeof(Vector3__Lambda_mul__double_13_env_ty));
    _13_env->n = n;
    Lambda _13 = {
      .callback = (void*)Vector3__Lambda_mul__double_13_env,
      .env = _13_env,
      .delete = (void*)Vector3__Lambda_mul__double_13_env_ty_delete,
      .copy = (void*)Vector3__Lambda_mul__double_13_env_ty_copy
    };
    Vector3__double _15 = Vector3_map__double_double(_13, v);
    return _15;
}

Vector3__double Vector3_normalize__double(Vector3__double* o) {
    Vector3__double _28;
    /* let */ {
        double _8 = Vector3_mag__double(o);
        double m = _8;
        Vector3__double _27;
        double _14 = Double_zero();
        bool _15 = Double__EQ_(m, _14);
        if (_15) {
            Vector3__double _19 = Vector3_copy__double(o);
            Vector3__double _20 = _19;
            _27 = _20;
        } else {
            Vector3__double _25 = Vector3_div__double(o, m);
            Vector3__double _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

String Vector3_prn__double(Vector3__double *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "(Vector3 Double)");
  temp = Double_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Vector3");
  temp = Double_prn(p->x);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->y);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Double_prn(p->z);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Vector3__double Vector3_sub__double(Vector3__double* a, Vector3__double* b) {
    Lambda _6 = { .callback = (void*)Double__MINUS_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.- (LookupGlobal ExternalCode AFunction)
    Vector3__double _9 = Vector3_zip__double_double_double(_6, a, b);
    return _9;
}

double Vector3_sum__double(Vector3__double* o) {
    Lambda _5 = { .callback = (void*)Double__PLUS_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Double.+ (LookupGlobal ExternalCode AFunction)
    double _7 = Double_zero();
    double _9 = Vector3_vreduce__double_double(_5, _7, o);
    return _9;
}

bool Vector3_vreduce__bool_bool(Lambda f, bool i, Vector3__bool* v) {
    bool* _13 = Vector3_x__bool(v);
    bool _14 = Bool_copy(_13);
    bool _15 = f.env ? ((bool(*)(LambdaEnv, bool, bool))f.callback)(f.env, i, _14) : ((bool(*)(bool, bool))f.callback)(i, _14);
    bool* _19 = Vector3_y__bool(v);
    bool _20 = Bool_copy(_19);
    bool _21 = f.env ? ((bool(*)(LambdaEnv, bool, bool))f.callback)(f.env, _15, _20) : ((bool(*)(bool, bool))f.callback)(_15, _20);
    bool* _25 = Vector3_z__bool(v);
    bool _26 = Bool_copy(_25);
    bool _27 = f.env ? ((bool(*)(LambdaEnv, bool, bool))f.callback)(f.env, _21, _26) : ((bool(*)(bool, bool))f.callback)(_21, _26);
    Function_delete__bool_bool_bool(f);
    return _27;
}

double Vector3_vreduce__double_double(Lambda f, double i, Vector3__double* v) {
    double* _13 = Vector3_x__double(v);
    double _14 = Double_copy(_13);
    double _15 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, i, _14) : ((double(*)(double, double))f.callback)(i, _14);
    double* _19 = Vector3_y__double(v);
    double _20 = Double_copy(_19);
    double _21 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, _15, _20) : ((double(*)(double, double))f.callback)(_15, _20);
    double* _25 = Vector3_z__double(v);
    double _26 = Double_copy(_25);
    double _27 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, _21, _26) : ((double(*)(double, double))f.callback)(_21, _26);
    Function_delete__double_double_double(f);
    return _27;
}

bool* Vector3_x__bool(Vector3__bool* p) { return (&(p->x)); }

double* Vector3_x__double(Vector3__double* p) { return (&(p->x)); }

bool* Vector3_y__bool(Vector3__bool* p) { return (&(p->y)); }

double* Vector3_y__double(Vector3__double* p) { return (&(p->y)); }

bool* Vector3_z__bool(Vector3__bool* p) { return (&(p->z)); }

double* Vector3_z__double(Vector3__double* p) { return (&(p->z)); }

Vector3__double Vector3_zip__double_double_double(Lambda f, Vector3__double* a, Vector3__double* b) {
    double* _11 = Vector3_x__double(a);
    double _12 = Double_copy(_11);
    double* _16 = Vector3_x__double(b);
    double _17 = Double_copy(_16);
    double _18 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, _12, _17) : ((double(*)(double, double))f.callback)(_12, _17);
    double* _23 = Vector3_y__double(a);
    double _24 = Double_copy(_23);
    double* _28 = Vector3_y__double(b);
    double _29 = Double_copy(_28);
    double _30 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, _24, _29) : ((double(*)(double, double))f.callback)(_24, _29);
    double* _35 = Vector3_z__double(a);
    double _36 = Double_copy(_35);
    double* _40 = Vector3_z__double(b);
    double _41 = Double_copy(_40);
    double _42 = f.env ? ((double(*)(LambdaEnv, double, double))f.callback)(f.env, _36, _41) : ((double(*)(double, double))f.callback)(_36, _41);
    Vector3__double _43 = Vector3_init__double(_18, _30, _42);
    Function_delete__double_double_double(f);
    return _43;
}

Vector3__Lambda_div__double_13_env_ty* Vector3__Lambda_div__double_13_env_ty_copy(Vector3__Lambda_div__double_13_env_ty* pRef) {
    Vector3__Lambda_div__double_13_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'n' : Double */
    return copy;
}

void Vector3__Lambda_div__double_13_env_ty_delete(Vector3__Lambda_div__double_13_env_ty* p) {
    /* Ignore non-managed member 'n' : Double */
}

Vector3__Lambda_mul__double_13_env_ty* Vector3__Lambda_mul__double_13_env_ty_copy(Vector3__Lambda_mul__double_13_env_ty* pRef) {
    Vector3__Lambda_mul__double_13_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'n' : Double */
    return copy;
}

void Vector3__Lambda_mul__double_13_env_ty_delete(Vector3__Lambda_mul__double_13_env_ty* p) {
    /* Ignore non-managed member 'n' : Double */
}

Volume Volume_Ball(Sphere member0) {
  Volume instance;
    instance.u.Ball.member0 = member0;
    instance._tag = Volume_Ball_tag;
    return instance;
}

Volume Volume_Box(AABB member0) {
  Volume instance;
    instance.u.Box.member0 = member0;
    instance._tag = Volume_Box_tag;
    return instance;
}

Volume Volume_Sdf(SDF member0) {
  Volume instance;
    instance.u.Sdf.member0 = member0;
    instance._tag = Volume_Sdf_tag;
    return instance;
}

Volume Volume_Surface(Plane member0) {
  Volume instance;
    instance.u.Surface.member0 = member0;
    instance._tag = Volume_Surface_tag;
    return instance;
}

Volume Volume_copy(Volume* pRef) {
    Volume copy = *pRef;
    if(pRef->_tag == Volume_Box_tag) {
    copy.u.Box.member0 = AABB_copy(&(pRef->u.Box.member0));
    }

    else if(pRef->_tag == Volume_Ball_tag) {
    copy.u.Ball.member0 = Sphere_copy(&(pRef->u.Ball.member0));
    }

    else if(pRef->_tag == Volume_Surface_tag) {
    copy.u.Surface.member0 = Plane_copy(&(pRef->u.Surface.member0));
    }

    else if(pRef->_tag == Volume_Sdf_tag) {
    copy.u.Sdf.member0 = SDF_copy(&(pRef->u.Sdf.member0));
    }

    return copy;
}

void Volume_delete(Volume p) {
  if(p._tag == Volume_Box_tag) {
    AABB_delete(p.u.Box.member0);
  }
  else if(p._tag == Volume_Ball_tag) {
    Sphere_delete(p.u.Ball.member0);
  }
  else if(p._tag == Volume_Surface_tag) {
    Plane_delete(p.u.Surface.member0);
  }
  else if(p._tag == Volume_Sdf_tag) {
    SDF_delete(p.u.Sdf.member0);
  }

}

int Volume_get_MINUS_tag(Volume *p) { return p->_tag; }
String Volume_prn(Volume *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == Volume_Box_tag) {
    size += snprintf(NULL, 0, "(%s ", "Box");
  temp = AABB_prn(&p->u.Box.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Volume_Ball_tag) {
    size += snprintf(NULL, 0, "(%s ", "Ball");
  temp = Sphere_prn(&p->u.Ball.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Volume_Surface_tag) {
    size += snprintf(NULL, 0, "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Volume_Sdf_tag) {
    size += snprintf(NULL, 0, "(%s ", "Sdf");
  temp = SDF_prn(&p->u.Sdf.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == Volume_Box_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Box");
  temp = AABB_prn(&p->u.Box.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Volume_Ball_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Ball");
  temp = Sphere_prn(&p->u.Ball.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Volume_Surface_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Volume_Sdf_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Sdf");
  temp = SDF_prn(&p->u.Sdf.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Volume_str(Volume *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == Volume_Box_tag) {
    size += snprintf(NULL, 0, "(%s ", "Box");
  temp = AABB_prn(&p->u.Box.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Volume_Ball_tag) {
    size += snprintf(NULL, 0, "(%s ", "Ball");
  temp = Sphere_prn(&p->u.Ball.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Volume_Surface_tag) {
    size += snprintf(NULL, 0, "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Volume_Sdf_tag) {
    size += snprintf(NULL, 0, "(%s ", "Sdf");
  temp = SDF_prn(&p->u.Sdf.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == Volume_Box_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Box");
  temp = AABB_prn(&p->u.Box.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Volume_Ball_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Ball");
  temp = Sphere_prn(&p->u.Ball.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Volume_Surface_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Surface");
  temp = Plane_prn(&p->u.Surface.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Volume_Sdf_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Sdf");
  temp = SDF_prn(&p->u.Sdf.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

double clamp__double(double min, double max, double val) {
    double _28;
    bool _10 = Double__GT_(val, max);
    if (_10) {
        double _13 = max;
        _28 = _13;
    } else {
        double _26;
        bool _19 = Double__LT_(val, min);
        if (_19) {
            double _22 = min;
            _26 = _22;
        } else {
            double _25 = val;
            _26 = _25;
        }
        double _27 = _26;
        _28 = _27;
    }
    return _28;
}

int clamp__int(int min, int max, int val) {
    int _28;
    bool _10 = Int__GT_(val, max);
    if (_10) {
        int _13 = max;
        _28 = _13;
    } else {
        int _26;
        bool _19 = Int__LT_(val, min);
        if (_19) {
            int _22 = min;
            _26 = _22;
        } else {
            int _25 = val;
            _26 = _25;
        }
        int _27 = _26;
        _28 = _27;
    }
    return _28;
}

int id__int(int x) {
    return x;
}

int main(int argc, char** argv) {
    carp_init_globals(argc, argv);
    int _1000003;
    /* let */ {
        TestState _1000006 = Test_State_init(0, 0);
        TestState* _1000005 = &_1000006; // ref
        TestState* physics_MINUS_test = _1000005;
        TestState _370;
        /* let */ {
            TestState _21 = Test_State_init(0, 0);
            TestState state = _21;
            /* let */ {
                Vector3__double _31 = Vector3_init__double(0.0, 0.0, 0.0);
                Quaternion _33 = Quaternion_identity();
                RigidBody _40 = RigidBody_new(_31, _33, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0);
                RigidBody rb_MINUS_a = _40;
                RigidBody* _46 = &rb_MINUS_a; // ref
                Body* _47 = RigidBody_body(_46);
                Vector3__double _52 = Vector3_init__double(10.0, 0.0, 0.0);
                Body_set_MINUS_velocity_BANG_(_47, _52);
                Vector3__double _60 = Vector3_init__double(1.0, 0.0, 0.0);
                Quaternion _62 = Quaternion_identity();
                RigidBody _65 = RigidBody__STATIC_(_60, _62, 1.0, 0.0);
                RigidBody rb_MINUS_b = _65;
                Uint64 _70 = Uint64_from_MINUS_long(0l);
                Uint32 _73 = Uint32_from_MINUS_long(1l);
                Handle__void _74 = Handle_init__void(_70, _73);
                Handle__void h_MINUS_a = _74;
                Uint64 _79 = Uint64_from_MINUS_long(1l);
                Uint32 _82 = Uint32_from_MINUS_long(1l);
                Handle__void _83 = Handle_init__void(_79, _82);
                Handle__void h_MINUS_b = _83;
                Vector3__double _91 = Vector3_init__double(0.5, 0.0, 0.0);
                Vector3__double _96 = Vector3_init__double(-1.0, 0.0, 0.0);
                Contact _97 = Contact_init(0.5, _91, _96);
                Contact cont = _97;
                Array _103 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_103.data)[0] = cont;
                ContactSet _104 = ContactSet_init(h_MINUS_a, h_MINUS_b, _103);
                ContactSet cs = _104;
                RigidBody* _110 = &rb_MINUS_a; // ref
                RigidBody* _113 = &rb_MINUS_b; // ref
                ContactSet* _116 = &cs; // ref
                Solver_solve_BANG_(_110, _113, _116);
                TestState* _123 = &state; // ref
                RigidBody* _131 = &rb_MINUS_a; // ref
                Body* _132 = RigidBody_body(_131);
                Vector3__double* _133 = Body_velocity(_132);
                double* _134 = Vector3_x__double(_133);
                double _135 = Double_copy(_134);
                bool _137 = Double__LT_(_135, -9.0);
                static String _138 = "Bounce reverses velocity";
                String *_138_ref = &_138;
                TestState _139 = Test_assert_MINUS_true__String(_123, _137, _138_ref);
                Test_State_delete(state);
                state = _139;  // Test.State = Test.State
                TestState* _146 = &state; // ref
                RigidBody* _154 = &rb_MINUS_a; // ref
                Transform* _155 = RigidBody_transform(_154);
                Vector3__double* _156 = Transform_position(_155);
                double* _157 = Vector3_x__double(_156);
                double _158 = Double_copy(_157);
                bool _160 = Double__LT_(_158, 0.0);
                static String _161 = "Positional correction pushes A back";
                String *_161_ref = &_161;
                TestState _162 = Test_assert_MINUS_true__String(_146, _160, _161_ref);
                Test_State_delete(state);
                state = _162;  // Test.State = Test.State
                ContactSet_delete(cs);
                RigidBody_delete(rb_MINUS_a);
                RigidBody_delete(rb_MINUS_b);
            }
            /* let */ {
                Vector3__double _173 = Vector3_init__double(0.0, 0.0, 0.0);
                Quaternion _175 = Quaternion_identity();
                RigidBody _182 = RigidBody_new(_173, _175, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0);
                RigidBody rb_MINUS_c = _182;
                RigidBody* _188 = &rb_MINUS_c; // ref
                Body* _189 = RigidBody_body(_188);
                Vector3__double _194 = Vector3_init__double(0.0, 0.0, 10.0);
                Body_set_MINUS_velocity_BANG_(_189, _194);
                Vector3__double _202 = Vector3_init__double(0.0, 0.0, 1.0);
                Quaternion _204 = Quaternion_identity();
                RigidBody _207 = RigidBody__STATIC_(_202, _204, 1.0, 0.0);
                RigidBody rb_MINUS_d = _207;
                Vector3__double _215 = Vector3_init__double(0.0, 0.5, 0.5);
                Vector3__double _220 = Vector3_init__double(0.0, 0.0, -1.0);
                Contact _221 = Contact_init(0.5, _215, _220);
                Contact cont = _221;
                Uint64 _227 = Uint64_from_MINUS_long(0l);
                Uint32 _230 = Uint32_from_MINUS_long(1l);
                Handle__void _231 = Handle_init__void(_227, _230);
                Uint64 _235 = Uint64_from_MINUS_long(1l);
                Uint32 _238 = Uint32_from_MINUS_long(1l);
                Handle__void _239 = Handle_init__void(_235, _238);
                Array _241 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_241.data)[0] = cont;
                ContactSet _242 = ContactSet_init(_231, _239, _241);
                ContactSet cs = _242;
                RigidBody* _248 = &rb_MINUS_c; // ref
                RigidBody* _251 = &rb_MINUS_d; // ref
                ContactSet* _254 = &cs; // ref
                Solver_solve_BANG_(_248, _251, _254);
                TestState* _261 = &state; // ref
                RigidBody* _270 = &rb_MINUS_c; // ref
                Body* _271 = RigidBody_body(_270);
                Vector3__double* _272 = Body_angular_MINUS_velocity(_271);
                double* _273 = Vector3_x__double(_272);
                double _274 = Double_copy(_273);
                double _275 = Double_abs(_274);
                bool _277 = Double__GT_(_275, 0.1);
                static String _278 = "Off-center hit generates angular velocity";
                String *_278_ref = &_278;
                TestState _279 = Test_assert_MINUS_true__String(_261, _277, _278_ref);
                Test_State_delete(state);
                state = _279;  // Test.State = Test.State
                ContactSet_delete(cs);
                RigidBody_delete(rb_MINUS_c);
                RigidBody_delete(rb_MINUS_d);
            }
            /* let */ {
                Vector3__double _290 = Vector3_init__double(0.0, 0.0, 0.0);
                Quaternion _292 = Quaternion_identity();
                RigidBody _295 = RigidBody__STATIC_(_290, _292, 0.0, 0.0);
                RigidBody rb_MINUS_s1 = _295;
                Vector3__double _302 = Vector3_init__double(0.0, 0.0, 0.0);
                Quaternion _304 = Quaternion_identity();
                RigidBody _307 = RigidBody__STATIC_(_302, _304, 0.0, 0.0);
                RigidBody rb_MINUS_s2 = _307;
                Vector3__double _315 = Vector3_init__double(0.0, 0.0, 0.0);
                Vector3__double _320 = Vector3_init__double(1.0, 0.0, 0.0);
                Contact _321 = Contact_init(0.5, _315, _320);
                Contact cont = _321;
                Uint64 _327 = Uint64_from_MINUS_long(0l);
                Uint32 _330 = Uint32_from_MINUS_long(1l);
                Handle__void _331 = Handle_init__void(_327, _330);
                Uint64 _335 = Uint64_from_MINUS_long(1l);
                Uint32 _338 = Uint32_from_MINUS_long(1l);
                Handle__void _339 = Handle_init__void(_335, _338);
                Array _341 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Contact) * 1) };
                ((Contact*)_341.data)[0] = cont;
                ContactSet _342 = ContactSet_init(_331, _339, _341);
                ContactSet cs = _342;
                RigidBody* _348 = &rb_MINUS_s1; // ref
                RigidBody* _351 = &rb_MINUS_s2; // ref
                ContactSet* _354 = &cs; // ref
                Solver_solve_BANG_(_348, _351, _354);
                TestState* _361 = &state; // ref
                static String _363 = "Solver handles static-static without error";
                String *_363_ref = &_363;
                TestState _364 = Test_assert_MINUS_true__String(_361, true, _363_ref);
                Test_State_delete(state);
                state = _364;  // Test.State = Test.State
                ContactSet_delete(cs);
                RigidBody_delete(rb_MINUS_s1);
                RigidBody_delete(rb_MINUS_s2);
            }
            TestState _369 = state;
            _370 = _369;
        }
        TestState* _1000011 = &_370; // ref
        physics_MINUS_test = _1000011;  // (Ref Test.State r276) = (Ref Test.State r276)
        Test_print_MINUS_test_MINUS_results(physics_MINUS_test);
        int* _1000026 = Test_State_failed(physics_MINUS_test);
        int _1000025 = Int_copy(_1000026);
        int _1000007 = _1000025;
        _1000003 = _1000007;
        Test_State_delete(_1000006);
        Test_State_delete(_370);
    }
    return _1000003;
}

double max__double(double a, double b) {
    double _16;
    bool _9 = Double__GT_(a, b);
    if (_9) {
        double _12 = a;
        _16 = _12;
    } else {
        double _15 = b;
        _16 = _15;
    }
    return _16;
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

double min__double(double a, double b) {
    double _16;
    bool _9 = Double__LT_(a, b);
    if (_9) {
        double _12 = a;
        _16 = _12;
    } else {
        double _15 = b;
        _16 = _15;
    }
    return _16;
}

int min__int(int a, int b) {
    int _16;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

bool not(bool a) {
    bool _6 = Bool_not(a);
    return _6;
}

bool null_QMARK___CChar(CChar* p) {
    CChar* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__CChar(NULL, _11);
    return _12;
}

bool null_QMARK___FILE(FILE* p) {
    FILE* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__FILE(NULL, _11);
    return _12;
}

