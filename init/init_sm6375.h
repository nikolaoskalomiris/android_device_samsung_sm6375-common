#ifndef INIT_SM6375_H
#define INIT_SM6375_H

#include <string.h>

enum device_variant {
    VARIANT_A236B = 0,
    VARIANT_A236E,
    VARIANT_A236U,
    VARIANT_A236U1,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant europe_models_a23xq = {
    .model = "SM-A236B",
    .codename = "a23xq"
};

static const variant asia_models_a23xq = {
    .model = "SM-A236E",
    .codename = "a23xq"
};

static const variant america_tmobile_models_a23xq = {
    .model = "SM-A236U",
    .codename = "a23xq"
};

static const variant america_unlocked_models_a23xq = {
    .model = "SM-A236U1",
    .codename = "a23xq"
};

static const variant *all_variants[VARIANT_MAX] = {
    &europe_models_a23xq,
    &asia_models_a23xq,
    &america_tmobile_models_a23xq,
    &america_unlocked_models_a23xq
};

#endif // INIT_SM6375_H
